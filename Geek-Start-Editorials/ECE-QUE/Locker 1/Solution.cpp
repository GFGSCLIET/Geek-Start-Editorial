#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int n,s1=0,s2=0;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    
    s1 = n*(n+1)/2;
    
    for(int i=0;i<n-1;i++)
        s2 += a[i];
    
    cout<<s1-s2;
    
}
