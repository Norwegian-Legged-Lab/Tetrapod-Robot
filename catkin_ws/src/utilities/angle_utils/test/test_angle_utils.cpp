// API for testing
#include <angle_utils/angle_utils.h>

// gtest
#include <gtest/gtest.h>


// Declare tests
TEST(AngleUtils, conversions)
{
    EXPECT_EQ(2*angle_utils::PI, angle_utils::degToRad(360));
    EXPECT_EQ(3*angle_utils::PI, angle_utils::degToRad(540));
    EXPECT_EQ(180, angle_utils::radToDeg(angle_utils::PI));
    EXPECT_EQ(360, angle_utils::radToDeg(2*angle_utils::PI));
}

// Run all the tests that were declared with TEST()
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}