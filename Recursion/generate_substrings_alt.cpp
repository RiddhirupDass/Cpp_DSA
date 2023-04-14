/*The dry run for this code is not understandable*/

#include<iostream>
using namespace std;

void substrings(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    substrings(s.substr(1),ans);
    substrings(s.substr(1),ans+ch);
}
int main(){
    string s;
    cout<<"Insert string: ";
    cin>>s;

    cout<<"The substrings are: "<<endl;
    substrings(s, "");
    return 0;
}

    