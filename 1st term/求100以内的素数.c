#include <stdio.h>
int main()
{
    int a,b,i,j,x;
    scanf("%d %d",&a,&b);
    printf("=====\n");
    for(i=b;i>=a;i--)//����ȴ��С������������
    {   x=0;
        for(j=1;j<i;j++)
        if(i%j==0)
        x++;
        if(x==1)
            printf("%d\n",i);

    }
     printf("=====");
}
