// You are using GCC
#include<iostream>
using namespace std;

class Fraction {
    private:
        int numerator, denominator;
    public:
        void getData(){
            cin>>numerator>>denominator;
        }
        friend void addMixedFraction(Fraction&, Fraction&);
};

void addMixedFraction(Fraction& x, Fraction& y) {
    if (x.denominator == y.denominator){
        cout<<x.numerator+y.numerator<<"/"<<x.denominator;
    } else {
        int a = x.numerator * y.denominator;
        int b = y.numerator * x.denominator;
        int c= x.denominator * y.denominator;
        cout<<a+b<<"/"<<c;
    }
};

int main() {
    Fraction x;
    Fraction y;
    x.getData();
    y.getData();
    addMixedFraction(x,y);
}