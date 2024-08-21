// You are using GCC
#include<iostream>
using namespace std;

int main() {
    // First Array
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    
    // Second Array
    int M;
    cin>>M;
    int arr2[M];
    for(int i=0; i<M; i++) {
        cin>>arr2[i];
    }
    
    // Merge
    int size = N+M;
    int merged[size];
    
    // Merging
    for(int i=0; i<size; i++) {
        if(i<N){
            merged[i] = arr[i];
        } else {
            merged[i] = arr2[i-N];
        }
    }
    
    // Sorting
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++) {
            if(merged[i] < merged[j]){
                int tmp = merged[i];
                merged[i] = merged[j];
                merged[j] = tmp;
            }
        }
    }
    // Eliminating Duplicates
    // int newSize = 1;
    // for(int i=1; i<size; i++) {
    //     if(merged[i] != merged[i-1]) {
    //         merged[newSize] = merged[i];
    //         newSize++;
    //     }
    // }
    
    for(int i=0; i<size; i++) {
        if(i==0 || merged[i] != merged[i-1]) {
           cout<<merged[i]<<" ";
        }
    }
    
    return 0;
}