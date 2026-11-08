#include <stdio.h>

int main(){
    int age = 18;
    int *p = age;
    int _age = *p;

    printf("%d",_age);
    return 0;
}

// pointer is store the address of the another variable 
// we cannot access like this 'int b = &a;'  
