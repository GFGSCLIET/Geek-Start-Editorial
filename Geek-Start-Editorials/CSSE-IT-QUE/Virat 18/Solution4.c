#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int pak,ind,diff,six;
    scanf("%d %d",&pak,&ind);
    if(pak>ind)
    {
        diff=pak-ind;
        six=ceil(diff/6)+1;
        printf("%d",six);
    }
    else{
        six=0;
        printf("%d",six);
    }
    return 0;
}
