#include "DoubleData.h"
#include <iostream>

using namespace std;

DoubleData::DoubleData(double data)
{
    m_data = data;
}

DoubleData::~DoubleData()
{

}

void DoubleData::print()
{
    printf("%f\n", m_data);
}

void DoubleData::set(double data)
{
    m_data = data;
}

double DoubleData::get()
{
    return m_data;
}

void DoubleData::enter()
{
    cin >> m_data;
}
