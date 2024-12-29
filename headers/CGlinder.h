//
// Created by pafnu on 12/29/2024.
//

#ifndef PROIECT_CURS_POO_CGLINDER_H
#define PROIECT_CURS_POO_CGLINDER_H

#include <iostream>
#include "CAircraft.h"

class CGlinder : public CAircraft
{
    int m_class;
    double m_load;
public:
    CGlinder();
    CGlinder(char*, int, int, double);
    ~CGlinder() {}
    CGlinder(const CGlinder&);
    CGlinder&operator=(const CGlinder&);
    void Write() override;
    void Read() override;
    friend std::ostream& operator<<(std::ostream&, CGlinder&);
    friend std::istream& operator>>(std::istream&, CGlinder&);
};


#endif //PROIECT_CURS_POO_CGLINDER_H
