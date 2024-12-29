//
// Created by Darius on 12/29/2024.
//

#include <gtest/gtest.h>
#include "CAircraftFactory.h"

TEST(CAircraftFactoryTest, IncorrectType)
{
    int type = 11;
    int option = 2;
    CAircraftFactory factory;
    CAircraft *temp;

    temp = factory.CreateAircraft(type,option);

    EXPECT_EQ(temp, nullptr);
}

TEST(CAircraftFactoryTest, IncorrectOption)
{
    int type = 1;
    int option = 22;
    CAircraftFactory factory;
    CAircraft *temp;

    temp = factory.CreateAircraft(type,option);

    EXPECT_EQ(temp, nullptr);
}

TEST(CAircraftFactoryTest, ValidInput)
{
    int type = 1;
    int option = 2;
    CAircraftFactory factory;
    CAircraft *temp;

    temp = factory.CreateAircraft(type,option);

    EXPECT_FALSE(temp == nullptr);
}