//
// Created by Darius on 12/29/2024.
//

#ifndef PROIECT_CURS_POO_CAIRPLANE_TEST_H
#define PROIECT_CURS_POO_CAIRPLANE_TEST_H

#include <iostream>
#include "CAircraft.h"

class CAirplane_test : public CAircraft
{
    int m_propulsion;
    double m_speed;
public:
    CAirplane_test();
    CAirplane_test(char*, int, int, double);
    ~CAirplane_test() {};
    CAirplane_test(const CAirplane_test&);
    CAirplane_test& operator=(const CAirplane_test&);
    int GetProp();
    double GetSpeed();
    void Write() override;
    void Read() override;
    friend std::ostream& operator<<(std::ostream&, CAirplane_test);
    friend std::istream& operator>>(std::istream&, CAirplane_test);
};


#endif //PROIECT_CURS_POO_CAIRPLANE_TEST_H
