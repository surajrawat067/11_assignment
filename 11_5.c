#include<stdio.h>
void prime ();
void prime(int b)
{
    int a;
    for(a=2; b>0; a++)
    {
        if(a==2 || a==3 || a==5|| a==7)
        {   printf("%d\n",a);
            b--;
        }
        else if(a%2!=0 && a%3!=0 && a%5!=0)
        {   printf("%d\n",a);
            b--;
        }
    }

}
int main ()
{
    int a;
    printf("enter a number ");
    scanf("%d",&a);
    prime (a);
    return 0;
}