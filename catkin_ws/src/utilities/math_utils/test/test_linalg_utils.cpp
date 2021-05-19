// API for testing
#include <math_utils/linalg_utils.h>

// gtest
#include <gtest/gtest.h>


// Declare tests
TEST(LinalgUtils, nullSpaceProjector)
{
    Eigen::Matrix<double, 3, 2> A;
    
    A << 0, 0,
         0, 0, 
         0, 0;

    Eigen::Matrix<double, 2, 2> N;

    math_utils::nullSpaceProjector(A, N);

    Eigen::Matrix<double, 2, 2> expectedN;

    expectedN << 0, 0,
                 0, 0;

    // TODO Add test
}


// Run all the tests that were declared with TEST()
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}