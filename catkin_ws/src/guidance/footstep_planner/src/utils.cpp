#include "footstep_planner/utils.h"

double wrap(double num, double range, double offset)
{
    return offset + std::fmod(num - offset, range);
}

drake::symbolic::Expression drake_or(drake::symbolic::Variable &b1, drake::symbolic::Variable &b2)
{
    return b1 + b2 - b1*b2;
}

drake::symbolic::Expression drake_and(drake::symbolic::Variable &b1, drake::symbolic::Variable &b2)
{
    return b1*b2;
}

drake::symbolic::Expression drake_nor(drake::symbolic::Variable &b1, drake::symbolic::Variable &b2)
{
    return 1 + b1*b2 - b1 - b2;
}

drake::symbolic::Expression drake_nand(drake::symbolic::Variable &b1, drake::symbolic::Variable &b2)
{
    return 1 - b1*b2;
}

Eigen::MatrixXd get_sin_coeffs()
{
    Eigen::Matrix<double, 5, 2> res;
    res << 0, 1,
        1, 0,
        M_PI, -1,
        -1, 0,
        -2*M_PI, 1;
    
    return res;
}

Eigen::MatrixXd get_cos_coeffs()
{
    Eigen::Matrix<double, 5, 2> res;

    res << 1, 0,
        M_PI/2, -1,
        -1, 0,
        2 - 2*M_PI, 1,
        1, 0;
    
    return res;
}

void writeMatToFile(const Eigen::MatrixXd &mat, std::string filename)
{
    std::ofstream file(filename);

    if (file.is_open())
    {
        file.clear();

        file << mat;
    } else
    {
        throw "could not open file " + filename;
    }
    
    file.close();
}
