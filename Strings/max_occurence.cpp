#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

    string s;
    cout<<"Input string: ";
    getline(cin, s);

    int arr[26];
    for(int i=0; i<26; i++){
        arr[i]=0;
    }
    for(int i=0; i<s.size(); i++){

        arr[s[i]-'a']++;
    }
    int index=1;
    for(int i=0; i<26; i++){
        if(arr[index]<arr[i]){
            index=i;
        }
    }
    char c='a'+index;
    cout<<"The most repeated element is: "<<c<<" and is repeated "<<arr[index]<<" times";
    return 0;

}