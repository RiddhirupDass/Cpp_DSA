/*The Dry run for this code is not understandable*/

#include<iostream>
using namespace std;

void substring(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code=ch;
    substring(s.substr(1),ans);
    substring(s.substr(1),ans+ch);
    substring(s.substr(1),ans+to_string(code));
}

int main(){
    string s;
    cout<<"Insert string: ";
    cin>>s;

    cout<<"The substrings are: "<<endl;
    substring(s, "");
    return 0;
}