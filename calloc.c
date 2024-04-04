#include<stdio.h>
int choice(float a, float b);
int main()
{
    int choice;
    float a,b;
    scanf("%f%f",&a,&b);
    switch(choice)
    {
        case 1:
        int result=add(a,b);
        printf("Sum is %f",a+b);
        break;

        case 2:
        int result=sub(a,b);
        printf("sub is %f",a-b);
        break;

        case 3:
        int result=multiplication(a,b);
        printf("multiplication is %f",a*b);
        break;

        case 4:
        int result=division(a,b);
        printf("division is %f",a/b);
        break;

        default:
        printf("invalid number");
        break;
    }
}
int main()
{
    int ch;
    printf("Enter the choice");
    scanf("%d",&ch);
    
    return ch;
}

