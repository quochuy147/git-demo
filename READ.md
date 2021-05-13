#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char s[]="Huy dep trai thanh lich vo dich cap vu tru :V ";
    int size;
    //fgets(s,10,stdin);
    size=strlen(s);
    printf(" ");
    for(int i=0; i<size+2; i++)
    {
        printf("_");
    }
    printf("\n< %s >\n ",s);
    for(int i=0; i<size+2; i++)
    {
        printf("-");
    }
    printf("\n        \\   ^__^\n");
    printf("         \\  (oo)\\_______\n");
    printf("            (__)\\       )\\\/\\\n");
    printf("                ||----w |\n");
    printf("                ||     ||");
}
