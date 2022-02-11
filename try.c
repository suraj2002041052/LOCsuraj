#include <stdio.h>

void main()
{
    int a;
    printf("Enter your choice : ");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
            printf("Chocolate");
            break;
        case 2:
            printf("Cake");
            break;
        case 3:
            printf("Coffee");
            break;
        default:
            printf("Water");
            break;
    }
}