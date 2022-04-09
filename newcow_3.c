#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void affiche_vache_simple(){
    printf("   ^__^\n   (00)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n");
}

void affiche_vache_eyes(char text[]){
    printf("   ^__^\n   (%s)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n", text);
}

void affiche_vache(char text[]){
    printf("< %s >\n\\  ^__^\n \\ (00)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n", text);
}

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

void one(int o){
    if (o==1){
    printf("1111\n  11\n  11\n  11\n111111\n");
    }
    else if (o==2) {
    printf(" 2222 \n22  22\n   22 \n  22  \n222222\n");
    }
    else if (o==3) {
        printf(" 3333 \n33  33\n   333\n33  33\n 3333 \n");
    }
    else if (o==4) {
        printf("44  44\n44  44\n444444\n    44\n    44\n");
    }
    else if (o==5) {
        printf("555555\n55    \n55555 \n    55\n55555 \n");
    }
    else if (o==6) {
        printf(" 6666 \n66    \n66666\n66  66\n 6666 \n");
    }
    else if (o==7) {
        printf("777777\n   77 \n  77  \n 77   \n77    \n");
    }
    else if (o==8) {
        printf(" 8888 \n88  88\n 8888 \n88  88\n 8888 \n");
    }
    else if (o==9) {
        printf(" 9999 \n99  99\n 99999\n    99\n 9999 \n");
    }
    else if (o==0) {
        printf(" 0000 \n00  00\n00  00\n00  00\n 0000 \n");
    }
}


int main(int argc, char *argv[]){
    char code[19]="0 1 2 3 4 5 6 7 8 9";
    int i,k,j;
    k = argc;
    if (k-1 == 2) {
        if (!strcmp(argv[1],"-count")) {
            for (i=0; code[i]!='\0'; i++){
                if (!strcmp(argv[2],&code[i])){
                    k=i;
                }
            }
            clearScreen();
            for (j=k; j>=0;) {
                one(j);
                sleep(2);
                clearScreen();
                j--;
            }
            affiche_vache("Coucou! Hello world");
        }
        else if (!strcmp(argv[1],"-e")){
            int i,totChar;
            totChar = 0;
            for(i=0; argv[2][i] != '\0'; i++){
                totChar++;
            }
            if (totChar==2){
                affiche_vache_eyes(argv[2]);
            }
            else {
                affiche_vache_simple();
            }
        }
    }
    else {
        affiche_vache(argv[1]);
    }
}