//
// Created by Darius on 12/29/2024.
//

#ifndef PROIECT_CURS_POO_CAIRCRAFT_H
#define PROIECT_CURS_POO_CAIRCRAFT_H

#define _OwnerBuffer 1024

class CAircraft
{
    static int m_counter; // static member
protected:
    char* m_owner; // name of the owner
    int m_type; // aircraft type
public:
    CAircraft();
    CAircraft(char*, int m_type = -1);
    ~CAircraft();
    CAircraft(const CAircraft&);
    CAircraft &operator=(const CAircraft&);
    virtual void Write() = 0;
    virtual void Read() = 0;
    static int GetCounter();
};

#endif //PROIECT_CURS_POO_CAIRCRAFT_H
