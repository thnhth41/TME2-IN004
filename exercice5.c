#include <stdio.h>
int main(void){
    unsigned int a = 13;
    unsigned int b = 5;
    unsigned int produit = 0;

    unsigned int temp_a = a;
    unsigned int temp_b = b;

    while(temp_b > 0){
        if((temp_b & 1) != 0){
            produit = produit + temp_a;
        }
        temp_a = temp_a << 1;
        temp_b = temp_b >> 1;
    }
    printf("%u * %u = %u\n", a, b, produit);
    
    return 0;
}