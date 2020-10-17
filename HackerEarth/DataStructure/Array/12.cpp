#include<iostream>

using namespace std;

int main(){
    long long int n;
    int group = 0;
    cin>>n;
    int val;
    int max = 0;
    for (int i=0; i<n; i++){
        cin>>val;
        if(val>=max){
            max = val;
        }
        else{
            group++;
            max = val;
        }
    }
    cout<<group+1;
}