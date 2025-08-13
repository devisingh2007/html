#include <stdio.h>

int main()
{
    float a, b;
    printf("enter value of a:");
    scanf("%f",&a);

    printf("enter value of b:");
 scanf(" %f", &b);
    
    char op;
      

    printf("\nenter what you need to do like");
     scanf(" %s",&op);

    if (op == '+')
    {
        printf("sum of a and b is :%.2f", a+b);
    }
    else if (op == '-')
    {
        printf("subtraction of a and b is%.2f", a-b);
    }
    else if (op == '*')
    {
        printf("multiplication of a and b is :%.2f", a*b);
    }
    else if (op == '/')
{
    if(b!=0){
        printf("division of a and b is :%.2f", a/b);
    }
}
    else
    {
        printf("invalid input ");
    }
}