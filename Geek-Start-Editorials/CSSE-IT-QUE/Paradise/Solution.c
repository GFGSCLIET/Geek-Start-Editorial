#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
 int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int zero_count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0) printf("%d ",arr[i]);
        else zero_count++;
    }
    for(int i=0;i<zero_count;i++) printf("0 ");
    return 0;
}
