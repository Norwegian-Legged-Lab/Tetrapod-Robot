#include "support_polytope_base_planner/polytopes.h"

Polytopes::Polytopes(Eigen::Matrix<double, Eigen::Dynamic, 2> points, double epsilon, bool skip_first)
{
    int num_polytopes = skip_first ? points.rows() - 3:points.rows() - 2;

    polytope_list = Eigen::Matrix<Polytope, Eigen::Dynamic, 1>(num_polytopes);

    int offset = skip_first ? 1:0;

    for (int i = 0; i < num_polytopes; ++i)
    {
        polytope_list(i) = Polytope(points.block(i + offset, 0, 3, 2), epsilon);
    }


}

void Polytopes::WritePolytopesTofile(std::string base_name)
{
    int num_polytopes = this->polytope_list.rows();

    Eigen::Matrix<double, Eigen::Dynamic, 2> As(num_polytopes*3, 2);

    Eigen::Matrix<double, Eigen::Dynamic, 1> bs(num_polytopes*3, 1);

    for (int i = 0; i < num_polytopes; ++i)
    {
        As.block(i*3, 0, 3, 2) << this->polytope_list(i).GetA();
        bs.block(i*3, 0, 3, 1) << this->polytope_list(i).GetB();
    }

    std::cout << As.rows() << " " << As.cols() << std::endl;
    std::cout << bs.rows() << " " << bs.cols() << std::endl;
    WriteMatToFile(As, base_name + "_As.csv");

    WriteMatToFile(bs, base_name + "_bs.csv");
}
