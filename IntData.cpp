#include "IntData.h"
#include <iostream>

using namespace std;

IntData::IntData(int data)
{
    m_data = data;
}

IntData::~IntData()
{

}

void IntData::print()
{
    printf("%d\n", m_data);
}

void IntData::set(int data)
{
    m_data = data;
}

int IntData::get()
{
    return m_data;
}

void IntData::enter()
{
    cin >> m_data;
}
