#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cout<<"Insert string: ";
    getline(cin, s);

    sort(s.begin(), s.end(), less<int>());
    cout<<"The largest number is: "<<s;

    return 0;
}