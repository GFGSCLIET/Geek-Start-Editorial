#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,s1=0,s2=0;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n-1;i++)
        scanf("%d",&a[i]);
    
    s1 = n*(n+1)/2;
    
    for(int i=0;i<n-1;i++)
        s2 += a[i];
    
    printf("%d",(s1-s2));
    
}
