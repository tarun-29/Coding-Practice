#include<iostream>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n]
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long int ans[n];
    for(int j=0; j<n; j++){
        for(int k=j+1; k<n; k++){
            if(arr[j]<arr[k]){
                break;
            }
            else {
                if(k==n-1){
                    cout<<arr[j]<<" "
                }
            }
        }
    }
    cout<<arr[n-1]
}