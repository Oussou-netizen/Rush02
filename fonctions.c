#include <stdio.h>
#include "fonctions.h"
/* Sur ce fichier, nous allons écrire le corps des fonctions qui permettront 
de gérer les notes des élèves. 
Ce sont 5 fonctions qui seront appelées en fonction du chois de l'utilisateur
*/
void saisi_notes(float notes[], int taille){
    printf("   Saisie des notes\n   ");
    for (int i = 0; i < taille; i++)
        do{
            printf("Note de l'eleve %d : ", i+1);
            scanf("%f", &notes[i]);
            if (notes[i] < 0 || notes[i] > 20){
                printf("Erreur: note entre 0 et 20\n");
            }
        }while (notes[1] < 0 || notes[i] >20);
}
void affiche_notes(float notes[], int taille){
    printf("   Notes des eleves   :\n");
     for (int i = 0; i < taille; i++){
         printf("Eleve %d : %.2f\n ", i+1, notes[i]);
     }

}
float moyenne(float notes[], int taille){
    float S = 0;
    for (int i =0; i < taille; i++){
        S += notes[i];
    }
    return  S / TAILLE;
}
float maximum(float notes[], int taille){
    float max = notes[0];
    for(int i = 0; i < taille; i++){
        if (notes[i] > max){
            max = notes[i];
        }
    }return max;

}
float minimum(float notes[], int taille){
    float min = notes[0];
    for(int i = 0; i < taille; i++){
        if (notes[i] < min) {
            min = notes[i];
        }

    } return min;
}
