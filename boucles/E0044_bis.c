// Ecrire un programme qui permet de saisir une série de N valeurs. Le programme détermine et affiche le nombre de valeurs positives et le nombre de valeurs négatives.

#include <stdio.h>

int main(){
    int N,val, i, nbPositifs = 0, nbNegatifs = 0;
    do{
        printf("Entrer le nombre de valeurs : ");
        scanf("%d",&N);
    }while(N <= 0);
    
    for (i = 0; i < N; i++)
    {
        puts("Entrer un valeur : ");
        scanf("%d",&val);
        if(val > 0){
            nbPositifs++; // nbPositifs += 1 ou nbPositifs = nbPositif +1
        }else if(val < 0){
            nbNegatifs++;
        }
    }
    printf("Le nombre de valeurs positives est : %d\n",nbPositifs);
    printf("Le nombre de valeurs negatives est :%d\n",nbNegatifs);
    return 0;
}