//
// Created by Darius on 12/29/2024.
//
#include "../headers/FlyingObject.h"

namespace FlyingObject {
    char *CAircraftType::GetTypeName(int type)
    {
        switch (type)
        {
            case 1: return "Airplane";
            case 2: return "Glider";
            default: return "Unknown";
        }
    }

    char* CPropulsionType::GetTypeName(int type)
    {
        switch (type)
        {
            case 0: return "None";
            case 1: return "Jet";
            case 2: return "Propeller";
            default: return "Unknown";
        }
    }

    char* CGliderType::GetTypeName(int type)
    {
        switch (type)
        {
            case 1: return "Club";
            case 2: return "Standard";
            case 3: return "Dual_Seat";
            case 4: return "Open";
            default: return "Unknown";
        }
    }

} // FlyingObject