#include<iostream>
using namespace std;

int main(){
    
    int a,b;

    cout<<"Input two numbers: ";
    cin>>a>>b;

    char op;

    cout<<"Input operator: ";
    cin>>op;

    switch(op){

        case '+' :
        cout<<a + b<<endl;
        break;

        case '-' :
        cout<<a - b<<endl;
        break;

        case '*' :
        cout<<a*b<<endl;
        break;

        case '/' :
        cout<<a/b<<endl;
        break;

        default :
        cout<<" Invalid input";
    }
       return 0;
}