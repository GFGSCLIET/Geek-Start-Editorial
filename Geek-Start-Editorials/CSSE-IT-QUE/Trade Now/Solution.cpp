#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,j,p=0;
    cin >> n;
    
    int arr[n];
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<n;i++)
    {
        for(j= i+1;j<n;j++)
        {
            if (arr[j]>arr[i])
            {
                p = max(arr[j]-arr[i] ,p);
                    
            }
        }
    }
    
    cout<<p;
    
    return 0;
}
