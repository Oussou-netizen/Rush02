#include "calculatrice.h"
//sur ce fichiers, nous allons écrire le corps de notre calculatrice. 
//Elle est constitué de 4 fonctions qui seront appelées en fonction du choix de l'utilisateur.
float addition(float a, float b){
    return a + b;
}
float soustraction(float a, float b){
    return a - b;
}
float multiplication(float a, float b){
    return a * b;
}
float division(float a, float b){
    if (b != 0)
        return a / b;
    else
    return 0;
}
