/* demorgans law
(!(x < 5) && !(y >= 7)) and !((x < 5) || (y >= 7))
(!(a == b) || !(g != 5)) and !((a == b) && (g != 5))

 are same
*/

#include<stdio.h>
int main()
{
    int x, y, a, b, g;
    printf("\n(!(x < 5) && !(y >= 7)) and !((x < 5) || (y >= 7)) are logically same \n");

    printf("Enter x: ");
    scanf_s("%d", &x);
    printf("Enter y: ");
    scanf_s("%d", &y);

    if ((!(x < 5) && !(y >= 7)) && !((x < 5) || (y >= 7)))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    printf("\n (!(a == b) || !(g != 5)) and !((a == b) && (g != 5)) are logically same\n");

    printf("Enter a: ");
    scanf_s("%d", &a);
    printf("Enter b: ");
    scanf_s("%d", &b);
    printf("Enter g: ");
    scanf_s("%d", &g);

    if ((!(a == b) || !(g != 5)) && !((a == b) && (g != 5)))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}

/////////////////////////////////////////////////////////////////////////////
/*
output:
(!(x<5) && !(y>=7)) and !((x<5) || (y>=7)) are logically same 
Enter x:4
Enter y:8
False

(!(a==b) || !(g !=5)) and !((a==b) && (g!=5)) are logically same
Enter a: 4
Enter b: 5
Enter g: 6
True

*/

/////////////////////////////////////////////////////////////////////////////
/*
output:
(!(x<5) && !(y>=7)) and !((x<5) || (y>=7)) are logically same
Enter x:6
Enter y:4
True

(!(a==b) || !(g !=5)) and !((a==b) && (g!=5)) are logically same
Enter a: 4 
Enter b: 4
Enter g: 6
False

*/
