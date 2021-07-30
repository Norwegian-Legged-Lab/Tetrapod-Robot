#ifndef stepping_stone_h
#define stepping_stone_h

#include<Eigen/Core>
#include<string>

class SteppingStone
{
    public: SteppingStone();
    
    public: SteppingStone(Eigen::Vector3d center, double width, double height, std::string name="");

    public: virtual ~SteppingStone();

    public: const Eigen::Vector3d &getCenter() const {return center;}

    public: const double &getWidth() {return width;}

    public: const double &getHeight() {return height;}

    public: const std::string &getName() const {return name;}

    public: const Eigen::Vector3d &getTopRight() const {return top_right;}

    public: const Eigen::Vector3d &getBottomRight() const {return bottom_right;}

    public: const Eigen::Vector3d &getTopLeft() const {return top_left;}

    public: const Eigen::Vector3d getBottomLeft() const {return bottom_left;}

    public: const Eigen::Matrix<double, 4, 3> &getAIneq() const {return A_ineq;}

    public: const Eigen::Matrix<double, 4, 1> &getBIneq() const {return b_ineq;}

    public: const Eigen::Matrix<double, 1, 3> &getAEq() const {return A_eq;}

    public: const Eigen::Matrix<double, 1, 1> &getBEq() const {return b_eq;}
    /*** Variables ***/

    private: Eigen::Vector3d center;

    private: double width;

    private: double height;

    private: std::string name;

    private: Eigen::Vector3d top_right;

    private: Eigen::Vector3d bottom_right;
    
    private: Eigen::Vector3d top_left;

    private: Eigen::Vector3d bottom_left;

    private: Eigen::Matrix<double, 4, 3> A_ineq;

    private: Eigen::Matrix<double, 4, 1> b_ineq;

    private: Eigen::Matrix<double, 1, 3> A_eq;

    private: Eigen::Matrix<double, 1, 1> b_eq;

};

#endif