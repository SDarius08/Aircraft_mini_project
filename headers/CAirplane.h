//
// Created by Darius on 12/29/2024.
//

#ifndef PROIECT_CURS_POO_CAIRPLANE_H
#define PROIECT_CURS_POO_CAIRPLANE_H

#include <iostream>
#include "CAircraft.h"

class CAirplane : public CAircraft
{
    int m_propulsion;
    double m_speed;
public:
    CAirplane();
    CAirplane(char*, int, int, double);
    ~CAirplane() {};
    CAirplane(const CAirplane&);
    CAirplane& operator=(const CAirplane&);
    void Write() override;
    void Read() override;
    friend std::ostream& operator<<(std::ostream&, CAirplane);
    friend std::istream& operator>>(std::istream&, CAirplane);
};


#endif //PROIECT_CURS_POO_CAIRPLANE_H
