// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    int num;
    cin>>num;
    int arr[10] = {};
    while(num>0){
        int digit = num % 10;
        num /= 10;
        arr[digit] += 1;
    }
    for(int i=0; i<10; i++) {
        if(arr[i] != 0){
            cout<<"Digit "<<i<<": "<<setw(2)<<arr[i]<<" times"<<endl;
        }
    }
    return 0;
}