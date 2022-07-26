#include<stdio.h>
int arrangment(int,int);
int main()
{
    int n,s;
    printf("enter total number of elemnts =");
    scanf("%d",&n);
    printf("enter selected times =");
    scanf("%d",&s);
    printf("total number of arrangments we can make are = %d",arrangment(n,s));
    return 0;
}
int arrangment(int n,int s)
{
    int p=1,p1=1;
    for(int i=n;i>0;i--)
        p1=p1*i;
    for(int i=(n-s);i>0;i--)
        p=p*i;
    return p1/p;
}
