// You are using GCC
#include<iostream>
#include<string>
using namespace std;

class banking {
    string holder_name;
    int account_no;
    double balance = 0;
    
    public:
    
        void getData(){
            getline(cin,holder_name);
            cin>>account_no;
            cin>>balance;
        }
        
        void setName(string name){
            holder_name = name;
        }
        
        void setAccountNum(int acc_no) {
            account_no = acc_no;
        }
        
        void deposite(int amount) {
            balance += amount;
            cout<<"Amount deposited successfully."<<endl;
        }
        
        void withdraw(int amount) {
            if(balance >= amount) {
                balance -= amount;
                cout<<"Amount withdrawn successfully."<<endl;
            } else {
                cout<<"Insufficient balance. Withdrawal failed."<<endl;
            }
        }
        
        void showAccDetails() {
            cout<<"Account details:"<<endl;
            cout<<"Account holder's name: "<<holder_name<<endl;
            cout<<"Account number: "<<account_no<<endl;
            cout<<"Balance: "<<balance<<".00";
        }
};

union AccountData {
    string holder_name;
    int account_no;
    double balance;
};

int main(){
    banking a;
    int amt1, amt2;
    a.getData();
    cin>>amt1;
    cin>>amt2;
    a.deposite(amt1);
    a.withdraw(amt2);
    a.showAccDetails();
    return 0;
}