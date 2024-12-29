//
// Created by Darius on 12/29/2024.
//
#include "../headers/CAirplane_test.h"
#include "../headers/CGlider.h"
#include "../headers/FlyingObject.h"
#include "../headers/CAircraftFactory.h"

CAircraft* CAircraftFactory::CreateAircraft(int type, int option)
{
    CAircraft *temp = nullptr;
    switch (type)
    {
        case 1:
        if(option == FlyingObject::CPropulsionType::JET || option == FlyingObject::CPropulsionType::PROPELLER)
        {
            CAirplane_test tempAirplane("Default", type, option, 0);
            try
            {
                temp = dynamic_cast<CAircraft*>(&tempAirplane);
            }catch(const std::bad_cast& e)
            {
                std::cerr<<"Eroare: "<<e.what()<<'\n';
            }

        }
        else
            return nullptr;
        return temp;
        case 2:
            if(option == FlyingObject::CGliderType::CLUB ||
                    option == FlyingObject::CGliderType::STANDARD ||
                    option == FlyingObject::CGliderType::DUAL_SEATS ||
                    option == FlyingObject::CGliderType::OPEN)
            {
                CGlider tempGlider("Default", type, option, 0);
                try
                {
                    temp = dynamic_cast<CAircraft*>(&tempGlider);
                }
                catch(std::bad_cast e)
                {
                    std::cerr<<"Eroare: "<<e.what()<<'\n';
                }
                return temp;
            }
            else
                return nullptr;
        default:
            return nullptr;
    }
}