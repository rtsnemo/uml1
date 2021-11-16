#include "IntData.h"
#include "DoubleData.h"

int main()
{
    IntData iData1;
    IntData iData2(10);

    DoubleData dData3;
    DoubleData dData4(13.02);

    printf("%s\n", "iData1:");
    iData1.print();
    printf("%s\n", "iData2:");
    iData2.print();

    printf("%s\n", "Enter dData3:");
    dData3.enter();
    printf("%s\n", "dData3:");
    dData3.print();
    dData3.set(2.2);
    printf("%s\n", "dData3 after set:");
    dData3.print();

    printf("%s\n", "dData4:");
    dData4.print();
    double dValue = dData4.get();
    printf("%s\n", "dValue:");
    printf("%f\n", dValue);

    return 0;
}
