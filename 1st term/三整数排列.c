#include<stdio.h>

int main()
{
    int a,b,c,t;

    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        t=a;
        a=b;
        b=t;                                          //����������6 8 2��
    }                                                 //��һ��if�����㣬δִ��
    if(a>c){                                          //�ڶ���if��6>2������t=6,a=2,b=8,c=6
        t=a;                                          //������if��8>6������y=8,a=2,b=c,c=8
        a=c;
        c=t;
    }
    if(b>c){
        t=b;
        b=c;
        c=t;
    }
    printf("%d %d %d",a,b,c);
    return 0;
}
