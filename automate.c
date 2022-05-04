#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include<time.h>

#define LIFEROCKS 2
#define LIFESUCKS 1
#define BYEBYELIFE 0

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

void affiche_vache(int i){
    //pour byebyelife
    if (i==0) {
        printf("< En train de byebyelife >\n\\  ^__^\n \\ (XX)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n");
    }
    //pour liferocks
    else if (i==2) {
        printf("< Yeah! Liferocks >\n\\  ^__^\n \\ (00)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n");
    }
    //pour lifesucks
    else if (i==1) {
        printf("< Oopss, lifesucks :( >\n\\  ^__^\n \\ (--)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n");
    }
    else if (i==-1) {
        printf("Game over");
    }
}

int stock_update (int stock, int lunchfood, int crop) {
    if (lunchfood <= stock) {
        return (stock-lunchfood+crop);
    }
    else {
        return -1;
    }
}

int fitness_update(int fitness, int lunchfood, int digestion) {
    return (lunchfood+fitness+digestion);
}

int sortie(int etatcourant, int fitness, int lunchfood, int digestion) {
    switch (etatcourant) {
        case LIFEROCKS:
        if (0<=fitness_update(fitness, lunchfood, digestion) && fitness_update(fitness, lunchfood, digestion)<=10){
            if (fitness_update(fitness, lunchfood, digestion)==0 || fitness_update(fitness, lunchfood, digestion)==10) {
                return BYEBYELIFE;
            }
            else if (1<=fitness_update(fitness, lunchfood, digestion) && fitness_update(fitness, lunchfood, digestion)<=3) {
                return LIFESUCKS;
            }
            else if (7<=fitness_update(fitness, lunchfood, digestion) && fitness_update(fitness, lunchfood, digestion)<=9) {
                return LIFESUCKS;
            }
            else {
                return LIFEROCKS;
            }
        }
        else {
            return -1;
        }
        case BYEBYELIFE:
        if (0<=fitness_update(fitness, lunchfood, digestion) && fitness_update(fitness, lunchfood, digestion)<=10){
            if (1<=fitness_update(fitness, lunchfood, digestion) && fitness_update(fitness, lunchfood, digestion)<=3) {
                return LIFESUCKS;
            }
            else if (7<=fitness_update(fitness, lunchfood, digestion) && fitness_update(fitness, lunchfood, digestion)<=9) {
                return LIFESUCKS;
            }
            else if (4<=fitness_update(fitness, lunchfood, digestion) && fitness_update(fitness, lunchfood, digestion)<=6) {
                return LIFEROCKS;
            }
            else BYEBYELIFE;
        }
        else {
            return -1;
        }
        case LIFESUCKS:
        if (0<=fitness_update(fitness, lunchfood, digestion) && fitness_update(fitness, lunchfood, digestion)<=10){
            if (fitness_update(fitness, lunchfood, digestion)==0 || fitness_update(fitness, lunchfood, digestion)==10) {
                return BYEBYELIFE;
            }
            else if (4<=fitness_update(fitness, lunchfood, digestion) && fitness_update(fitness, lunchfood, digestion)<=6) {
                return LIFEROCKS;
            }
            else LIFESUCKS;
        }
        else {
            return -1;
        }
    }
    return -1;
}

int main(){
    int stock=5;
    int fitness=5;
    int etatcourant=LIFEROCKS;
    int start=-3;
    int end=3;
    int start_2=-3;
    int end_2=0;
    int digestion;
    int crop;
    int lunchfood;
    int duree_de_vie=0;
    clearScreen();
    affiche_vache(etatcourant);
    while (stock>=0 && stock<=10) {
        printf("Stock: %d\n", stock);
        printf("De combien voulez-vous alimenter la vache? (valeur entre 0 et %d)\n",stock);
        scanf("%d", &lunchfood);
   
        digestion = rand()%(end_2+1-start_2)+start_2;
        crop = rand()%(end+1-start)+start;

        etatcourant=sortie(etatcourant,fitness, lunchfood, digestion);
        affiche_vache(etatcourant);
        if (etatcourant==0){
            printf("La vache est mort :(\n");
            break;
        }
        else if (etatcourant==-1){
            printf("Game over. Le niveau de fitness n'est pas entre les limites definis\n");
            break;
        }
        fitness=fitness_update(fitness,lunchfood,digestion);
        stock=stock_update(stock,lunchfood,crop);
        if (stock<=0){
            printf("Le stock est vide.\n");
            break;
        }
        else if (stock>=10) {
            stock=10;
        }
        duree_de_vie++;
    }
    printf("La vache etait en vie pour %d jours\n", duree_de_vie);
}