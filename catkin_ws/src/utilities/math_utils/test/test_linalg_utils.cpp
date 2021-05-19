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


// Run all the tests that were declared with TEST()
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}