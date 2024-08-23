// You are using GCC
#include<iostream>
#include<string>
using namespace std;

int main() {
    string sen;
    string word;
    getline(cin,sen);
    getline(cin,word);
    int sizeOfWord = word.size();
    int count = 0;
    int found = 0;
    for(int i=0; i<sen.size(); i++) {
        if(sizeOfWord-1 == count){
            found = 1;
            break;
        }
        if(sen[i] == word[count]){
           count += 1;
        } else {
            count = 0;
        }
    }
    
    found ? cout<<"The word '"<<word<<"' is present in the given sentence." : cout<<"The word '"<<word<<"' is not present in the given sentence.";
    return 0;
}
