#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int A[N],count=0;
    for(int i = 0;i < N; i++)
        cin>>A[i];
    for(int i = 0;i < N; i++){
        if(A[i]<=0)
            count++;
    }
    cout<<count;
    return 0;
}