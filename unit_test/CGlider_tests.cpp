//
// Created by Darius on 12/29/2024.
//

#include <gtest/gtest.h>
#include "../headers/CGlider.h"

TEST(CGliderTest, CheckDefaultValues)
{
    CGlider glider;
    EXPECT_EQ(glider.GetClass(),0);
    EXPECT_EQ(glider.GetLoad(), 0);
}