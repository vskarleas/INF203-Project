#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int i, rnum;
    int start=-3;
    int end=0;
    int amount=6;

    srand(time(0));
    for(i=0; i<amount; i++)
    {
        rnum = rand()%(end+1-start)+start;
        printf("%d\n", rnum);
    }
    return 0;
}