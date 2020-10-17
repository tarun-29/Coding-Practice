#include<iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,c=0,ans=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
        c++;
        if(ans<c){
            ans=c;
        }
        }
        else{
            c=0;
        }
    }
    if(ans==0){
        ans=-1;
    }
    cout<<ans<<"\n";
    }
}