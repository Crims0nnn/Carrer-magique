#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAILLE 5
void Initialisation(int[][TAILLE]);
void Ajout_verification_deplacement(int,int,int[][TAILLE]);
void Affichage(int[][TAILLE]);

int main()
{

int n_tabMagic[TAILLE][TAILLE],Max=TAILLE*TAILLE,Stop=TAILLE-1; //déclaration des différentes variables et du tableau

Initialisation(n_tabMagic);
Ajout_verification_deplacement(Max,Stop,n_tabMagic);
Affichage(n_tabMagic);


}


/***************************************************************************************************************
BUT:Initialiser le tableau

ENTRER:Donne une tableau pour pouvoir initialiser

SORTIE:Le tableau est initialiser (remplie de zero)

*****************************************************************************************************************/

void Initialisation(int n_tabMagic[TAILLE][TAILLE]){
int i=0,j=0;
for(i=0;i<TAILLE;i++){ //Une double boucle qui permet initialiser les lignes et les colonnes du tableau
    printf("\n");
    for(j=0;j<TAILLE;j++){
        if(j!=0){
        printf(" ");} //ajout d'espace pour la lisibilité
        n_tabMagic[i][j]=0; //ajout des 0 dans les cellules du tableau
        printf("%d",n_tabMagic[i][j]); //affichage pour vérifier
    }
}
printf("\n");
}


/****************************************************************************************************************
BUT:Cette procedure permet d'ajouter les valeurs, de vérifier l'emplacement dans le tableau et enfin le déplacement

ENTRER:/

SORTIE:Sort le tableau dans l'ordre demande ainsi que la taille
*****************************************************************************************************************/

void Ajout_verification_deplacement(int Max,int Stop,int n_tabMagic[TAILLE][TAILLE]){
//Ajout + vérification + déplacement
int i=0,j=0,k=1;

for(i=TAILLE/2-1;k!=Max+1;i++){ //La boucle démarre à l'endroit demander
    for(j=TAILLE/2;k!=Max+1;j++){
        if(i<0){       //vérification du i pour revenir a la ligne en cas de dépacement
        i=Stop;
        }if (i>Stop){ //vérification du i pour revenir a la ligne en cas de dépacement
        i=0;}
        if(j>Stop){ //vérification du j pour revenir a la ligne en cas de dépacement
            j=0;}
        if (j<0){   //vérification du j pour revenir a la ligne en cas de dépacement
            j=Stop;
        }
        if(n_tabMagic[i][j]==0){ //vérfication pour savoir si la cellule du tableau est disponible
        n_tabMagic[i][j]=k;      //Si oui alors la nouvelle valeur "k" est entrer dans la cellule
        k++;                     //incrémentation de la valeur de k
        i--;                     //On passe a la ligne supérieur
    }else{
        j--;                    //On passe a la colonne de gauche
        i--;                    //On passe a la ligne supérieur
        j--;                    //On passe a la colonne de gauche une seconde fois
    }

}
}

printf("\n");
}

/****************************************************************************************************************
BUT:Cette procedure permet l'affichage final du tableau

ENTRER:Le tableau

SORTIE: Affiche le tableau
*****************************************************************************************************************/
void Affichage(int n_tabMagic[TAILLE][TAILLE]){
//affichage
int i=0,j=0;
for(i=0;i<TAILLE;i++){

    for(j=0;j<TAILLE;j++){ //double boucle pour permettre la mise en place du tableau
        if(j!=0){
        printf(" ");}
        printf("%d",n_tabMagic[i][j]); //affichage du tableau
    }
    printf("\n");
}

}




