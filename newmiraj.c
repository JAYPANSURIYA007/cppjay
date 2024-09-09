#include <stdio.h>
int main()
{
    int sub;
    printf("which sub you passed\n1.maths and sci \n2.maths\n3.sci\n");
    scanf("%d", &sub);
    if (sub == 1)
    {
        printf("you win 45$");
    }
    else if (sub == 2)
    {
        printf("you win 15$");
    }
    else if (sub == 3)
    {
        printf("you win 15$");
    }
    else if (1 > sub || 3 < sub)
    {
        printf("please check the number");
    }
    else
    {
        printf("you are fail  in bot sub");
    }
}