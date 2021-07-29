// API for testing
#include <math_utils/linalg_utils.h>

// gtest
#include <gtest/gtest.h>


// Declare tests
TEST(LinalgUtils, nullSpaceProjector)
{
    Eigen::Matrix<double, 3, 2> A;
    
    A << 1, 0,
         0, 0, 
         0, 0;

    Eigen::Matrix<double, 2, 2> N;

    math_utils::nullSpaceProjector(A, N);

    Eigen::Matrix<double, 2, 2> expectedN;

    expectedN << 0, 0,
                 0, 1;

    ASSERT_TRUE(N.isApprox(expectedN, 0.0001));
}

TEST(LinalgUtils, boxMinus)
{
    Eigen::Vector3d a(5, 2, 3);
    Eigen::Vector3d b(1, 5, 2);

    Eigen::Vector3d res = math_utils::boxMinus(a, b);

    Eigen::Vector3d expectedRes(1.609437912,
                                -0.91629073,
                                0.40546510);

    ASSERT_TRUE(res.isApprox(expectedRes, 0.0001));
}


// Run all the tests that were declared with TEST()
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}