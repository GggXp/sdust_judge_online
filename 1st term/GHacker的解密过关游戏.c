#include<stdio.h>
/*
���ַ������������ȡ������;Ϳ��Թ�����
*/

int main()
{
    int num0,num1,num2,num3,num4,num5,num6,num7,num8,num9,num;
    int sum;

    scanf("`%d\?:[%d],%d.%d==\"(%dx%d\?\?%d)%%%d\\n%dcdef%d\$%d\;",&num0,&num1,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num);
          //"`%d\?:[%d],%d.%d==\"(%dx%d\?\?%d)%%%d \\n%dcdef%d\$%d\;",&

    sum = num0+num1+num2+num3+num4+num5+num6+num7+num8+num9+num;

    printf("%d",sum);


    return 0;
}


