#include<iostream>
#include<math.h>

using namespace std;

int main(){
    
    int n;
    int sum=0;
    cout<<"Please input a number: ";
    cin>>n;

    int originaln=n;

    while(n>0){

       sum= sum + pow(n%10, 3);
        n=n/10;
    }

    if(originaln==sum){

        cout<<sum<<endl;
        cout<<"It is an armstrong number";
    }

    else{
        cout<<"It is not an armstrong number.";
    }
         return 0;
}