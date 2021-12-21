#include<hierarchical_optimization_controller/task.h>

TaskGenerator::TaskGenerator(
    Kinematics _kinematics,
    const Eigen::Matrix<double, 3, 1> &_desired_base_pos,
    const Eigen::Matrix<double, 3, 1> &_desired_base_vel,
    const Eigen::Matrix<double, 3, 1> &_desired_base_acc,
    const Eigen::Matrix<double, 3, 1> &_desired_base_ori,
    const Eigen::Matrix<double, 3, 1> &_desired_base_omega,
    const Eigen::Matrix<double, 3, 1> &_desired_base_alpha,
    const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_pos,
    const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_vel,
    const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_desired_f_acc,
    const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_pos,
    const Eigen::Matrix<Eigen::Vector3d, 4, 1> &_f_vel,
    const Eigen::Matrix<double, 18, 1> &_q,
    const Eigen::Matrix<double, 18, 1> &_u,
    const double &_mu,
    const double &_k_p_fb_pos,
    const double &_k_d_fb_pos,
    const double &_k_p_fb_rot,
    const double &_k_d_fb_rot,
    const double &_k_p_fl,
    const double &_k_d_fl,
    const double &_k_p_fr,
    const double &_k_d_fr,
    const double &_k_p_rl,
    const double &_k_d_rl,
    const double &_k_p_rr,
    const double &_k_d_rr,
    const double &_k_p_pt,
    const double &_k_d_pt,
    const double &_tau_min,
    const double &_tau_max,
    const std::vector<Kinematics::LegType> &_contact_legs,
    const std::vector<Kinematics::LegType> &_swing_legs)
{
    kinematics = _kinematics;

    desired_base_pos = _desired_base_pos;
    desired_base_vel = _desired_base_vel;
    desired_base_acc = _desired_base_acc;
    desired_base_ori = _desired_base_ori;
    desired_base_omega = _desired_base_omega;
    desired_base_alpha = _desired_base_alpha;
    desired_f_pos = _desired_f_pos;
    desired_f_vel = _desired_f_vel;
    desired_f_acc = _desired_f_acc;
    f_pos = _f_pos;
    f_vel = _f_vel;
    q = _q;
    u = _u;
    mu = _mu;
    k_p_fb_pos = _k_p_fb_pos*Eigen::Matrix3d::Identity();
    k_d_fb_pos = _k_d_fb_pos*Eigen::Matrix3d::Identity();
    k_p_fb_rot = _k_p_fb_rot*Eigen::Matrix3d::Identity();
    k_d_fb_rot = _k_d_fb_rot*Eigen::Matrix3d::Identity();
    k_p_fl = _k_p_fl*Eigen::Matrix3d::Identity();
    k_d_fl = _k_d_fl*Eigen::Matrix3d::Identity();
    k_p_fr = _k_p_fr*Eigen::Matrix3d::Identity();
    k_d_fr = _k_d_fr*Eigen::Matrix3d::Identity();
    k_p_rl = _k_p_rl*Eigen::Matrix3d::Identity();
    k_d_rl = _k_d_rl*Eigen::Matrix3d::Identity();
    k_p_rr = _k_p_rr*Eigen::Matrix3d::Identity();
    k_d_rr = _k_d_rr*Eigen::Matrix3d::Identity();
    k_p_pt = _k_p_pt*Eigen::Matrix<double, 12, 12>::Identity();
    k_d_pt = _k_d_pt*Eigen::Matrix<double, 12, 12>::Identity();
    contact_legs = _contact_legs;
    swing_legs = _swing_legs;

    n_c = contact_legs.size();
    n_s = swing_legs.size();
    state_dim = 18 + 3*n_c;

    J_c.resize(3*n_c, 18);
    dot_J_c.resize(3*n_c, 18);

    // Update matrices and terms
    M = kinematics.GetMassMatrix(q);

    b = kinematics.GetCoriolisAndCentrifugalTerms(q, u);

    g = kinematics.GetGravitationalTerms(q);

    J_c = kinematics.GetContactJacobianInW(contact_legs, q);

    dot_J_c = kinematics.GetContactJacobianInWDiff(contact_legs, q, u);

    // Update matrices used by motion tracking constraints
    J_P_fb = kinematics.GetTranslationJacobianInC(Kinematics::LegType::NONE,
                                                  Kinematics::BodyType::base,
                                                  q);
    J_R_fb = kinematics.GetRotationJacobianInC(Kinematics::LegType::NONE,
                                               Kinematics::BodyType::base,
                                               q);
    J_P_fl = kinematics.GetTranslationJacobianInC(Kinematics::LegType::frontLeft,
                                                  Kinematics::BodyType::foot,
                                                  q);
    J_P_fr = kinematics.GetTranslationJacobianInC(Kinematics::LegType::frontRight,
                                                  Kinematics::BodyType::foot,
                                                  q);
    J_P_rl = kinematics.GetTranslationJacobianInC(Kinematics::LegType::rearLeft,
                                                  Kinematics::BodyType::foot,
                                                  q);
    J_P_rr = kinematics.GetTranslationJacobianInC(Kinematics::LegType::rearRight,
                                                  Kinematics::BodyType::foot,
                                                  q);

    dot_J_P_fb = kinematics.GetTranslationJacobianInCDiff(Kinematics::LegType::NONE,
                                                          Kinematics::BodyType::base,
                                                          q,
                                                          u);
    dot_J_R_fb = kinematics.GetRotationJacobianInCDiff(Kinematics::LegType::NONE,
                                                       Kinematics::BodyType::base,
                                                       q,
                                                       u);
    dot_J_P_fl = kinematics.GetTranslationJacobianInCDiff(Kinematics::LegType::frontLeft,
                                                          Kinematics::BodyType::foot,
                                                          q,
                                                          u);
    dot_J_P_fr = kinematics.GetTranslationJacobianInCDiff(Kinematics::LegType::frontRight,
                                                          Kinematics::BodyType::foot,
                                                          q,
                                                          u);
    dot_J_P_rl = kinematics.GetTranslationJacobianInCDiff(Kinematics::LegType::rearLeft,
                                                          Kinematics::BodyType::foot,
                                                          q,
                                                          u);
    dot_J_P_rr = kinematics.GetTranslationJacobianInCDiff(Kinematics::LegType::rearRight,
                                                          Kinematics::BodyType::foot,
                                                          q,
                                                          u);
    // Update terms used by posture tracking constraints
    q_r_nom << math_utils::degToRad(45),
               math_utils::degToRad(-20),
               math_utils::degToRad(90),
               math_utils::degToRad(-45),
               math_utils::degToRad(20),
               math_utils::degToRad(-90),
               math_utils::degToRad(135),
               math_utils::degToRad(20),
               math_utils::degToRad(-90),
               math_utils::degToRad(-135),
               math_utils::degToRad(-20),
               math_utils::degToRad(90);

    // Update terms used by the contact force and torque limits
    rotationWToC = kinematics.GetRotationMatrixWToC(0, 0, q(5));

    h = rotationWToC * Eigen::Vector3d(1, 0, 0);
    l = rotationWToC * Eigen::Vector3d(0, 1, 0);
    n = Eigen::Vector3d(0, 0, 1);

    tau_max.setConstant(_tau_max);
    tau_min.setConstant(_tau_min);
}


TaskGenerator::Task TaskGenerator::EomTask()
{
    Task t_eom;
    // Resize task dimensions
    t_eom.A_eq.resize(6, state_dim);
    t_eom.b_eq.resize(6, 1);

    // Update equations of motion task
    t_eom.A_eq.leftCols(18) = M.topRows(6);
    t_eom.A_eq.rightCols(3*n_c) = - J_c.transpose().topRows(6);
    t_eom.b_eq = - (b.topRows(6) + g.topRows(6));

    // Update task constraint setting
    t_eom.has_eq_constraint = true;

    return t_eom;
}

TaskGenerator::Task TaskGenerator::CmcTask()
{
    Task t_cmc;
    t_cmc.A_eq.resize(3*n_c, state_dim);
    t_cmc.b_eq.resize(3*n_c, 1);
    t_cmc.A_eq.leftCols(18) = J_c;
    t_cmc.A_eq.rightCols(3*n_c).setZero();
    t_cmc.b_eq = - dot_J_c * u;
    t_cmc.has_eq_constraint = true;

    return t_cmc;
}

TaskGenerator::Task TaskGenerator::CftlTask()
{
    Task t_cftl;

    t_cftl.A_ineq.resize(4*n_c + 24, state_dim);
    t_cftl.b_ineq.resize(4*n_c + 24, 1);

    for (size_t i = 0; i < n_c; i++)
    {
        t_cftl.A_ineq.block(4*i, 0, 1, state_dim).setZero();
        t_cftl.A_ineq.block(4*i, 18 + 3*i, 1, 3) = (h.transpose() - n.transpose() * mu);

        t_cftl.A_ineq.block(4*i + 1, 0, 1, state_dim).setZero();
        t_cftl.A_ineq.block(4*i + 1, 18 + 3*i, 1, 3) = - (h.transpose() + n.transpose() * mu);

        t_cftl.A_ineq.block(4*i + 2, 0, 1, state_dim).setZero();
        t_cftl.A_ineq.block(4*i + 2, 18 + 3*i, 1, 3) = (l.transpose() - n.transpose() * mu);

        t_cftl.A_ineq.block(4*i + 3, 0, 1, state_dim).setZero();
        t_cftl.A_ineq.block(4*i + 3, 18 + 3*i, 1, 3) = - (l.transpose() + n.transpose() * mu);
    }

    t_cftl.b_ineq.topRows(4*n_c).setZero();
        // Max torque limit
    //t_cftl.A_ineq.block(4*n_c, 0, 12, state_dim).leftCols(18) = M.bottomRows(12);
    //t_cftl.A_ineq.block(4*n_c, 0, 12, state_dim).rightCols(3*n_c) = - J_c.transpose().bottomRows(12);
    //t_cftl.b_ineq.block(4*n_c, 0, 12, state_dim) = tau_max - (b.bottomRows(12) + g.bottomRows(12));
    t_cftl.A_ineq.block(4*n_c, 0, 12, 18) = M.bottomRows(12);
    t_cftl.A_ineq.block(4*n_c, 18, 12, 3*n_c) = - J_c.transpose().bottomRows(12);
    t_cftl.b_ineq.block(4*n_c, 0, 12, 1) = tau_max - (b.bottomRows(12) + g.bottomRows(12));

    //    // Min torque limit
    //t_cftl.A_ineq.block(4*n_c + 12, 0, 12, state_dim).leftCols(18) = - M.bottomRows(12);
    //t_cftl.A_ineq.block(4*n_c + 12, 0, 12, state_dim).rightCols(3*n_c) = J_c.transpose().bottomRows(12);
    //t_cftl.b_ineq.block(4*n_c + 12, 0, 12, state_dim) = - tau_min + (b.bottomRows(12) + g.bottomRows(12));
    t_cftl.A_ineq.block(4*n_c + 12, 0, 12, 18) = - M.bottomRows(12);
    t_cftl.A_ineq.block(4*n_c + 12, 18, 12, 3*n_c) = J_c.transpose().bottomRows(12);
    t_cftl.b_ineq.block(4*n_c + 12, 0, 12, 1) = - tau_min + (b.bottomRows(12) + g.bottomRows(12));

    t_cftl.has_ineq_constraint = true;

    return t_cftl;
}

TaskGenerator::Task TaskGenerator::MtTask()

{
    Task t_mt;

    // Get base orientation
    kindr::EulerAnglesXyz<double> base_ori(q.segment(3,3));
    
    kindr::EulerAnglesXyz<double> desired_base_ori_kindr(desired_base_ori);
    
    Eigen::Vector3d orientation_error = desired_base_ori_kindr.boxMinus(base_ori);


    t_mt.A_eq.resize(18, state_dim);
    t_mt.b_eq.resize(18, 1);

    t_mt.A_eq.setZero();
    t_mt.b_eq.setZero();

    t_mt.A_eq.block(0, 0, 3, state_dim).leftCols(18) = J_P_fb;
    t_mt.A_eq.block(0, 0, 3, state_dim).rightCols(3*n_c).setZero();
    t_mt.b_eq.block(0, 0, 3, 1) = desired_base_acc + k_p_fb_pos * (desired_base_pos - q.topRows(3))
                                  + k_d_fb_pos * (desired_base_vel - u.topRows(3)) - dot_J_P_fb * u;
    //t_mt.A_eq.block(0, 0, 3, state_dim).setZero();
    //t_mt.b_eq.block(0, 0, 3, 1).setZero();
        // Floating base orientation
    t_mt.A_eq.block(3, 0, 3, state_dim).leftCols(18) = J_R_fb;
    t_mt.A_eq.block(3, 0, 3, state_dim).rightCols(3*n_c).setZero();

    //t_mt.b_eq.block(3, 0, 3, 1) = k_p_fb_rot * (desired_base_ori - _q.segment(3,3)) 
    //                              + k_d_fb_rot * (- u.segment(3,3)) - dot_J_R_fb * u;

    t_mt.b_eq.block(3, 0, 3, 1) = desired_base_alpha + k_p_fb_rot * (orientation_error)
                                  + k_d_fb_rot * (desired_base_omega - u.segment(3,3)) - dot_J_R_fb * u;
    //t_mt.A_eq.block(3, 0, 3, state_dim).setZero();
    //t_mt.b_eq.block(3, 0, 3, 1).setZero();

        // Front-left foot
    t_mt.A_eq.block(6, 0, 3, state_dim).leftCols(18) = J_P_fl;
    t_mt.A_eq.block(6, 0, 3, state_dim).rightCols(3*n_c).setZero();
    t_mt.b_eq.block(6, 0, 3, 1) = desired_f_acc(0) + k_p_fl * (desired_f_pos(0) - f_pos(0))
                                  + k_d_fl * (desired_f_vel(0) - f_vel(0)) - dot_J_P_fl * u;

        // Front-right foot
    t_mt.A_eq.block(9, 0, 3, state_dim).leftCols(18) = J_P_fr;
    t_mt.A_eq.block(9, 0, 3, state_dim).rightCols(3*n_c).setZero();
    t_mt.b_eq.block(9, 0, 3, 1) = desired_f_acc(1) + k_p_fr * (desired_f_pos(1) - f_pos(1))
                                  + k_d_fr * (desired_f_vel(1) - f_vel(1)) - dot_J_P_fr * u;

        // Rear-left foot
    t_mt.A_eq.block(12, 0, 3, state_dim).leftCols(18) = J_P_rl;
    t_mt.A_eq.block(12, 0, 3, state_dim).rightCols(3*n_c).setZero();
    t_mt.b_eq.block(12, 0, 3, 1) = desired_f_acc(2) + k_p_rl * (desired_f_pos(2) - f_pos(2))
                                  + k_d_rl * (desired_f_vel(2) - f_vel(2)) - dot_J_P_rl * u;

        // Rear-right foot
    t_mt.A_eq.block(15, 0, 3, state_dim).leftCols(18) = J_P_rr;
    t_mt.A_eq.block(15, 0, 3, state_dim).rightCols(3*n_c).setZero();
    t_mt.b_eq.block(15, 0, 3, 1) = desired_f_acc(3) + k_p_rr * (desired_f_pos(3) - f_pos(3))
                                  + k_d_rr * (desired_f_vel(3) - f_vel(3)) - dot_J_P_rr * u;
    
    t_mt.has_eq_constraint = true;

    return t_mt;
}

TaskGenerator::Task TaskGenerator::PtTask()
{
    Task t_pt;

    t_pt.A_eq.resize(12, state_dim);
    t_pt.b_eq.resize(12, 1);

    // Update posture tracking task
    t_pt.A_eq.leftCols(6).setZero();
    t_pt.A_eq.block(0, 6, 12, 12).setIdentity();
    t_pt.A_eq.rightCols(3*n_c).setZero();
    t_pt.b_eq = k_p_pt * (q_r_nom - q.bottomRows(12)) + k_d_pt * (-u.bottomRows(12));

    t_pt.has_eq_constraint = true;

    return t_pt;
}
TaskGenerator::Task TaskGenerator::CfmTask()
{
    Task t_cfm;

    t_cfm.A_eq.resize(3*n_c, state_dim);
    t_cfm.b_eq.resize(3*n_c, 1);

    t_cfm.A_eq.leftCols(18).setZero();
    t_cfm.A_eq.rightCols(3*n_c).setIdentity();
    t_cfm.b_eq.setZero();

    t_cfm.has_eq_constraint = true;

    return t_cfm;
}