#include<stdio.h>
#include<conio.h>
void main()
{
       int n;
       printf("Enter any natural number\n");
       scanf("%d",&n);
    if(n>=1 &&  n<=12)
    {
       switch(n)
       {
        case 4:
        printf("30 days");
        break;
        case 6:
        printf("30 days");
        break;
        case 9:
        printf("30 days");
        break;
        case 11:
        printf("30 days");
        break;
        case 2:
        printf("28 days");
        break;
        default:
        printf("31 days");
       }
    }
    else
    {
        printf("\nWrong number of digit you have entered\n");
    }

}
