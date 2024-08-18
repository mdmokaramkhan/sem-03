// You are using GCC
#include<iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    int arr[N];
    for(int i=0; i<N; i++) {
        cin>>arr[i];
    }
    int M;
    cin>>M;
    int arr2[M];
    for(int i=0; i<M; i++) {
        cin>>arr2[i];
    }
    
    int sorted_merged[N+M];
    
    // Merge
    for(int i=0; i<N+M; i++) {
        if(i<N) {
            sorted_merged[i] = arr[i];
        } else {
            sorted_merged[i] = arr2[i-N];
        }
    }
    
    // Sort
    for(int i=0; i<N+M; i++) {
        for(int j=0; j<N+M; j++) {
            if(sorted_merged[i] < sorted_merged[j]){
                int tmp = sorted_merged[i];
                sorted_merged[i] = sorted_merged[j];
                sorted_merged[j] = tmp;
            }
        }
    }
    
    for(int i=0; i<N+M; i++) {
        cout<<sorted_merged[i]<<" ";
        if(i==N-1) cout<<endl;
    }
    return 0;
}