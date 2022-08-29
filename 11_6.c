#include<stdio.h>
void prime ();
void prime (int a,int b)
{
    
    for( ; b>=a; a++)
    {
        if(a%2!=0 && a%3!=0 && a%5!=0)
        {  printf("%d\n",a);
            
        }
    }
}
int main ()
{
    int a,b;
    printf("enter a number ");
    scanf("%d %d",&a,&b);
     prime (a,b);
    return 0;
}