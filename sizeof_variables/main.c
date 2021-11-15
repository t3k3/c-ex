#include <stdio.h>

int main(){
    //C version format YYYYMM
    printf("Version %ld\n", __STDC_VERSION__);

    //Get size of the primitive types on your compiler.
    printf("sizeof(char)             = %zu bytes\n", sizeof(char));
    printf("sizeof(_Bool)            = %zu bytes\n", sizeof(_Bool));
    printf("sizeof(short)            = %zu bytes\n", sizeof(short));
    printf("sizeof(int)              = %zu bytes\n", sizeof(int));
    printf("sizeof(long)             = %zu bytes\n", sizeof(long));
    printf("sizeof(long long)        = %zu bytes\n", sizeof(long long));
    printf("sizeof(float)            = %zu bytes\n", sizeof(float));
    printf("sizeof(double)           = %zu bytes\n", sizeof(double));
    printf("sizeof(long double)      = %zu bytes\n", sizeof(long double));
}