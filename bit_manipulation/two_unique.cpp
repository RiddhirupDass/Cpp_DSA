#include<iostream>
using namespace std;

int getbit(int n){
    int pos=0;
    int ref=1;
    while((n & (ref))!=1){
        ref<<1;
        pos++;
    }
    return pos;
}
int getnum(int n, int pos){
    return (n & 1<<pos);
}
void unique_num(int arr[], int n){
    int xorsum=0;
    for(int i=0; i<n; i++){
        xorsum=(xorsum)^(arr[i]);
    }

    int pos= getbit(xorsum);
    int newxor=0;
    for(int i=0; i<n; i++){
        if(getnum(arr[i], pos)){
            newxor=(newxor)^(arr[i]);
        }
    }
    int num1=newxor;
    int num2=(xorsum)^(newxor);
    cout<<num1<<" & "<<num2;
}
int main(){
    int n;
    cout<<"Please input size: ";
    cin>>n;
    int arr[n];
    cout<<"Please input values: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The unique values are: ";
    unique_num(arr, n);
    return 0;
}