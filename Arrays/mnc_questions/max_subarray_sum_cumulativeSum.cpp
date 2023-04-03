//This code works under the technique of cumulative sum of an array.
//Time Complexity = O(n^2)

#include <iostream>
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

    int cuSum[n+1];
    cuSum[0]=0;
    int maxSum=INT_MIN;

    for(int i=1; i<=n; i++){
        cuSum[i]=arr[i-1]+cuSum[i-1];
    }
    
    for(int i=1; i<=n; i++){

        int sum=0;
        for(int j=0; j<i; j++){

            sum=cuSum[i]-cuSum[j];
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum;
    return 0;
}