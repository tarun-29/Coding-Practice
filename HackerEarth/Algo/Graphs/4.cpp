#include<iostream>
#include<set>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, a, b;
        set <int, greater <int> > s1;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a>>b;
            s1.insert(a);
            s1.insert(b);
        }
        cout<<s1.size()<<endl;
    }
}