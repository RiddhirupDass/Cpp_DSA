#include<iostream>
#include<climits>
using namespace std;
int kadane(int n, int arr[]){


    int sum=0, maxsum=INT_MIN;
    for(int i=0; i<n; i++){

        sum+=arr[i];
        if(sum<0){

            sum=0;
        }
        maxsum=max(sum,maxsum);
    }
    return maxsum;
}
int main(){

    int n;
    cout<<"Please input size: ";
    cin>>n;
    int arr[n];

    cout<<"Please input values: ";
    for(int i=0; i<n; i++){

        cin>>arr[i];
    }

    int wrapsum=0, nonwrapsum=0;
    nonwrapsum=kadane(n, arr);
    int totalsum; 

    for(int i=0; i<n; i++){

        totalsum+=arr[i];
        arr[i]=-arr[i];
    }

    wrapsum=totalsum+kadane(n, arr);

    cout<<max(wrapsum, nonwrapsum);
    return 0;
}