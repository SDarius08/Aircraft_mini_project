//
// Created by Darius on 12/29/2024.
//

#ifndef PROIECT_CURS_POO_CAIRCRAFTFACTORY_H
#define PROIECT_CURS_POO_CAIRCRAFTFACTORY_H

#include "CAircraft.h"

class CAircraftFactory
{
public:
    CAircraft* CreateAircraft(int type, int option);
};


#endif //PROIECT_CURS_POO_CAIRCRAFTFACTORY_H
