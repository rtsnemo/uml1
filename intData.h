#ifndef __INTDATA__
#define __INTDATA__

#include "BaseData.h"

class IntData : public BaseData
{
private:
    int m_data;
public:
    IntData(int data = 0);
    ~IntData();
    void print();
    void set(int data);
    int get();
    void enter();
};

#endif
