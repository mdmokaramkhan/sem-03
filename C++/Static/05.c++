#include<iostream>
using namespace std;

void reverseNumber(int num) {
    int digit,tmp=num,reversed=0;
    while (tmp>0)
    {
        digit = tmp % 10;
        tmp /= 10;
        if (reversed == 0)
        {
            reversed += digit;
        }
        else
        {
            reversed *= 10;
            reversed += digit;
        }
    }
    cout<<reversed;
}

int main() {
    int num;
    cin>>num;
    reverseNumber(num);
    return 0;
}