// API for testing
#include <math_utils/math_utils.h>

// gtest
#include <gtest/gtest.h>


// Declare tests
TEST(AngleUtils, constants)
{
    EXPECT_DOUBLE_EQ(boost::math::constants::pi<double>(), math_utils::PI);
    EXPECT_DOUBLE_EQ(2*boost::math::constants::pi<double>(), 2*math_utils::PI);
    EXPECT_NEAR(3.1415926, math_utils::PI, 0.0000001);
}

TEST(AngleUtils, conversions)
{
    EXPECT_DOUBLE_EQ(math_utils::TWO_PI, math_utils::degToRad(360));
    EXPECT_DOUBLE_EQ(3*math_utils::PI, math_utils::degToRad(540));
    EXPECT_DOUBLE_EQ(180, math_utils::radToDeg(math_utils::PI));
    EXPECT_DOUBLE_EQ(360, math_utils::radToDeg(math_utils::TWO_PI));
}

TEST(AngleUtils, wrappers)
{
    EXPECT_DOUBLE_EQ(0, math_utils::wrapAngleTo2Pi(-math_utils::TWO_PI));
    EXPECT_DOUBLE_EQ(math_utils::PI, math_utils::wrapAngleTo2Pi(-math_utils::PI));
    EXPECT_DOUBLE_EQ(math_utils::PI, math_utils::wrapAngleTo2Pi(-3*math_utils::PI));
    EXPECT_DOUBLE_EQ(0, math_utils::wrapAngleTo2Pi(4*math_utils::PI));

    EXPECT_DOUBLE_EQ(0, math_utils::wrapAngleToPi(2*math_utils::PI));
    EXPECT_DOUBLE_EQ(-math_utils::HALF_PI, math_utils::wrapAngleToPi(2*math_utils::THREE_QUARTERS_PI));
    EXPECT_DOUBLE_EQ(-math_utils::PI, math_utils::wrapAngleToPi(-3*math_utils::PI));
    EXPECT_DOUBLE_EQ(-math_utils::PI, math_utils::wrapAngleToPi(3*math_utils::PI));

    EXPECT_DOUBLE_EQ(0, math_utils::angleDiff(math_utils::PI,-3*math_utils::PI));
    EXPECT_DOUBLE_EQ(-math_utils::HALF_PI, math_utils::angleDiff(math_utils::PI,math_utils::HALF_PI));
    EXPECT_DOUBLE_EQ(math_utils::HALF_PI, math_utils::angleDiff(math_utils::HALF_PI,math_utils::PI));

}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}