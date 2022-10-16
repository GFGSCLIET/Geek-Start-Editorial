#include <stdio.h>

int main() {
    int P,coins=0;
    scanf("%d",&P);
    coins = coins + P/10;
    P = P%10;
    coins = coins + P/5;
    printf("%d",coins);  
    return 0;
}
