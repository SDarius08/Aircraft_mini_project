//
// Created by Darius on 12/29/2024.
//

#include <gtest/gtest.h>
#include "CAirplane_test.h"

TEST(CAirplaneTest, CorrectInputConstructor) {
    // Arrange
    char owner[] = "John Doe";
    int type = 1;
    int expected_class = 3;
    double expected_speed = 123.43;

    // Act
    CAirplane_test plane(owner, type, expected_class, expected_speed);

    // Assert
    EXPECT_EQ(plane.GetProp(), expected_class);
    EXPECT_DOUBLE_EQ(plane.GetSpeed(), expected_speed);
}

TEST(CAirplaneTest, CorrectVidValues)
{
    CAirplane_test plane;
    EXPECT_EQ(plane.GetProp(),0);
    EXPECT_EQ(plane.GetSpeed(), 0);
}