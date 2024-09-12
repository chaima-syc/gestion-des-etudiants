#include<stdio.h>
#include<string.h>

typedef struct {
    int jours;
    int mois;
    int annee;
}DATE;



typedef struct {
    char nom[20];
    char prenom[20];
    char departement[100];
    int nombre;
    DATE date ;
    float note;
}Student;
Student student[100];


int i;
int compteur=1;
int total_etudient=0;
void affichage_menu (){
        printf("===============================================\n");
        printf("1-ajouter\n");
        printf("2-afficher les details des eleves\n");
        printf("3-modifier\n");
        printf("4-supprimer\n");
        printf("5-recherche\n");
        printf("6-calcule de moyenne generale\n");
        printf("7-trier\n");
        printf("8-statistique\n");
        printf("===============================================\n");


  }

void ajout_eleve(){

    student[total_etudient].nombre=compteur++;
      printf("nom:");
        scanf("%s",student[total_etudient].nom);

        printf("prenom:");
        scanf("%s",student[total_etudient].prenom);

        printf("date de naissance:\n");
        printf("Jour:");
        scanf("%d",&student[total_etudient].date.jours);
        printf("mois:");
        scanf("%d",&student[total_etudient].date.mois);
        printf("annee:");
        scanf("%d",&student[total_etudient].date.annee);


        printf("departement:\n");
        printf("1-PC\t 2-SVT\t 3-ECO\t 4-SM\n");
        scanf("%d",&student[total_etudient].departement);


        printf("note generale:\n");
        scanf("%f",&student[total_etudient].note);



     total_etudient++;
    printf("=====================================================\n");
     printf("eleve ajoute avec succes!\n");
    printf("=====================================================\n");
}

void affichage(){
     for(i=0;i<total_etudient;i++){
        printf("nom: %s \n",student[i].nom);
        printf("prenom: %s \n",student[i].prenom);
        printf("date de naissance: %02d/%02d/%04d \n",student[i].date.jours,student[i].date.mois,student[i].date.annee);
        printf("departement: %s\n",student[i].departement);
        printf("nombre unique: %d\n", student[i].nombre);
        printf("note generale: %f \n",student[i].note);         
        }
}


void modification(){
    int n_recherche;
     printf("entrer le numero unique d'eleve:");
        scanf("%d",&n_recherche);

        for(i=0;i<total_etudient;i++){
           if(student[i].nombre==n_recherche ){
                printf("entrer les nouvelles informations:\n");

                printf("entrer le nouveau nom:");
                scanf("%s",student[i].nom);

                  printf("entrer le nouveau prenom:");
                scanf("%s",student[i].prenom);

                printf("choisissez le nouveau departement:\n");
                printf("1-PC\t 2-SVT\t 3-ECO\t 4-SM\n");
                scanf("%d",&student[total_etudient].departement);


                printf("date de naissance:\n");
                printf("nouvelle Jour:");
                scanf("%d",&student[total_etudient].date.jours);
                printf("nouveau mois:");
                scanf("%d",&student[total_etudient].date.mois);
                printf("nouvelle annee:");
                scanf("%d",&student[total_etudient].date.annee);


                printf("entrer la nouvelle note generale:");
                scanf("%f",&student[i].note);

                printf("entrer le nouveau numero unique :");
                scanf("%d\n",&student[i].nombre);

               printf("======================================================================\n");
               printf("information modifier avec succee!\n");
               printf("======================================================================\n\n");
           }
        }
}
void menu_choix (){
    affichage_menu();

    int choix ;
    printf("entrer votre choix:");
    scanf("%d",&choix);
    
    switch(choix){
        case 1:
        ajout_eleve();
        affichage_menu();
        break;

        case 2:
        affichage();
        affichage_menu();
        break;

        case 3:
         modification();
         affichage_menu();
         break;


          
    }

}
int main (){
    menu_choix ();

}
