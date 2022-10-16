#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=0) 
            cout<<arr[i]<<" ";
        else 
            c++;
    }
    for(int i=0;i<c;i++) 
        cout<<"0 ";
    return 0;
}
