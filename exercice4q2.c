#include <stdio.h>

int main(void){
    char chaine[100];
    printf("Saisissez un entier : ");
    scanf("%s", chaine);
    int entier = 0;
    int i = 0;
    while(chaine[i] != '\0'){
        if(chaine[i] >= '0' && chaine[i] <= '9'){
            entier = entier * 10 + (chaine[i] - '0');
        }
        i++;
    }
    printf("Entier converti : %d\n", entier);
    return 0;
}