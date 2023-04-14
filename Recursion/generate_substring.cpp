/*The dry run for this code is understandable through the following video: https://youtu.be/OZiTiLDZJ60 */

#include<iostream>
using namespace std;
#define MAX 1000

int substrings(string s, string output[]){
    if(s.length()==0){
        output[0]="";
        return 1;
    }

    int size_small=substrings(s.substr(1),output);
    for(int i=0; i<size_small;i++){
        output[size_small+i]=s[0]+output[i];
    }
    return (2*size_small);
}

int main(){
    string s, output[MAX];
    cout<<"Insert string: ";
    cin>>s;

    int n=substrings(s, output);

    cout<<"The substrings are: "<<endl;
    for(int i=0; i<n; i++){

        cout<<output[i]<<endl;
    }
    return 0;

}