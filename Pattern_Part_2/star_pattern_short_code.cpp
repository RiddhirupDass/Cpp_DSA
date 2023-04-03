#include<iostream>
using namespace std;

int main(){

    int num, k=0;
    cout<<"Please input a value: ";
    cin>>num;

    for(int i=1; i<=num; i++){

        for(int j=1; j<=((num-i)+(2*i)-1); j++){

            (j<=(num-i))?cout<<"  ":cout<<"* ";
        }

        cout<<endl;
    }

    for(int i=num; i>=1; i--){

        for(int j=1; j<=((num-i)+(2*i)-1); j++){

            (j<=(num-i))?cout<<"  ":cout<<"* ";
        }

        cout<<endl;
    }

    return 0;
    }