#include <stdio.h>

int a; //global namespace - static duration (zero value)

int main(void){

    
    int b; //local namespace - automatic duration (garbage / indetermined value) (undefined behavior)

    
    static int c; //local namespace -  static duration (zero value)

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
}