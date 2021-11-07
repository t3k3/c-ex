//print the punctuation characters to stdout.

#include <stdio.h>
#include <ctype.h>

int main(){
    for (int i = 0; i < 128; ++i){
        if(ispunct(i))
            printf("%c", i);
    }
    
}