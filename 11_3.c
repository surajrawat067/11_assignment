#include<stdio.h>
int prime ();
int prime(int b)
{
    if(b==2 | b==3 | b==5)
        printf("a prime number");
    else if(b%2==0 | b%3==0 | b%5==0)
        return  printf("not a prime number");
    else
        return printf("a prime number");

}
int main ()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    prime (a);
    return 0;
}