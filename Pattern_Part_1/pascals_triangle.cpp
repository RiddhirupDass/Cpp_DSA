#include<iostream>
using namespace std;

int facto(int num){

    if(num==0){

        return 1;
    }

    int fact=1;

    for(int i=1; i<=num; i++){

        fact=(fact*i);
    }

    return fact;
}

void comb(int num1, int num2, int num3){

    int output=(num1/(num2*num3));

    (output==0)?cout<<"Please enter n >=r >=0":cout<<output;
}

int main(){

    int n;

    cout<<"Please input a number: ";
    cin>>n;

    for(int i=0; i<=n; i++){

        for(int j=0; j<=i; j++){

            comb(facto(i), facto(j), facto(i-j));
            cout<<" ";
        }

        cout<<endl;
    }

    return 0;
}