#include <stdio.h>

int main(){
    int hex1 = 0x41CC0000;
    int hex2 = 0x3C03126F;
    float *f1, *f2;
    f1 = (float*)&hex1;
    f2 = (float*)&hex2;
    printf("Flottant 1 : %f\n", *f1);
    printf("Flottant 2 : %f\n", *f2);
    float somme = *f1 + *f2;
    int *ca;
    ca = (int*)&somme;
    printf("Somme = %f (Codage hexa : %x)\n", somme, *ca);

    return 0;
}
