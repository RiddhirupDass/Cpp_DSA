#include<iostream>
using namespace std;

int fib(int n){

    int t1= 0;
    int t2=1;
    int nextTerm;

    for(int i=1; i<=n; i++){

        cout<<t1<<" ";

        nextTerm=t1+t2;

        t1=t2;
        t2=nextTerm;

    }
}
int main(){

    int num;
    cout<<"Please input a number: ";
    cin>>num;

    fib(num);

    return 0;
}