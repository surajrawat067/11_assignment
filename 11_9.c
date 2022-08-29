#include<stdio.h>
int square (int a)
{
   return printf("square is %d",a*a);
}
int main ()
{
    int a,b;
    printf("enter a number");
    scanf("%d",&a);
   square (a);
    
    return 0;
} 