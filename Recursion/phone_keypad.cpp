#include<iostream>
using namespace std;
#define MAX 1000
string comb[]={"", "./", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

int phone_keypad(string s, string output[]){

    if(s.length()==0){
    output[0]="";
    return 1;
    }
    int small_size=phone_keypad(s.substr(1), output);
    char ch=s[0];
    string temp[MAX];
    int k=0;
    string code = comb[ch-'0'];
    for(int i=0; i<small_size; i++){
        for(int j=0; j<code.length(); j++){
            temp[k]=code[j]+output[i];
            k++;
        }
    }
    for(int i=0; i<k; i++){
        output[i]=temp[i];
    }
    return (small_size*code.length());
}

int main(){
    string s;
    string output[MAX];
    cout<<"Insert the code: ";
    cin>>s;

    int n= phone_keypad(s, output);
    cout<<"The possible combinations are: "<<endl;
    for(int i=0; i<n; i++){
        cout<<output[i]<<endl;
    }
    return 0;
}