//This code works under Kadane's Algorithm
//Time Complexity = O(n)

#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cout<<"Please input size: ";
    cin>>n;
    int arr[n];

    cout<<"Please input values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    int sum=0, maxsum=INT_MIN;

    for(int i=0; i<n; i++){

        sum+=arr[i];
        if(sum<0){

            sum=0;
        }
        maxsum=max(sum,maxsum);
    }

    cout<<maxsum;
    return 0;
}