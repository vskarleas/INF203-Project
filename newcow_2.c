#include <stdio.h>

void affiche_vache(){
    printf("\\  ^__^\n \\ (00)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n");
}

int main(int argc, char *argv[]){
    int k;
    for (k=0 ; k<argc ; k++){
    }
    if (k-1 == 2) {
        if (argv[1] == "-e"){ //This thing right here doesn't work. Need to save pointer contwnt to a string file for comparison.
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
    }
    else {
    affiche_vache();
    }
}