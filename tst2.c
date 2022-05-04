#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int rnum;
    srand(time(0));
    rnum = rand()%-3;
    printf("%d\n", rnum);
    return 0;
}