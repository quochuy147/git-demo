|Code| 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* name="Vuong Quoc Huy";
    float num=0.69738;
    printf("Name : %s\n",name);
    printf("Decimal : %d\n",123);
    printf("Unsigned decimal : %u\n",123);
    printf("Long decimal : %ld\n", 123456789);
    printf("Hex : 666 (Decimal) -> %x\n", 666);
    printf("Hex (UPCASE) : 666 (Decimal) -> %X\n", 666);
    printf("Octal : 666 (Decimal) -> %o\n",666);
    printf("Decimal floating : %.2f\n", 6.6666666);
    printf("Decimal floating (UPCASE) : %.2f\n",6.6666666);
    printf ("Character : %c\n", 'A');
    printf("String : %s\n", name);
    printf("Percentage : %.2f %%\n",num*100);
    return 0;
}


|Output|

Name : Vuong Quoc Huy
Decimal : 123
Unsigned decimal : 123
Long decimal : 123456789
Hex : 666 (Decimal) -> 29a
Hex (UPCASE) : 666 (Decimal) -> 29A
Octal : 666 (Decimal) -> 1232
Decimal floating : 6.67
Decimal floating (UPCASE) : 6.67
Character : A
String : Vuong Quoc Huy
Percentage : 69.74 %