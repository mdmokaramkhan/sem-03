// You are using GCC
#include<iostream>
#include<cmath>
using namespace std;

inline bool armstrong(int num) {
    int tmp = num;
    int og = num;
    int count = 0;
    int arr[count];
    while(tmp>0) {
        count++;
        int digit = tmp % 10;
        arr[count-1] = digit;
        tmp /= 10;
    }
    // cout<<num<<endl; //this num value is zero why?
    int sum = 0;
    for(int i=0; i<count; i++) {
        sum += pow(arr[i], count);
    }
    // cout<<"sum: "<<sum<<" num: "<<num;
    if (sum == og) {
        return true;
    } else {
        return false;
    }
}

inline void printFactors(int num) {
    cout<<num<<" is an Armstrong number"<<endl;
    for(int i=1; i<=num; i++) {
        if(num % i == 0) {
            cout<<i<<" ";
        }
    }
}

int main() {
    int num;
    cin>>num;
    bool arm = armstrong(num);
    if(arm){
        printFactors(num);
    } else {
        cout<<num<<" is not an Armstrong number";
    }
    return 0;
}