#include<stdio.h>
void take_input_string(char p[])
{
    char ch;
    int i = 0;
    scanf("%c",&ch);
    while(ch!='0')
    {
        p[i]=ch;
        scanf("%c",&ch);
        i++;
    }
}
int main(void)
{
    char s[32];
    take_input_string(s);
    printf("%s",s);
}
