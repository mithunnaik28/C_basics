#include <stdio.h>
int main(){
    int age = 18;
    int *p = &age;
    int _age = *p;

    printf("%p\n",&age);
    printf("%p\n",p);
    printf("%p\n",&p);
    return 0;
}
// format specifier

// output
// 0061FF18
// 0061FF18
// 0061FF14
