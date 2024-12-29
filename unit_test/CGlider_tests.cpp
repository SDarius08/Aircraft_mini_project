//
// Created by Darius on 12/29/2024.
//

#include <gtest/gtest.h>
#include "CGlider.h"

TEST(CGliderTest, CorrectInputConstructor) {
    // Arrange
    char owner[] = "John Doe";
    int type = 1;
    int expected_class = 3;
    double expected_load = 1200.5;

    // Act
    CGlider glider(owner, type, expected_class, expected_load);

    // Assert
    EXPECT_EQ(glider.GetClass(), expected_class);
    EXPECT_DOUBLE_EQ(glider.GetLoad(), expected_load);
}

TEST(CGliderTest, CorrectVidValues)
{
    CGlider glider;
    EXPECT_EQ(glider.GetClass(),0);
    EXPECT_EQ(glider.GetLoad(), 0);
}

