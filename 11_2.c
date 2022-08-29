#include<stdio.h>
int Hcf ();
int Hcf (int a,int b)
{
    int d,c,i;
    c=a<b?a:b;
    for(i=1; i<=c; i++)
    {   if(a%i==0 && b%i==0)
           d=i; 
       }
return printf("%d\n",d);
}
int main ()
{
    int a,b;
    printf("enter a number ");
    scanf("%d %d",&a,&b);
    Hcf (a,b);
    return 0;
}