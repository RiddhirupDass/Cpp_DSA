#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;

    cout<<"Put three numbers: "<<endl;
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){

            cout<<num1<<" is greater";
        }
        else{
            cout<<num3<<" is greater";
        }
       
    }

    else{
        if(num2>num3){
            cout<<num2<<" is greatest";
        }

        else{
            cout<<num3<<" is greatest";

        }
    
    }

    return 0;
}