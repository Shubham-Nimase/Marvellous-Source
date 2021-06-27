/*
Problem statement : 10.1
Write a program which accept radius of circle from user and calculate its area
Consider value oi PI as 3.14 (Area = PI*Radius*Radius).

Input: 5.3   Output:88.2026
Input: 10.4  Output:339.6224
*/

#include<stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 3.14;
    double dArea = 0.0;

    dArea= (fPI * fRadius * fRadius);

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;


    printf_s("Enter Radius : \n");
    scanf_s("%f", &fValue);


    dRet = CircleArea(fValue);

    printf_s("Area of Circle is : %lf\n", dRet);

    return 0;   // return to OS
}


