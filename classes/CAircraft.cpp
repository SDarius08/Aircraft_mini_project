#include <string.h>
#include "../headers/CAircraft.h"

int CAircraft::m_counter = 0;

int CAircraft::GetCounter()
{
    return m_counter;
}

CAircraft::CAircraft()
{
    ++m_counter;
    m_owner = nullptr;
    m_type = 0;
}

CAircraft::CAircraft(char *m_owner, int m_type)
{
    if(m_owner == nullptr)
    {
        this->m_owner = new char[8];
        strcpy_s(this->m_owner, 8, "Unknown");
    }
    else
    {
        this->m_owner = new char[strlen(m_owner) + 1];
        strcpy_s(this->m_owner, strlen(m_owner) + 1, m_owner);
    }
    ++m_counter;
    this->m_type = m_type;
}

CAircraft::~CAircraft()
{
    --m_counter;
    if(m_owner != nullptr)
        delete[] m_owner;
}

CAircraft::CAircraft(const CAircraft &CA)
{
    if(CA.m_owner == nullptr)
    {
        m_owner = new char[8];
        strcpy_s(m_owner, 8, "Unknown");
    }
    else
    {
        m_owner = new char[strlen(CA.m_owner) + 1];
        strcpy_s(m_owner, strlen(CA.m_owner) + 1, CA.m_owner);
    }

    m_type = CA.m_type;
}

CAircraft &CAircraft::operator=(const CAircraft &CA)
{
    if(&CA == nullptr)
    {
        throw "Nu exista Obiectul!\n";
    }

    if(CA.m_owner == nullptr)
    {
        m_owner = new char[8];
        strcpy_s(m_owner, 8, "Unknown");
    }
    else
    {
        m_owner = new char[strlen(CA.m_owner) + 1];
        strcpy_s(m_owner, strlen(CA.m_owner) + 1, CA.m_owner);
    }

    m_type = CA.m_type;

    return *this;
}