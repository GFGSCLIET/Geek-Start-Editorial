#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int p,i;
    cin>>p>>i;
    
    int s= (p-i)/6;
    
    if (p>=i)
        cout<<s+1;
    else
        cout<<"0";
    
    return 0;

}
