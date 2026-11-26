#include <stdio.h>

int main(void){
    unsigned char c = 0;
    unsigned char prev_c = 0;
    prev_c = c;
    c = c + 1;
    while(prev_c < c){
        prev_c = c;
        c = c + 1;
    }
    printf("char : min = %d, max = %d\n", c, prev_c);
    
    short s = 0;
    short prev_s = 0;
    while (s >= 0) {
        prev_s = s;
        s++;
    }
    printf("short : min = %d, max = %d\n", s, prev_s);

    unsigned int i = 0; 
    unsigned int prev_i = 0;
    prev_i = i;
    i = i + 1;
    while (prev_i < i) {
        prev_i = i;
        i = i + 1;
    }
    printf("int : min = %u, max = %u\n", i, prev_i);

    return 0;
}