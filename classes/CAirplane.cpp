//
// Created by Darius on 12/29/2024.
//
#include <string.h>
#include "../headers/FlyingObject.h"
#include "../headers/CAircraft.h"
#include "../headers/CAirplane_test.h"

using namespace std;

CAirplane_test::CAirplane_test() : CAircraft()
{
    m_propulsion = 0;
    m_speed = 0;
}

CAirplane_test::CAirplane_test(char *owner, int type, int prop, double speed) : CAircraft(owner, type)
{
    m_propulsion = prop;
    m_speed = speed;
}

CAirplane_test::CAirplane_test(const CAirplane_test &ca) : CAircraft(ca)
{
    m_propulsion = ca.m_propulsion;
    m_speed = ca.m_speed;
}

CAirplane_test &CAirplane_test::operator=(const CAirplane_test &ca)
{
    CAircraft::operator=(ca);
    m_propulsion = ca.m_propulsion;
    m_speed = ca.m_speed;

    return *this;
}

int CAirplane_test::GetProp()
{
    return m_propulsion;
}

double CAirplane_test::GetSpeed()
{
    return m_speed;
}

void CAirplane_test::Write()
{
    char* atype = FlyingObject::CAircraftType::GetTypeName(m_type);
    char* prop = FlyingObject::CPropulsionType::GetTypeName(m_propulsion);

    cout<<"Aircraft type: "<<atype<<endl;
    cout<<"Aircraft owner: "<<m_owner<<endl;
    cout<<"Technical details:\n";
    cout<<"1. Propulsion type: "<<prop<<endl;
    cout<<"2. Max Speed: "<<m_speed<<"t\n";
}

void CAirplane_test::Read()
{
    char buffer[_OwnerBuffer];

    cout<<"Type the owner's name: ";
    cin>>buffer;
    m_owner = new char[strlen(buffer)+1];
    strcpy_s(m_owner,sizeof(m_owner),buffer);

    cout<<"Type the propulsion type: ";
    cin>>m_propulsion;
    cout<<"Type the max speed (in knots): ";
    cin>>m_speed;
    cout<<endl;
}

std::ostream& operator<<(ostream& os, CAirplane_test p)
{
    char* atype = FlyingObject::CAircraftType::GetTypeName(p.m_type);
    char* prop = FlyingObject::CPropulsionType::GetTypeName(p.m_propulsion);

    os<<"Aircraft type: "<<atype<<endl;
    os<<"Aircraft owner: "<<p.m_owner<<endl;
    os<<"Technical details:\n";
    os<<"1. Propulsion type: "<<prop<<endl;
    os<<"2. Max Speed: "<<p.m_speed<<"t\n";

    return os;
}

std::istream& operator>>(istream &is, CAirplane_test p)
{
    char buffer[_OwnerBuffer];

    cout<<"Type the owner's name: ";
    is>>buffer;
    p.m_owner = new char[strlen(buffer)+1];
    strcpy_s(p.m_owner,sizeof(p.m_owner),buffer);

    cout<<"Type the propulsion type: ";
    is>>p.m_propulsion;
    cout<<"Type the max speed (in knots): ";
    is>>p.m_speed;
    cout<<endl;

    return is;
}