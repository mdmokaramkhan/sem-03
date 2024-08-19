// You are using GCC
#include<iostream>
using namespace std;

int sum(int n) {
    int sum = 0, amount; 
    for(int i=0; i<n; i++) {
        cin>>amount;
        sum += amount;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int total = sum(n);
    cout<<total;
    return 0;
}