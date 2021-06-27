/*
Write a program which accept temperature in fahrenheit and covert it iont celsius.
(i celsius = (Fahrenheit-32)*(5/9))
*/

/* Input: 10
  output: -12.2222 (10-32)*(5/9)
  Input: 34
  output: 1.11111  (34-32)*(5/9)
  */

#include<stdio.h>

float FhtoCs(float fTemp)
{
  
    float a = 0.0;
    float b = 0.0;
    float c = 0.0;

    a = (fTemp - 32.0);
    b = (5.0/9.0);
    c = a * b;

    return  c;
  
}

int main()
{
   float fValue = 0.0;
    float dRet = 0.0;

    printf("Enter temperature in Fahrenheight:\n");
    scanf_s("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf_s("Temperature in Celsius is:%f", dRet);

    return 0;

}