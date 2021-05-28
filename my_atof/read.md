# My_atof
```c
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

double my_atof(char* s)
{
    long long fake_behind_dot;
    double result,behind_dot=0,t=1,count=0,before_dot=0;
    for(int i=0; i<strlen(s); ++i)
    {
        if(s[i]=='.')
        {
            for(int j=i+1; j<strlen(s); ++j)
            {
                if(s[j]<'0' || s[j]>'9')
                {
                    break;
                }
                behind_dot=behind_dot*10+s[j]-'0';
            }
        }
        if(i==0&&s[0]=='+'||s[0]=='-'&&i==0)
        {
            i++;
        }
        if(s[i]<'0' || s[i]>'9')
        {
            break;
        }
        before_dot=before_dot*10+s[i]-'0';
    }

    fake_behind_dot=behind_dot;
    while(fake_behind_dot>0)
    {
        ++count;
        fake_behind_dot/=10;
    }
    while(count>0)
    {
        t*=10;
        count--;
    }
    result+=before_dot;
    result+=behind_dot/t;
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
    printf("  Input : ");
    scanf("%1024[^\n]",str);
    printf("My_atof : %.6f\n",my_atof(str));
    printf("   Atof : %f",atof(str));
}
```
