#include <stdio.h>
#include <string.h>

void ajouter_fruit(char * choix_fruit, int nombre, int *pomme, int *orange, int *poire){
    if (strcmp(choix_fruit, "pomme") == 0){
        *pomme += nombre;
    }

    else if (strcmp(choix_fruit, "orange") == 0){
        *orange += nombre;
    }

    else if (strcmp(choix_fruit, "poire") == 0){
        *poire += nombre;
    }

    else {
        printf("\nCe fruit n'éxiste pas...\n");
    }
}

void vendre_fruit(char * choix_fruit, int nombre, int *pomme, int *orange, int *poire){
    if (strcmp(choix_fruit, "pomme") == 0){
        *pomme -= nombre;
    }

    else if (strcmp(choix_fruit, "orange") == 0){
        *orange -= nombre;
    }

    else if (strcmp(choix_fruit, "poire") == 0){
        *poire -= nombre;
    }

    else {
        printf("\nCe fruit n'existe pas...\n");
    }
}

int main(){
    char reponse[10] = "";
    int pommes = 2;
    int oranges = 3;
    int poires = 1;

    while (strcmp(reponse, "quitter") != 0){ // Tant que la réponse n'est pas "quitter"

        printf("\nPommes : %d", pommes); // Affiche le stock
        printf("\nOranges : %d", oranges);
        printf("\nPoires : %d", poires);

        printf("\nQue voulez vous faire ? (vendre/ajouter/quitter) : ");
        scanf("%s", reponse);

        if (strcmp(reponse, "vendre") == 0){
            char choix[20] = "";
            int nombre;

            printf("\nQuel fruit (pomme/orange/poire) : ");
            scanf("%s", choix);

            printf("\nCombien : ");
            scanf("%i", &nombre);

            vendre_fruit(choix, nombre, &pommes, &oranges, &poires);
        }

        else if (strcmp(reponse, "ajouter") == 0){
            char choix[20] = "";
            int nombre;

            printf("\nQuel fruit (pomme/orange/poire) : ");
            scanf("%s", choix);

            printf("\nCombien : ");
            scanf("%d", &nombre);

            ajouter_fruit(choix, nombre, &pommes, &oranges, &poires);
        }
    }
    return 0;
}