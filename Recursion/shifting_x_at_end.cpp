#include <iostream>
using namespace std;

string shift_x(string s){

    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string ans= shift_x(s.substr(1));

    if(ch=='x'){
        return (ans+ch);
    }
    else{
        return (ch+ans);
    }
}

int main(){

    string s, a;
    cout<<"Insert string: ";
    cin>>s;

    cout<<"The version after shifting 'x' at the end is: ";
    a=shift_x(s);
    cout<<a;
    return 0;
}