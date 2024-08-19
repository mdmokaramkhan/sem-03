// You are using GCC
#include<iostream>
using namespace std;

int divisorSum(int& n) {
    int sum = 0;
    for(int i=1; i<=n; i++) {
        int sumOfDivisors = 0;
        for(int j=1; j<=i; j++){
            if(i % j ==0) {
                sumOfDivisors +=j;
            }
        }
        sum += sumOfDivisors;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int sum = divisorSum(n);
    cout<<sum;
    return 0;
}// You are using GCC
#include<iostream>
using namespace std;

int divisorSum(int& n) {
    int sum = 0;
    for(int i=1; i<=n; i++) {
        int sumOfDivisors = 0;
        for(int j=1; j<=i; j++){
            if(i % j ==0) {
                sumOfDivisors +=j;
            }
        }
        sum += sumOfDivisors;
    }
    return sum;
}

int main() {
    int n;
    cin>>n;
    int sum = divisorSum(n);
    cout<<sum;
    return 0;
}