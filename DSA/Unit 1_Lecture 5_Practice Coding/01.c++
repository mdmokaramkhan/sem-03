// You are using GCC
#include<iostream>
using namespace std;

int main() {
    int N,target,count=0;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    cin>>target;
    for(int i=0; i<N; i++) {
        if(arr[i] == target) {
            count++;
        }
    }
    cout<<count;
    return 0;
}