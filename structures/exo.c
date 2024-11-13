#include <stdio.h>

int main(){
    const int N = 3;
    typedef struct{
        int j,m,a;
    }DATE;
    typedef struct{
        char matiere[50];
        float note;
    }EVALUATION;
    typedef struct{
        char nom[25];
        char prenom[50];
        DATE dn;
        EVALUATION e1,e2;
    }ETUDIANT;
    //
    ETUDIANT etu;

    for (int i = 0; i < N; i++)
    {
        fflush(stdin);
        printf("Entrer le nom de l'etudiant N %d\n", i+1);
        gets(etu.nom);
        printf("Entrer le prenom de l'etudiant N %d\n", i+1);
        gets(etu.prenom);
        //date de naissance
        do{
            printf("Entrer la date[j,m,a] de l'etudiant N %d\n", i+1);
            scanf("%d%d%d",&etu.dn.j,&etu.dn.m,&etu.dn.a);
        }while(etu.dn.j <=0 || etu.dn.j > 31 || etu.dn.m <=0 || etu.dn.m > 12 || etu.dn.a <=0);
        //note 1
        fflush(stdin);
        // getchar();
        printf("Entrer la premiere matiere de l'etudiant N %d\n", i+1);
        gets(etu.e1.matiere);
        do{
            printf("Entrer la note de la premiere matiere de l'etudiant N %d\n", i+1);
            scanf("%f",&etu.e1.note);
        }while(etu.e1.note < 0 || etu.e1.note > 20);
        //NOte 2
        fflush(stdin);
        printf("Entrer la deuxieme matiere de l'etudiant N %d\n", i+1);
        gets(etu.e2.matiere);
        do{
            printf("Entrer la note de la deuxieme matiere de l'etudiant N %d\n", i+1);
            scanf("%f",&etu.e2.note);
        }while(etu.e2.note < 0 || etu.e2.note > 20);

        //Affichage des informations:
        puts("----------------------------------------");
        printf("      Etudiant N %d    :\n", i+1);
        puts("----------------------------------------");
        printf("Nom              : %s\n",etu.nom);
        printf("Prenom           : %s\n",etu.prenom);
        printf("Date de naissance: %d-%d-%d\n",etu.dn.j,etu.dn.m,etu.dn.a);
        puts("Ses notes          :");
        printf("%s               : %.2f\n",etu.e1.matiere,etu.e1.note);
        printf("%s               : %.2f\n",etu.e2.matiere,etu.e2.note);
        puts("----------------------------------------");
        puts("----------------------------------------");
    }
    

    return 0;
}