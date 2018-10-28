#include<stdio.h>
void f(const char *p)
{
    p = "Hello!";

}
int main(void)
{
    const char *s = "Hi!";
    printf("s : %s\n", s);
    f(&s);
    printf("s : %s\n", s);
   const char *s1 = "hello guru!!";
  printf("%2s",s1);
    return 0;
}
