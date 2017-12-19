#include<stdio.h>
int main()
{
    int i,testCase,sum,a,b;
    scanf("%d",&testCase);
    for(i=0;i<testCase;i++)
    {
        scanf("%d",&sum);
        a=sum/2;
        b=sum-a;
        printf("%d %d\n",a,b);
    }
    return 0;
}
