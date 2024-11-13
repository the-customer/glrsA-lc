#include <stdio.h>
// Ecrire un programme qui permet de saisir les infromations d'une personne et puis de l'afficher.
// Une personne est caracterisee par son nom, son prenom et son age.
int main(){
    //Definir
    typedef struct
    {
        char nom[25];
        char prenom[50];
        int age;
    }PERSONNE;
    
    //declaration
    PERSONNE e;
    //
    puts("Entrer le nom de la personne :");
    // scanf("%s",e.nom);
    gets(e.nom);
    puts("Entrer le prenom de la personne :");
    // scanf("%s",e.prenom);
    gets(e.prenom);
    do{
        puts("Entrer l'age de la personne :");
        scanf("%d",&e.age);
    }while(e.age < 0);
    //
    puts("Voici les informations de la personne :");
    printf("Nom    : %s\n",e.nom);
    printf("Prenom : %s\n",e.prenom);
    printf("Age    : %d\n",e.age);
}