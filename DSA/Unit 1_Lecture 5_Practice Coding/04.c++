// You are using GCC
#include<iostream>
using namespace std;

int search(int arr[], int target, int size){
    for(int i=0; i<size; i++) {
        if(target == arr[i]){
            return i;
        }
    }
    return -1;
};

int main() {
    int N, d;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    cin>>d;
    int found = search(arr,d,N);
    if(found != -1) {
        cout<<"Element "<<d<<" is present at index "<<found;
    } else {
        cout<<"Element "<<d<<" is not present";
    }
    return 0;
}