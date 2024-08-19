// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

void calculateInterest(float x, float y) {
    cout<<fixed<<setprecision(2)<<x*y/100<<endl;
}

void calculateInterest(float x, float y, int t) {
    cout<<fixed<<setprecision(2)<< x*y/100*t;
}

int main() {
    float x,y;
    int t;
    cin>>x>>y;
    cin>>t;
    calculateInterest(x,y);
    calculateInterest(x,y,t);
    return 0;
}