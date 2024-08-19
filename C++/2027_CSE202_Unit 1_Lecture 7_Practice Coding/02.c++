// You are using GCC
#include<iostream>
using namespace std;

class ComplexNumber {
    private:
        double real,imaginary;
    public:
        void getData(){
            cin>>real>>imaginary;
        }
        friend void multiply(ComplexNumber&, ComplexNumber&);
};

void multiply(ComplexNumber& x, ComplexNumber& y) {
    double a,b;
    a = x.real * y.real - x.imaginary * y.imaginary;
    b = x.real * y.imaginary + y.real * x.imaginary;
    cout<<a<<" + "<<b<<"i";
};

int main() {
    ComplexNumber obj1;
    ComplexNumber obj2;
    obj1.getData();
    obj2.getData();
    multiply(obj1, obj2);
    return 0;
}