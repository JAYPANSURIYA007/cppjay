#include <stdio.h>
int main()
{
    int sub;
    printf("which sub pass 1. maths and sci\n2.maths\n3.sci\n ");
    scanf("%d", &sub);

    if (sub == 1)
    {
        printf("congratulation you pass both sub so you  win 45$");
    }
    else if (sub == 2)
    {
        printf("congratulation you pass in maths so you win 15$");
    }
    else if (sub == 3)
    {
        printf("congratulation you pass in sci so you win 15$");
    }
    else
    {
        printf("you are fail in both sub");
    }
}