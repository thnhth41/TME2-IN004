#include <stdio.h>

int main(void){
    char c = 0;
    char prev_c = 0;
    while(c>=0){
        prev_c = c;
        c++;
    }
    printf("char : min = %d, max = %d\n", c, prev_c);
    
    short s = 0;
    short prev_s = 0;
    while (s >= 0) {
        prev_s = s;
        s++;
    }
    printf("short : min = %d, max = %d\n", s, prev_s);

    int i = 0, prev_i = 0;
    while (i >= 0) {
        prev_i = i;
        i++;
    }
    printf("int : min = %d, max = %d\n", i, prev_i);

    return 0;
}