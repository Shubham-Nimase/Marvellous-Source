/*
Problem statement : 10.2
Write a program which accept Width & height of rectangle from user and calculate its area.(Area =width*height).

Input: 5.3 ,9.78  Output:51.834

*/

#include<stdio.h>

double RectArea(double fWidth,double fHeight)
{
    
    double dArea = 0.0;

    dArea=(fWidth * fHeight);

    return dArea;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    double dRet = 0.0;


    printf_s("Enter Width : \n");
    scanf_s("%f", &fValue1);

    printf_s("Enter Height : \n");
    scanf_s("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf_s("Area of Rectangle is : %lf\n", dRet);

    return 0;   // return to OS
}


