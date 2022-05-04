#include <stdio.h>
#include <string.h>

void affiche_vache(){
    printf("\\  ^__^\n \\ (00)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n");
}

int main(int argc, char *argv[]){
    int k;
    k = argc;
    if (k-1 == 2) {
        if (!strcmp(argv[1],"-e")){
            int i,totChar;
            totChar = 0;
            for(i=0; argv[2][i] != '\0'; i++){
                totChar++;
            }
            if (totChar==2){
                printf("\\  ^__^\n \\ (%s)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n",argv[2]);
            }
            else {
                affiche_vache();
            }
        }
        else {
            printf("No argument given for the eyes\n");
        }
    }
    else {
        affiche_vache();
    }
}