#include<iostream>
using namespace std;

void remove_dup(string s){

    if(s.length()==0){
        return;
    }

    if(s[0]==s[1]){
        remove_dup(s.substr(1));
    }
    else{
        cout<<s[0];
        remove_dup(s.substr(1));
    }
}
int main(){
    string s;
    cout<<"Insert string: ";
    cin>>s;

    cout<<"The version after removal of repeated letters are: ";
    remove_dup(s);
    return 0;
}