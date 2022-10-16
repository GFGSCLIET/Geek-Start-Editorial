#include <stdio.h>

int main() {
    int N,count=0;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++)
        scanf("%d",&A[i]);
    for(int i=0;i<N;i++){
        if(A[i]<=0)
            count++;
    }
    printf("%d",count);
    return 0;
}
