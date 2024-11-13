// WHILE:
// Ecrire un programme qui permet de saisir un chiffre positif.


#include <stdio.h>

int main(){
    int chiffre;
    do{
        puts("Entrer un chiffre :");
        scanf("%d",&chiffre);
    }while(chiffre <=0 || chiffre > 9);

    printf("Le chiffre saisi est : %d\n",chiffre);
    return 0;
}