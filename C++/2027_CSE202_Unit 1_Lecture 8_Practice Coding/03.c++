// You are using GCC
#include<iostream>
using namespace std;

void rotate(int& a, int& b, int& c) {
    int tmp = a;
    a = b;
    b = c;
    c = tmp;
}

int& getSmallest(int& a, int& b, int& c) {
    if(a<b && a<c){
        return a;
    } else if(b<a && b<c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int x,y,z;
    cin>>x>>y>>z;
    cout<<"Before Rotation: x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
    rotate(x,y,z);
    cout<<"After Rotation: x: "<<x<<" y: "<<y<<" z: "<<z<<endl;
    cout<<"The smallest value among x, y, z: "<<getSmallest(x,y,z);
    return 0;
}