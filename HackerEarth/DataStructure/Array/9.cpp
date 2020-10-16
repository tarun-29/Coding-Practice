#include<iostream>

// using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long s;
        long long sum = 0;
        long long maxi =0;
        for(int i=0; i<n; i++){
            cin>>n;
            sum = sum+s;
            if(s>maxi){
                maxi = s;
            }
        }
        if(maxi<(sum-maxi)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}
