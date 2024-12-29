//
// Created by pafnu on 12/29/2024.
//

#ifndef PROIECT_CURS_POO_FLYINGOBJECT_H
#define PROIECT_CURS_POO_FLYINGOBJECT_H

namespace FlyingObject
{

    class CAircraftType{
    public:
        static const int AIRPLANE = 1;
        static const int GLIDER = 2;
        static char* GetTypeName(int); // Return the aircraft type
    };

    class CPropulsionType{
    public:
        static const int NONE = 0;
        static const int JET = 1;
        static const int PROPELLER = 2;
        static char* GetTypeName(int); // Return the aircraft type
    };

    class CGliderType {
    public:
        static const int CLUB = 1;
        static const int STANDARD = 2;
        static const int DUAL_SEATS = 3;
        static const int OPEN = 4;
        static char* GetTypeName(int); // Return the aircraft type
    };

} // FlyingObject

#endif //PROIECT_CURS_POO_FLYINGOBJECT_H
