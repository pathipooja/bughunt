#include<stdio.h>
int main()
{
    char *file_name = "numbers.txt";
    FILE *file_pointer = fopen(file_name,"a");
    int i = 0;
    for(i=0; i<100; i++)
{


        fputc(i,file_pointer);
        break;
}
    fclose(file_pointer);
    FILE* file = fopen (file_name, "r+b");
    while(i = getc(file) != EOF)
    printf("%d ",i);
    fclose (file);
return 0;
}
