#include<iostream>
#include <string>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cout<<"Input string: ";
    cin>>s;

    for(int i=0; i<=s.length(); i++){

        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<"Output is: "<<s<<endl;
    return 0;
}