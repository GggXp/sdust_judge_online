#include<stdio.h>
#define MAX_STR_LEN 1002
int str_chr(char s[],char ch)
{
    int length;

    for(length=0;s[length]!='\0';length++){
        //system("pause");
        if(s[length]==ch)
            return length;
    }


    return -1;

}



int main()
{
    char ch;
    char s[MAX_STR_LEN];
    while(gets(s) != NULL)
    {
        ch = getchar();
        printf("%d\n", str_chr(s, ch));
        gets(s); // �����ڶ����ַ���Ļ��з�����ȷ��whileѭ����gets������ȷ�����ݣ����������壬����������޹ء�
    }
    return 0;
}
