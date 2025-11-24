#include <stdio.h>
#include <string.h>

void ajouter_fruit(char * choix_fruit, int *pomme, int *orange, int *poire){
    if (strcmp(choix_fruit, "pomme") == 0){
        *pomme += 1;
    }

    else if (strcmp(choix_fruit, "orange") == 0){
        *orange += 1;
    }

    else if (strcmp(choix_fruit, "poire") == 0){
        *poire += 1;
    }
}

void vendre_fruit(char * choix_fruit, int *pomme, int *orange, int *poire){
    if (strcmp(choix_fruit, "pomme") == 0){
        *pomme -= 1;
    }

    else if (strcmp(choix_fruit, "orange") == 0){
        *orange -= 1;
    }

    else if (strcmp(choix_fruit, "poire") == 0){
        *poire -= 1;
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
            printf("\nQuel fruit :");
            scanf("%s", choix);
            vendre_fruit(choix, &pommes, &oranges, &poires);
        }

        else if (strcmp(reponse, "ajouter") == 0){
            char choix[20] = "";
            printf("\nQuel fruit :");
            scanf("%s", choix);
            ajouter_fruit(choix, &pommes, &oranges, &poires);
        }
    }
    return 0;
}
