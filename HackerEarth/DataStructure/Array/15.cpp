#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--){
        int h, r;
        int seen = 0;
        int height;
        int max = 0;
        cin>>h;
        cin>>r;
        for(int i=0; i<h; i++){
            cin>>height;
            if(height>max){
                max = height;
                seen++;
            }
        }

        cout<<r*seen<<endl;
    }
}