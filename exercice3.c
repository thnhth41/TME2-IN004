#include <stdio.h>

int main(void){
    float u = 1.0;
    printf("u_0 = %f\n", u);
    for(int i=1;i <= 128; i++){
        u = 2.0 * u + 1.0;
        printf("u_%d = %f\n", i, u);
    }
    return 0;
}