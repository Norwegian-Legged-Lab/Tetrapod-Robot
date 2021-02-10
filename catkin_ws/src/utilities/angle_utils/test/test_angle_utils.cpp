// API for testing
#include <angle_utils/angle_utils.h>

// gtest
#include <gtest/gtest.h>


// Declare tests
TEST(AngleUtils, constants)
{
    EXPECT_DOUBLE_EQ(boost::math::constants::pi<double>(), angle_utils::PI);
    EXPECT_DOUBLE_EQ(2*boost::math::constants::pi<double>(), 2*angle_utils::PI);
    EXPECT_NEAR(3.1415926, angle_utils::PI, 0.0000001);
}

TEST(AngleUtils, conversions)
{
    EXPECT_DOUBLE_EQ(angle_utils::TWO_PI, angle_utils::degToRad(360));
    EXPECT_DOUBLE_EQ(3*angle_utils::PI, angle_utils::degToRad(540));
    EXPECT_DOUBLE_EQ(180, angle_utils::radToDeg(angle_utils::PI));
    EXPECT_DOUBLE_EQ(360, angle_utils::radToDeg(angle_utils::TWO_PI));
}

TEST(AngleUtils, wrappers)
{
    EXPECT_DOUBLE_EQ(0, angle_utils::wrapAngleTo2Pi(-angle_utils::TWO_PI));
    EXPECT_DOUBLE_EQ(angle_utils::PI, angle_utils::wrapAngleTo2Pi(-angle_utils::PI));
    EXPECT_DOUBLE_EQ(angle_utils::PI, angle_utils::wrapAngleTo2Pi(-3*angle_utils::PI));
    EXPECT_DOUBLE_EQ(0, angle_utils::wrapAngleTo2Pi(4*angle_utils::PI));

    EXPECT_DOUBLE_EQ(0, angle_utils::wrapAngleToPi(2*angle_utils::PI));
    EXPECT_DOUBLE_EQ(-angle_utils::HALF_PI, angle_utils::wrapAngleToPi(2*angle_utils::THREE_QUARTERS_PI));
    EXPECT_DOUBLE_EQ(-angle_utils::PI, angle_utils::wrapAngleToPi(-3*angle_utils::PI));
    EXPECT_DOUBLE_EQ(-angle_utils::PI, angle_utils::wrapAngleToPi(3*angle_utils::PI));

    EXPECT_DOUBLE_EQ(0, angle_utils::angleDiff(angle_utils::PI,-3*angle_utils::PI));
    EXPECT_DOUBLE_EQ(-angle_utils::HALF_PI, angle_utils::angleDiff(angle_utils::PI,angle_utils::HALF_PI));
    EXPECT_DOUBLE_EQ(angle_utils::HALF_PI, angle_utils::angleDiff(angle_utils::HALF_PI,angle_utils::PI));

}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}