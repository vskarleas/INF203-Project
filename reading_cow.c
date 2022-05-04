#include <stdio.h>
#include <string.h>
#include <unistd.h>

void affiche_vache(char text[]){
    printf("< %s >\n\\  ^__^\n \\ (00)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n", text);
}

void affiche_vache_bouche(char text2[], char text){
    printf("< %s >\n\\  ^__^\n \\ (00)\\_______\n   (__)\\       )\\/\\\n    %c  ||----w |\n       ||     ||\n", text2, text);
}

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

int main(int argc, char *argv[]){
    FILE *f; 
    char c;
    char tab[256];
    f = fopen(argv[1], "r"); if (f == NULL) {
        perror(argv[1]);
    }
    int j=0;
    fscanf(f, "%c", &c);
    while (!feof(f)) {
        tab[j]=c;
        j++;
        fscanf(f, "%c", &c); 
    }
    int i;
    char tab2[256];

    for (i=0; tab[i]!='\0';i++){
        affiche_vache_bouche(tab2, tab[i]);
        sleep(1);
        clearScreen();
        tab2[i]=tab[i];
        affiche_vache(tab2);
        sleep(1);
        clearScreen();
    }
    affiche_vache(tab2);
    printf("\n");
    
    return 0;
}