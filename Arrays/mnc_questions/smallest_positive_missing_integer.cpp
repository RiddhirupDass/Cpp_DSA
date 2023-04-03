#include<iostream>
using namespace std;
int const N = 1e6 +2;
int main(){

    int n;
    cout<<"please input size: ";
    cin>>n;
    int arr[2*n];

    cout<<"Please input values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    bool check[N];
    for(int i=0; i<N; i++){

        check[i]=false;
    }

    for(int i=0; i<n; i++){

        if(arr[i]<0){

            continue;
        }

        else{

            check[arr[i]]=true;
        }

    }

    for(int i=0; i<N; i++){

        if(check[i]==true){
            continue;
        }
        else{

            cout<<"Smallest missing integer is: "<<i;
            break;
        }
    }

    return 0;
}