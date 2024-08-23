// You are using GCC
#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;
    string arr[n];
    string target;
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cin>>target;
    int found = 0;
    for(int i=0; i<n; i++) {
        if(target == arr[i]) {
            found = i;
        }
    }
    if(found > 0) {
        cout<<found; 
    } else {
        cout<<"Target is not found in the array";
    }
    return 0;
}