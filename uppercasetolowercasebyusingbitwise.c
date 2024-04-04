//write a program to convert upper case letter to lower case letter
//by using bitwise operator

#include<stdio.h>
int main()
{
   char ch;
    scanf("%c",&ch);
    ch=ch|32;
   printf("%c",ch);
    return 0;
}