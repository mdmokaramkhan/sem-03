#include<iostream>
#include<cctype>
using namespace std;

enum LetterType { vowel, consonant, invalid };

LetterType checkChar(char x) {
    x = tolower(x);
    if(x == 'a' || x =='e' || x == 'i' || x == 'o' || x == 'u') {
        return vowel;
    } else if (x >= 'a' && x <= 'z') {
        return consonant;
    } else {
        return invalid;
    }
}

int main () {
    char x;
    cout<<"Enter char: ";
    cin>>x;
    LetterType result = checkChar(x);
    switch(result) {
        case vowel:
            cout<<"vowel";
            break;
        case consonant:
            cout<<"consonant";
            break;
        default:
            cout<<"Invalid";
    }
    return 0;
}
