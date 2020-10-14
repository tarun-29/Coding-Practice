#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int x = 0, y=0, count;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int ans = 0; 
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        if(arr[i]+1 == arr[i+1]){
            x++;
        }
        else if(arr[i] == arr[i+1]){
            x++;
            y++;
        }
        else{
            if(x!=y){
                count = count + ((x*(x+1))/2);
            }
            x = 0;
            y = 0;
        }
    }
    cout<<count;
}
