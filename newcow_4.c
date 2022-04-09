#include <stdio.h>
#include <string.h>
#include <unistd.h>
void affiche_vache_simple(){
    printf("   ^__^\n   (00)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n");
}

void clearScreen()
{
  const char *CLEAR_SCREEN_ANSI = "\e[1;1H\e[2J";
  write(STDOUT_FILENO, CLEAR_SCREEN_ANSI, 12);
}

void affiche_vache(){
    printf("   ^__^\n   (oo)\\_______\n   (__)\\       )\\/\\\n       ||----w |\n       ||     ||\n");
}
 void update(){printf("\033[H\033[J\n");}
 void gotoxy(x,y){printf("\033[%d;%dH\n",x,y);} //5 is lines and 50 are spaces

 int main(){
    int i;
    for (i=0; i<20; i++){
    clearScreen();
    affiche_vache_simple();
    sleep(4);
    clearScreen();
    affiche_vache();
    sleep(1);
    clearScreen();
    affiche_vache_simple();
    sleep(1);
    clearScreen();
    affiche_vache();
    sleep(2);
    clearScreen();
    affiche_vache_simple();
    sleep(5);
    clearScreen();
    affiche_vache();
    sleep(1);
    clearScreen();
    affiche_vache_simple();
    sleep(2);
    clearScreen();
    affiche_vache();
    sleep(3);
    clearScreen();
    affiche_vache_simple();
    }
 }