#ifndef __DOUBLEDATA__
#define __DOUBLEDATA__

#include "BaseData.h"

class DoubleData : public BaseData
{
private:
    double m_data;
public:
    DoubleData(double data = 0);
    ~DoubleData();
    void print();
    void set(double data);
    double get();
    void enter();
};

#endif
