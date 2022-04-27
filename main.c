#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAILLE 5
void Initialisation(int[][TAILLE]);
void Ajout_verification_deplacement(int,int,int[][TAILLE]);
void Affichage(int[][TAILLE]);

int main()
{

int n_tabMagic[TAILLE][TAILLE],Max=TAILLE*TAILLE,Stop=TAILLE-1; //d�claration des diff�rentes variables et du tableau

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
        printf(" ");} //ajout d'espace pour la lisibilit�
        n_tabMagic[i][j]=0; //ajout des 0 dans les cellules du tableau
        printf("%d",n_tabMagic[i][j]); //affichage pour v�rifier
    }
}
printf("\n");
}


/****************************************************************************************************************
BUT:Cette procedure permet d'ajouter les valeurs, de v�rifier l'emplacement dans le tableau et enfin le d�placement

ENTRER:/

SORTIE:Sort le tableau dans l'ordre demande ainsi que la taille
*****************************************************************************************************************/

void Ajout_verification_deplacement(int Max,int Stop,int n_tabMagic[TAILLE][TAILLE]){
//Ajout + v�rification + d�placement
int i=0,j=0,k=1;

for(i=TAILLE/2-1;k!=Max+1;i++){ //La boucle d�marre � l'endroit demander
    for(j=TAILLE/2;k!=Max+1;j++){
        if(i<0){       //v�rification du i pour revenir a la ligne en cas de d�pacement
        i=Stop;
        }if (i>Stop){ //v�rification du i pour revenir a la ligne en cas de d�pacement
        i=0;}
        if(j>Stop){ //v�rification du j pour revenir a la ligne en cas de d�pacement
            j=0;}
        if (j<0){   //v�rification du j pour revenir a la ligne en cas de d�pacement
            j=Stop;
        }
        if(n_tabMagic[i][j]==0){ //v�rfication pour savoir si la cellule du tableau est disponible
        n_tabMagic[i][j]=k;      //Si oui alors la nouvelle valeur "k" est entrer dans la cellule
        k++;                     //incr�mentation de la valeur de k
        i--;                     //On passe a la ligne sup�rieur
    }else{
        j--;                    //On passe a la colonne de gauche
        i--;                    //On passe a la ligne sup�rieur
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




