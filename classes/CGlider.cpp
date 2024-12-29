//
// Created by Darius on 12/29/2024.
//
#include <iostream>
#include <string.h>
#include "../headers/FlyingObject.h"
#include "../headers/CGlider.h"

using namespace std;

CGlider::CGlider() : CAircraft()
{
    m_class = 0;
    m_load = 0;
}

CGlider::CGlider(char *m_owner, int m_type, int m_class, double m_load) : CAircraft(m_owner, m_type)
{
    this->m_class = m_class;
    this->m_load = m_load;
}

CGlider::CGlider(const CGlider& glider) : CAircraft(glider)
{
    m_class = glider.m_class;
    m_load = glider.m_load;
}

CGlider &CGlider::operator=(const CGlider &g)
{
    CAircraft::operator=(g);

    m_class = g.m_class;
    m_load = g.m_load;

    return *this;
}

int CGlider::GetClass()
{
    return m_class;
}

double CGlider::GetLoad()
{
    return m_load;
}

void CGlider::Write()
{
    char* atype = FlyingObject::CAircraftType::GetTypeName(m_type);
    char* gclass = FlyingObject::CGliderType::GetTypeName(m_class);

    cout<<"Aircraft type: "<<atype<<endl;
    cout<<"Aicraft owner: "<<m_owner<<endl;
    cout<<"Technical details:\n";
    cout<<"1. Class: "<<gclass<<endl;
    cout<<"2. Effective Load: "<<m_load<<"t\n";
}

void CGlider::Read()
{
    char buffer[_OwnerBuffer];

    cout<<"Type the owner's name: ";
    cin>>buffer;
    m_owner = new char[strlen(buffer)+1];
    strcpy_s(m_owner,sizeof(m_owner),buffer);

    cout<<"Type the glider type: ";
    cin>>m_class;
    cout<<"Type the glider load (in tons): ";
    cin>>m_load;
    cout<<endl;
}

std::istream &operator>>(istream &is, CGlider &g)
{
    char buffer[_OwnerBuffer];

    cout<<"Type the owner's name: ";
    is>>buffer;
    g.m_owner = new char[strlen(buffer)+1];
    strcpy_s(g.m_owner,sizeof(g.m_owner),buffer);

    cout<<"Type the glider type: ";
    is>>g.m_class;
    cout<<"Type the glider load (in tons): ";
    is>>g.m_load;
    cout<<endl;

    return is;
}

std::ostream &operator<<(ostream &of, CGlider &g)
{
    char* atype = FlyingObject::CAircraftType::GetTypeName(g.m_type);
    char* gclass = FlyingObject::CGliderType::GetTypeName(g.m_class);

    of<<"Aircraft type: "<<atype<<endl;
    of<<"Aircraft owner: "<<g.m_owner<<endl;
    of<<"Technical details:\n";
    of<<"1. Class: "<<gclass<<endl;
    of<<"2. Effective Load: "<<g.m_load<<"t\n";

    return of;
}
