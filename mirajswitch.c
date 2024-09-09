#include <stdio.h>

int main()
{
    int age, rn;
    printf("Enter your age \n");
    scanf("%d", &age);
    switch (age)
    {

    case 14:
        printf("you are in 8th class\n");
        printf("enter your roll number\n");
        scanf("%d", &rn);
        switch (rn)
        {
        case 5:
            printf("you are in class 8th A\n");
            break;
        case 6:
            printf("you are in 8th B\n");
            break;
        default:
            printf("you are not in those class");
        }

        break;

    case 15:
        printf("you are in 9th class");
        break;

    case 16:
        printf("you are in 10th class");
        break;

    default:
        printf("you are not in school");
    }
}