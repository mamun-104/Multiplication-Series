
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,n,m,sum=0,flag;
    scanf("%d",&n);

    m=n;
    for(i=1;i<=n;i++)
    {
        sum = sum + i * m;
        m--;


    }
    printf("Sum = %d\n",sum);



    return 0;
}




