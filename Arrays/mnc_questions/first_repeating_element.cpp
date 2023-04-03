#include<iostream>
#include "bits/stdc++.h"
using namespace std;
const int N = 1e6;
int indx[N];

int main(){

    int n;
    cout<<"Please input size: ";
    cin>>n;
    int arr[n];
    cout<<"Please input values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    for(int i=0; i<N; i++){

        indx[i]=-1;
    }

    int index=INT_MAX;
    for(int i=0; i<n; i++){

        if(indx[arr[i]]==-1){

            indx[arr[i]]=i;
        }

        else{
            index=min(index,indx[arr[i]]);
        }
    }
    cout<<index;
    return 0;
}