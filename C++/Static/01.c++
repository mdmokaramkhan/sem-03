// You are using GCC
#include<iostream>
using namespace std;

class AddAmount {
    int amt;
    
    public:
        void putData() {
            cout<<amt;
        };
        void addAmount(){
            amt += 50;
        };
        void getData(){
            cin>>amt;
        };
};

int main() {
    AddAmount obj;
    obj.getData();
    obj.addAmount();
    obj.putData();
}