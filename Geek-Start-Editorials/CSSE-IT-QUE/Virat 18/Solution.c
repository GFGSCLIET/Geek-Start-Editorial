#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int p,i;
    scanf("%d",&p);
    scanf("%d",&i);
    
    int s= (p-i)/6;
    
    if (p>=i)
        printf("%d",s+1);
    else
        printf("0");
    
    return 0;
}
