#include <iostream>
using namespace std;

int main() {
    int P,coins=0;
    cin>>P;
    coins = coins + P/10;
    P = P%10;
    coins = coins + P/5;
    cout<<coins;
    return 0;
}
