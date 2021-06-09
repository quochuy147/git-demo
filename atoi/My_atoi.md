#My_atoi
```c
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int my_atoi(char* s)
{
    int i,result=0;
    for(i=0;i<strlen(s);++i)
    {
        if(i==0&&s[0]=='+'||s[0]=='-'&&i==0)
        {
            i++;
        }
        if(s[i]<'0' || s[i]>'9')
        {
            break;
        }
        result=result*10+s[i]-'0';
    }
    if(s[0]=='-')
    {
        return result-2*result;
    }
    else
    {
        return result;
    }
}

int main()
{
    char* str=calloc(1024,sizeof(char));
    printf("Input : ");
    scanf("%1024[^\n]",str);
    printf("My_atoi : %d",my_atoi(str));
    return 0;
}
```
