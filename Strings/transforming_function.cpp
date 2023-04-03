#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cout<<"Please input string: ";
    getline(cin,s);

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<"Upper Output: "<<s<<endl;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<"Lower Output: "<<s;
    return 0;
}