#include<stdio.h>
/*

 �ͻ�ȥ�̵�����ʱ��������100������˵�ϲ�����ֽ�֧�����̵�ϲ�������ٵĳ�Ʊ�����ͻ������㡣�����дһ����������̵����������ͻ�����xԪ��Ʒ����һ��100��Ԫ�ĳ�Ʊ���̵�Ӧ�ø����ͻ�������20��Ԫ��10��Ԫ��5��Ԫ��1��Ԫ�ĳ�Ʊ��ʹ�ó�Ʊ�������١����費����������ֵ�ĳ�Ʊ��Ҳ�����м��Ǽ��ֵļ۸��̵�ĸ��ֳ�Ʊ���ǹ��õġ�

*/
int main()
{
    int input,twenty,ten,five,rest,tmp;
    scanf("%d",&input);

    rest = 100 - input;
    twenty = rest / 20;
    rest = rest - (twenty*20);
    //for debug printf("%d\n",rest);
    ten = rest / 10;
    rest = rest - (ten*10);
    five = rest / 5;
    rest = rest - (five*5);

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d",twenty,ten,five,rest);


    return 0;
}
