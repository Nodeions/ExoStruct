#include <stdio.h>
#include <stdlib.h>
#include <string.h> //permet de changer les chaines de char

typedef struct Personne {

    const char* prenom;
    const char* nom;
    int age;

}Personne;

void InitPersonne(Personne personne) {

    personne.prenom = NULL;
    personne.nom = NULL;
    personne.age = 0;

}

int main()
{
    //Créer une struct "Personne" avec un "nom" "prenom" et "age"
    //Créer 3 "Personne" et les remplir
    
   /* InitPersonne(personne);*/

    

    Personne one;

    one.prenom = "Dudule";
    one.nom = "Poilue";
    one.age = 2000;

    Personne two;

    two.prenom = "Tigrou";
    two.nom = "Bondissant";
    two.age = 21;

    Personne three;

    three.prenom = "LeC";
    three.nom = "Terrible";
    three.age = -2000;



    // %s pour la chaine de caracteres
    printf("La personne s'appelle %s %s et a %d ans", one.prenom, one.nom, one.age);
    printf("La personne s'appelle %s %s et a %d ans", two.prenom, two.nom, two.age);
    printf("La personne s'appelle %s %s et a %d ans", three.prenom, three.nom, three.age);
    
    
    //Créer une fonction pour afficher une personne "La personne s'appelle x y et à z ans"

    return 0;
}