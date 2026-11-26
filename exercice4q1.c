#include <stdio.h>

int main(void){
    char chaine[100];
    printf("Saisissez une chaine : ");
    scanf("%s", chaine);

    int i = 0;
    while(chaine[i] != '\0'){
        if(chaine[i] >= 'a' && chaine[i] <= 'z'){
            chaine[i] = chaine[i] - 32;
        }
        i++;
    }
    printf("Chaine modifiee : %s\n", chaine);
    return 0;
}