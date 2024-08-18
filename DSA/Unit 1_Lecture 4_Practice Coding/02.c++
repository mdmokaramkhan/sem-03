// You are using GCC
#include<iostream>
using namespace std;

void sort(int arr[], int size) {
    
}

int main() {
    int N,M;
    cin>>N;
    int arr1[N];
    for(int i=0; i<N; i++) {
        cin>>arr1[i];
    };
    cin>>M;
    int arr2[M];
    for(int i=0; i<M; i++) {
        cin>>arr2[i];
    };
    int MN = N+M;
    int merged[MN];
    for(int i=0; i<N+M; i++){
        if(i<N){
            merged[i] = arr1[i];
        }else{
            merged[i] = arr2[i-N];
        }
    }
    
    // sorting array
    for(int i=0; i<MN; i++) {
        for(int j=0; j<MN; j++){
            if(merged[i] < merged[j]){
                int temp = merged[i];
                merged[i] = merged[j];
                merged[j] = temp;
            }
        }
    }
    
    // remove duplicate
    for(int i=0; i<MN; i++) {
        if(merged[i] == merged[i+1]){
            for(int j=i+1; j<MN; j++){
                merged[j] = merged[j+1];
            }
            MN--;
        }
    }
    
    for(int i=0; i<MN; i++) {
        cout<<merged[i]<<" ";
    }
}


