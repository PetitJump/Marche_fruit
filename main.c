#include <stdio.h>
#include <string.h>

void ajouter_fruit(){

}

void vendre_fruit(choix_fruit){
    
}

void afficher_stock(){

}

int main(){
    char reponse[] = "";
    int pommes = 1;
    int oranges = 3;
    int poires = 2;
    int ananas = 0;

    while (strcmp(reponse, "quitter") != 0){ // Tant que la réponse n'est pas "quitter"
        afficher_stock();

        printf("\nQue voulez vous faire ? (vendre/ajouter/quitter) : ");
        scanf("%s", reponse);

        if (strcmp(reponse, "vendre") == 0){
            char choix[] = "";
            printf("\nQuel fruit :");
            scanf("%s", choix);
            vendre_fruit(choix);
        }

        else if (strcmp(reponse, "ajouter") == 0){
            ajouter_fruit();
        }
    }
    return 0;
}
