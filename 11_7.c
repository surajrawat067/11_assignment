#include<stdio.h>
void fibonacci ();
void fibonacci (int n)
{
int a,d,b,c;
    c=0,d=0,a=1;
        do
    {   c=a+d;
        a=d;
        d=c;       
        b++;
        printf("%d\n",c);
    } while(n>b);

}
int main ()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
     fibonacci (n);
    return 0;
}