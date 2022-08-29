#include<stdio.h>
int prime ();
int prime(int a)
{
    int i;
    for(i=1; a>i; a++)
    {
        if(a%2!=0 && a%3!=0 && a%5!=0)
        {   return a;
            break;
        }
    }
}
int main ()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    printf("%d",prime (a));
    return 0;
}