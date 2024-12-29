//
// Created by Darius on 12/29/2024.
//

#ifndef PROIECT_CURS_POO_CGLIDER_H
#define PROIECT_CURS_POO_CGLIDER_H

#include <iostream>
#include "CAircraft.h"

class CGlider : public CAircraft
{
    int m_class;
    double m_load;
public:
    CGlider();
    CGlider(char*, int, int, double);
    ~CGlider() {}
    CGlider(const CGlider&);
    CGlider&operator=(const CGlider&);
    int GetClass();
    double GetLoad();
    void Write() override;
    void Read() override;
    friend std::ostream& operator<<(std::ostream&, CGlider&);
    friend std::istream& operator>>(std::istream&, CGlider&);
};


#endif //PROIECT_CURS_POO_CGLIDER_H
