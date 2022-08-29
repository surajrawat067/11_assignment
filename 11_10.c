#include<conio.h>
int fact(int n);
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    printf("%d",fact (n)/(n));
    return 0;
}
int fact(int n)
{
    int a;
    a=n;
    for(n=1; a>1; a--)
    {
        n=n*a;
    }
    return n;
}
