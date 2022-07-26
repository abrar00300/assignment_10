#include<stdio.h>
int combination(int,int);
int main()
{
    int n,s;
    printf("enter total number of elemnts =");
    scanf("%d",&n);
    printf("enter selected times =");
    scanf("%d",&s);
    printf("total number of combinations we can make are = %d",combination(n,s));
    return 0;
}
int combination(int n,int s)
{
    int p=1,p1=1,p2=1;
    for(int i=n;i>0;i--)
        p1=p1*i;
    for(int i=s;i>0;i--)
        p2=p2*i;
    for(int i=(n-s);i>0;i--)
        p=p*i;
    return p1/(p2*p);
}
