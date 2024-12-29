//
// Created by pafnu on 12/29/2024.
//
#include <iostream>
#include <string.h>
#include "../headers/FlyingObject.h"
#include "../headers/CGlinder.h"

using namespace std;

CGlinder::CGlinder() : CAircraft()
{
    m_class = 0;
    m_load = 0;
}

CGlinder::CGlinder(char *m_owner, int m_type, int m_class, double m_load) : CAircraft(m_owner,m_type)
{
    this->m_class = m_class;
    this->m_load = m_load;
}

CGlinder::CGlinder(const CGlinder& glider) : CAircraft(glider)
{
    m_class = glider.m_class;
    m_load = glider.m_load;
}

CGlinder &CGlinder::operator=(const CGlinder &g)
{
    CAircraft::operator=(g);

    m_class = g.m_class;
    m_load = g.m_load;

    return *this;
}

void CGlinder::Write()
{
    char* atype = FlyingObject::CAircraftType::GetTypeName(m_type);
    char* gclass = FlyingObject::CGliderType::GetTypeName(m_class);

    cout<<"Aircraft type: "<<atype<<endl;
    cout<<"Aicraft owner: "<<m_owner<<endl;
    cout<<"Technical details:\n";
    cout<<"1. Class: "<<gclass<<endl;
    cout<<"2. Effective Load: "<<m_load<<"t\n";
}

void CGlinder::Read()
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

std::istream &operator>>(istream &is, CGlinder &g)
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

std::ostream &operator<<(ostream &of, CGlinder &g)
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
