#include<stdio.h>
int Hcf (int a,int b)
{
    int d,c,i;
    c=a<b?a:b;
    for(i=1; i<=c; i++)
    {   if(a%i==0 && b%i==0)
           d=i; 
       }
return d;
}
int main ()
{
    int a,b;
    printf("enter two number ");
    scanf("%d %d",&a,&b);
    printf("Lcm is %d",Lcm (a,b));
    
    return 0;
} 
int Lcm (int a,int b)
{
return (a*b)/Hcf (a,b);
}