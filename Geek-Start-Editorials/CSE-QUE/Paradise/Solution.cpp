#include <iostream>

using namespace std;

int main() {
 int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int zero_count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0) cout<<arr[i];
        else zero_count++;
    }
    for(int i=0;i<zero_count;i++) cout<<"0 ";
    return 0;
}
