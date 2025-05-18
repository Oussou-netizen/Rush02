#ifndef FONCTIONS_H
#define FONCTIONS_H
/*
    Sur ce fichier nous declarerons la constante TAILLE du tableau
    (nombre total des notes)
    et aussi les fonctions de gestion des notes.  
*/
#define TAILLE 10

void saisi_notes(float notes[], int taille);
void affiche_notes(float notes[], int taille);
float moyenne(float notes[], int taille);
float maximum(float notes[], int taille);
float minimum(float notes[], int taille);

#endif
