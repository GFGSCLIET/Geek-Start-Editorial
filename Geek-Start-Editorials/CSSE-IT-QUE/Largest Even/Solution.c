#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,flag=0;
    scanf("%d",&n);
    
    if(n==0){
            printf("0");
            flag = 1;
        }
        else{
            while(n>0){
                if(n%2==0){
                    printf("%d",n);
                    flag = 1;
                    break;
                }
              n = n/10;
            }
        }
        if(flag==0)
            printf("No");
}
