/*
Program statement: accept number from user and perform the addition of that N numbers

Input: 
Value of N :5
Numbers are :5 3 7 1 2
output: 18

Algorithm :

Start
Accept the value of N
Accept all the values of N

Pass that Value of N and N numbers to the function

   function will perform addition 
,  Accept the addition of the function 

 Display the addition 
End
*/

#include<stdio.h>
#include<stdlib.h>

int SumNNumbers(int arr[], int iSize)
{
    int iSum = 0;
    int iCnt = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        iSum = iSum + arr[iCnt];
    }

    return iSum;
}

int main()
{
    int iValue = 0;
    int iCnt = 0;
    int iRet = 0;
   int * ptr = NULL;
    printf("Enter the Value of N:\n");
    scanf_s("%d", &iValue);

    ptr = (int*)malloc(4 * iValue);

        printf("Enter the values of array:\n");
        
        for(iCnt = 0; iCnt < iValue; iCnt++)
        {
            scanf_s("%d", &ptr[iCnt]);
        }

        printf("Your entered elements are \n");
        for (iCnt = 0; iCnt < iValue; iCnt++)
        {
            printf("%d\t", ptr[iCnt]);
        }

        iRet = SumNNumbers(ptr,iValue);   //SumNNumbers(100,5)

        printf("Addition of all numbers is:%d",iRet);

}