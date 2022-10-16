#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,flag=0;
    cin>>n;
    
    if(n==0){
            cout<<0;
            flag = 1;
        }
        else{
            while(n>0){
                if(n%2==0){
                    cout<<n;
                    flag = 1;
                    break;
                }
              n = n/10;
            }
        }
        if(flag==0)
            cout<<"No";
    }
