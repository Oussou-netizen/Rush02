#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"
#include "calculatrice.h"

/*
    Celle-ci est la page principale qui contenir le corps du programme.
    Cela va du message de bienvenue, au déroulé du programme en passant
    par la correction des erreurs. 
*/
int main()
{
    //Nous déclarons d'abord les variables qui seront utilisé pour la suite du programme.
   float notes[TAILLE];
   int choix;
   int choixN;
    printf("                       Bienvenue        \n");
    printf("         Vous pourrez gerer les notes de vos eleves\n");
    printf("               ou utiliser la calculatrice");

    printf("\n   MENU  \n");
    printf("1. Saisir les notes\n");
    printf("2. Calculatrice\n");
    printf("3. Quitter\n");
    printf("Que choisissez-vous : ");
    scanf("%d", &choix);
    while (choix < 1 ||  choix > 3) {
        printf("Vous devez faire un choix entre 1 et 3: ");
        scanf("%d", &choix);
    } ;
    if (choix == 1){
        saisi_notes(notes, TAILLE);
        printf("1. Afficher les notes\n");
        printf("2. Calculer la moyenne\n");
        printf("3. Afficher la meilleure note\n");
        printf("4. Afficher la plus mauvaise note\n");
        printf("5. Que choisissez-vous : ");
        scanf("%d", &choixN);
         while (choixN < 1 || choixN > 4) {
            printf("Vous devez faire un choix entre 1 et 4: ");
            scanf("%d", &choixN);
        }
        switch (choixN){
        case 1:
            affiche_notes(notes, TAILLE);
            break;
        case 2:
            printf("La moyenne de la classe est : %.2f\n", moyenne(notes, TAILLE) );
            break;
        case 3:
            printf("La meilleure note est : %.f", maximum(notes, TAILLE));
            break;
        case 4:
            printf("La plus mauvaise note est : %.2f", minimum(notes, TAILLE));
            break;
        default:
            printf("Erreur: Mauvais choix.\n");
        }
        }
    if (choix == 2 ){
        float a,b;
        char op;
        printf("Que souhaitez-vous faire ? \n");
        printf("+. Addition\n");
        printf("-. Soustraction\n");
        printf("*. Multiplication\n");
        printf("/. Division\n");
        printf("Choisissez un op�rateur :");
        scanf(" %c", &op);
        printf("Veuillez saisir le 1er nombre : ");
        scanf("%f", &a);
        printf("Veuillez saisir le 2e nombre : ");
        scanf("%f", &b);
        switch (op){
        case '+':
            printf("Resultat: %.2f\n", addition(a,b));
            break;
        case '-':
            printf("Resultat: %.2f\n", soustraction(a,b));
            break;
        case '*':
            printf("Resultat: %.2f\n", multiplication(a,b));
            break;
        case '/':
            if (b == 0)
                printf("Erreur: devision par 0 impossible");
            else
                printf("Resultat: %.2f\n", division(a,b));
            break;
        }
        }
        else if (choix == 3){
            printf("A bientot");
        }
    return 0;
}
