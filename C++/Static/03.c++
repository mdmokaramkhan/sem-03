// You are using GCC
#include<iostream>
using namespace std;

class IntegerManipulator {
    private:
        int num;
    public:
        void getNum() {
            cin>>num;
        };
        void noOfDigits() {
            int count = 0, tmp=num;
            while(tmp > 0){
                tmp /= 10;
                count++;
            }
            cout<<"Number of digits: "<<count<<endl;
        };
        void noOfOddDigits() {
            int digit, tmp = num, count = 0;
            while(tmp>0) {
                digit = tmp % 10;
                tmp /= 10;
                if (digit % 2 != 0){
                    count++;
                }
            }
            cout<<"Number of odd digits: "<< count;
        };
};

int main() {
    IntegerManipulator inj;
    inj.getNum();
    inj.noOfDigits();
    inj.noOfOddDigits();
    return 0;
}// You are using GCC
#include<iostream>
using namespace std;

class IntegerManipulator {
    private:
        int num;
    public:
        void getNum() {
            cin>>num;
        };
        void noOfDigits() {
            int count = 0, tmp=num;
            while(tmp > 0){
                tmp /= 10;
                count++;
            }
            cout<<"Number of digits: "<<count<<endl;
        };
        void noOfOddDigits() {
            int digit, tmp = num, count = 0;
            while(tmp>0) {
                digit = tmp % 10;
                tmp /= 10;
                if (digit % 2 != 0){
                    count++;
                }
            }
            cout<<"Number of odd digits: "<< count;
        };
};

int main() {
    IntegerManipulator inj;
    inj.getNum();
    inj.noOfDigits();
    inj.noOfOddDigits();
    return 0;
}