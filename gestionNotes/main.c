#include <stdio.h>
#define MAX 10
// const int MAX = 10;
typedef struct{
    char nom[50];
    int coef;
}MODULE;

typedef struct{
    MODULE module;
    float note;
}EVAL;

typedef struct{
    char matr[50],nom[50],prenom[50];
    EVAL evals[MAX];
    int nbrEvals;
}ETUDIANT;

//PROPOTYPES
//Module:
MODULE saisieModule(void);
void afficheModule(MODULE);
//Evaluation:
EVAL saisieEval(void);
void afficheEval(EVAL);
//Module:
ETUDIANT saisieEtudiant(void);
void afficheEtudiant(ETUDIANT);
//Tableau eval
void remplissageTabEval(EVAL[],int);
void AffichageTabEval(EVAL[],int);

int main(){
    // MODULE mod;
    // mod = saisieModule();
    // afficheModule(mod);
    // afficheModule(saisieModule());
    // afficheEval(saisieEval());
    afficheEtudiant(saisieEtudiant());
    return 0;
}

MODULE saisieModule(void){
    MODULE m;
    puts("Entrer le nom du module :\n");
    gets(m.nom);
    do{
        puts("Entrer le coel du module :\n");
        scanf("%d",&m.coef);
    }while(m.coef < 1);
    return m;
}
void afficheModule(MODULE m){
    printf("NOM  : %s\n",m.nom);
    printf("COEF : %d\n",m.coef);
}
//Evaluation:
EVAL saisieEval(void){
    EVAL e;
    e.module = saisieModule();
    do{
        puts("Entre la note obtnue :\n");
        scanf("%f",&e.note);
    }while(e.note < 0 || e.note > 20);
    fflush(stdin);
    return e;
}
void afficheEval(EVAL e){
    afficheModule(e.module);
    printf("NOTE : %.2f\n",e.note);
}
//Module:
ETUDIANT saisieEtudiant(void){
    ETUDIANT e;
    puts("Entrer le nom de l'etudiant :\n");
    gets(e.nom);
    puts("Entrer le prenom de l'etudiant :\n");
    gets(e.prenom);
    puts("Entrer le matricule de l'etudiant :\n");
    gets(e.matr);
    do{
        puts("Entrer le nombre d'evaluations :\n");
        scanf("%d",&e.nbrEvals);
    } while (e.nbrEvals < 0 || e.nbrEvals > MAX);
    fflush(stdin);
    remplissageTabEval(e.evals,e.nbrEvals);
    return e;
}
void afficheEtudiant(ETUDIANT e){
    printf("NOM : %s\n",e.nom);
    printf("PRENOM : %s\n",e.prenom);
    printf("MATRICULE : %s\n",e.matr);
    puts("Les Evaluations de l'etudiant:\n");
    puts("------------------------------\n");
    AffichageTabEval(e.evals,e.nbrEvals);
}
//Tableau eval
void remplissageTabEval(EVAL te[],int n){
    for(int i=0; i<n;i++){
        te[i] = saisieEval();
    }
}
void AffichageTabEval(EVAL te[],int n){
    for(int i=0; i<n;i++){
        afficheEval(te[i]);
        puts("------------------------");
    }
}