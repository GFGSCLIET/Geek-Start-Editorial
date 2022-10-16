#include <stdio.h> 
 
 
int main() { 
     
    int n,i,j,p=0; 
    scanf("%d",&n); 
     
    int arr[n]; 
     
    for(i=0;i<n;i++) 
    { 
        scanf("%d",&arr[i]); 
    } 
     
    for(i=0;i<n;i++) 
    { 
        for(j= i+1;j<n;j++) 
        { 
            if (arr[j]>arr[i]) 
            { 
                if (arr[j]-arr[i] > p) 
                    p = arr[j]-arr[i]; 
                     
            } 
        } 
    } 
    printf("%d",p);
