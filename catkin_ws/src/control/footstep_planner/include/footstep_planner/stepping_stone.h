#ifndef stepping_stone_h
#define stepping_stone_h

#include<Eigen/Core>
#include<string>

class SteppingStone
{
    public: SteppingStone();
    
    public: SteppingStone(Eigen::Matrix<double, 2, 1> center, double width, double height, std::string name="");

    public: virtual ~SteppingStone();

    public: const Eigen::Matrix<double, 2, 1> &getCenter() const {return center;}

    public: const double &getWidth() {return width;}

    public: const double &getHeight() {return height;}

    public: const std::string &getName() const {return name;}

    public: const Eigen::Matrix<double, 2, 1> &getTopRight() const {return top_right;}

    public: const Eigen::Matrix<double, 2, 1> &getBottomRight() const {return bottom_right;}

    public: const Eigen::Matrix<double, 2, 1> &getTopLeft() const {return top_left;}

    public: const Eigen::Matrix<double, 2, 1> getBottomLeft() const {return bottom_left;}

    public: const Eigen::Matrix<double, 4, 2> &getA() const {return A;}

    public: const Eigen::Matrix<double, 4, 1> &getB() const {return b;}
    
    public: void print();
    /*** Variables ***/

    private: Eigen::Matrix<double, 2, 1> center;

    private: double width;

    private: double height;

    private: std::string name;

    private: Eigen::Matrix<double, 2, 1> top_right;

    private: Eigen::Matrix<double, 2, 1> bottom_right;
    
    private: Eigen::Matrix<double, 2, 1> top_left;

    private: Eigen::Matrix<double, 2, 1> bottom_left;

    private: Eigen::Matrix<double, 4, 2> A;

    private: Eigen::Matrix<double, 4, 1> b;

};

#endif