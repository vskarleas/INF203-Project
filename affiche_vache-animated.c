#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

void update () { printf ("\033[H\033[J");}
void gotoxy (x ,y) { printf (" \033[%d;%dH",x , y) ;}

void affiche_vache(int i){
    gotoxy(i+1,i+15);
    printf( "\\ ^__ ^\n");
    gotoxy(i+1,i+15);
    printf("\\  (00) \\ _______ \n");
    gotoxy(i+2,i+15);
    printf("   (__) \\         ) \\/\\\n");
    gotoxy(i+3,i+15);
    printf("       || - - - -w |\n");
    gotoxy(i+4,i+15);
    printf("       ||         ||\n" );
}

void affiche_fruit(int i){
    gotoxy(i,i);
    printf(" ,--./,-.\n");
    gotoxy(i+1,i);
    printf("/ #      \\\n");
    gotoxy(i+2,i);
    printf("|        |\n");
    gotoxy(i+3,i);
    printf("\\        / \n");
    gotoxy(i+4,i);
    printf(" `._,._,'\n");
    }

    void affiche_fruit_manger(int i){
        gotoxy(i,i);
        printf(" ,--./,-.\n");
        gotoxy(i+1,i);
        printf("/,-._.--~\\\n");
        gotoxy(i+2,i);
        printf(" __}  {\n");
        gotoxy(i+3,i);
        printf("\\`-._,-`-,\n");
        gotoxy(i+4,i);
        printf("`._,._,'\n");
    }

void cow(char *arg_e, char *arg_T, char *espace){
    printf("%s^__^ \n\
%s(%s)\\ _______ \n\
%s(__)\\         )\\/\\\n\
%s %s  ||------w |\n\
%s    ||       ||\n",espace, espace, arg_e, espace, espace, arg_T, espace);
}
 
void cow2(char *arg_e, char *arg_T, char *espace){
    printf("%s^__^ \n\
%s(%s)\\ _______ \n\
%s(__)\\         )\\/\\\n\
%s %s  /|------w |\n\
%s    \\|       \\|\n",espace, espace, arg_e, espace, espace, arg_T, espace);
}

void cow3(char *arg_e, char *arg_T, char *espace){
 printf("%s^__^ \n\
%s(%s)\\ _______ \n\
%s(  )\\         )\\/\\\n\
%s U  ||------w |\n\
%s %s  ||       ||\n",espace, espace, arg_e, espace, espace, arg_T, espace);
}


 
int main(int argc, char *argv[]){
    int coord; 
    sscanf(argv[1], "%d", &coord);
    long pos_e = -1;
    long pos_T = -1;
 
    char eye[10] = "oo";
    char eye2[10] ="00";
    char tongue[200] = " ";
    
 
    for (int i = 1; i < argc; i++){
        if (strcmp(argv[i],"-e") == 0){
            pos_e = i + 1;
            strcpy(eye, argv[pos_e]);
        }
        else if (strcmp(argv[i], "-T") == 0){
            pos_T = i + 1;
            strcpy(tongue, argv[pos_T]);
        }
    }
    char espace[20000] = "                                                    ";
    
    for (int k = 0; k <= 2; k++){
        if (k == 0){
        update();
        affiche_fruit(coord);
        sleep(1);
        cow(eye, tongue, espace);
        sleep(1);
        update();
        affiche_fruit(coord);
        cow2(eye2, tongue, espace);
        sleep(1);}

        else if(k==2){
            update();
            affiche_fruit(coord);
            cow3(eye2, tongue, espace);
            sleep(2);
            update();
            affiche_fruit_manger(coord);
            cow(eye2, tongue, espace);
            sleep(2);
            update();
            affiche_fruit_manger(coord);
            cow(eye, tongue, espace);
        }
        else{
            update();
            affiche_fruit(coord);
            cow(eye2, tongue, espace);
            sleep(1);
            update();
            affiche_fruit(coord);
            cow2(eye2, tongue, espace);
            sleep(1);
            update();
            affiche_fruit(coord);
            cow(eye2, tongue, espace);
            sleep(2);
        }
        for (int j = 0; j < strlen(espace); j++)
            strcpy(&espace[j], &espace[j+1]);
    }
}