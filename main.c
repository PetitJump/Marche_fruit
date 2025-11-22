#include <stdio.h>
#include <string.h>

void ajouter_fruit(){

}

void vendre_fruit(){

}

void afficher_stock(){

}

int main(){
    char reponse[] = "";
    while (strcmp(reponse, "quitter") != 0){ // Tant que la réponse n'est pas "quitter"
        afficher_stock();

        printf("\nQue voulez vous faire ? (vendre/ajouter/quitter) : ");
        scanf("%s", reponse);

        if (strcmp(reponse, "vendre") == 0){
            vendre_fruit();
        }

        else if (strcmp(reponse, "ajouter") == 0){
            ajouter_fruit();
        }
    }
    return 0;
}
