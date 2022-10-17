#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void binary(int n){
    int rem,i=0;
    int arr[100];
    while (n!=0) {
        rem = n % 2;
        n /= 2;
        
        if (rem == 0)
            rem = 1;
        else
            rem = 0;
        
        arr[i] = rem;
        i++;
  }  
    for(i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}

int main() {

    int n;
    scanf("%d",&n);
    if(n==0)
        printf("1");
    else
        binary(n);
}

