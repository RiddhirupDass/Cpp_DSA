#include<iostream>
using namespace std;

int pow(int n, int p){

    if(p==0){
        return 1;
    }
    return n*pow(n, p-1);
}
int main(){
    int n, p;
    cout<<"Please input number: ";
    cin>>n;
    cout<<"Please input power: ";
    cin>>p;
    cout<<pow(n, p);
    return 0;
}