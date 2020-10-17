// #include<iostream>

// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n, k;
//         int max = 0;
//         int ans;
//         cin>>n>>k;
//         long long alice[n];
//         long long bob[n];
//         for(int i=0; i<n; i++){
//             cout<<"enter alice value";
//             cin>>alice[i];
            
//         }
//         for(int i=0; i<n; i++){
//             cin>>ans;
//             if(max<=ans){
//                 max = ans;
//             }
//         }
//         // cout<<max<<endl;
//         for(int i=0; i<n; i++){
//             ans  = (max+1) - alice[i];
//             if(ans<0){
//                 ans = 0;
//             }
//             cout<<ans<<endl;
//             ans = ans + (ans * k);
//         }
//         // cout<<ans<<endl;
//     }
// }

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef unsigned long long int ull;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    ll n,k,r = 0,r1 = 0;
    cin>>n>>k;
    ll a[n],b[n];
    for (ll i = 0; i < n; ++i)
        cin>>a[i];
    for (ll i = 0; i < n; ++i)
        cin>>b[i];
    sort(b, b+n);
    for (ll i = 0; i < n; i++){
        if(a[i] < b[n-1] + 1){
            r = ((b[n-1]+1)-a[i]) * k;
            r1 += r;
        }
    }

    cout<<r1<<endl;
    }
}