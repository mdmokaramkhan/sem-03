// You are using GCC
#include<iostream>
using namespace std;

int main() {
    int n,m;
    
    // Array 1
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    
    // Array 2
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++) {
        cin>>arr2[i];
    }
    
    // Merging array
    int size = m+n;
    int merge[size];
    for(int i=0; i<size; i++) {
        if(i<n){
            merge[i] = arr[i];
        } else {
            merge[i] = arr2[i-n];
        }
    }
    
    // Sorting Array
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(merge[j] > merge[j+1]) {
                int tmp = merge[j];
                merge[j] = merge[j+1];
                merge[j+1] = tmp;
            }
        }
    }
    
    for(int i=0; i<size; i++) {
        cout<<merge[i]<<" ";
    }
    return 0;
}