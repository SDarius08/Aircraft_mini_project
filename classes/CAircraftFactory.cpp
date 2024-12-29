//
// Created by pafnu on 12/29/2024.
//
#include "../headers/CAirplane.h"
#include "../headers/CGlinder.h"
#include "../headers/FlyingObject.h"
#include "../headers/CAircraftFactory.h"

CAircraft* CAircraftFactory::CreateAircraft(int type, int option)
{
    CAircraft *temp;
    switch (type)
    {
        case 1:
        if(option == FlyingObject::CPropulsionType::JET || option == FlyingObject::CPropulsionType::PROPELLER)
        {
            CAirplane tempAirplane("Default", type,option,0);
            temp = dynamic_cast<CAircraft*>(&tempAirplane);
        }
        else
            return nullptr;
        return temp;
        break;
        case 2:
            if(option == FlyingObject::CGliderType::CLUB ||
                    option == FlyingObject::CGliderType::STANDARD ||
                    option == FlyingObject::CGliderType::DUAL_SEATS ||
                    option == FlyingObject::CGliderType::OPEN)
            {
                CGlinder tempGlider("Default",type,option,0);
                temp = dynamic_cast<CAircraft*>(&tempGlider);
            }
            else
                return nullptr;
            return temp;
            break;
        default:
            return nullptr;
    }
}