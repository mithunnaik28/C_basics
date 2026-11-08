#include <stdio.h>
int main(){
    int age = 18;
    int *p = &age;
    int _age = *p;

    printf("%p\n",&age);
    printf("%p\n",p);
    printf("%p\n",&p);
    printf("%u\n",&age);
    return 0;
}
// format specifier
// %p Hexa decimal , %u insigned int

// output
// 0061FF18
// 0061FF18
// 0061FF14
