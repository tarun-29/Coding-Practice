
#include<iostream>
#include<vector>
#include<algorithm>
#define ld long double
// #define inf -2
using namespace std;
int main(){
   int c1 = 0;
   int c2 = 0;
   int c3 = 0;
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int l=0,r=-1;
   int ans =0;
   vector<int>temp(3);
   while(l<n){
       while(r<n-1){
           r++;
           if(s[r]=='a'){
               c1++;
           }else if(s[r]=='b'){
               c2++;
           }else{
               c3++;
           }
           temp[0] = c1;
           temp[1] = c2;
           temp[2] = c3;
           cout<<"Berfore";
           cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<" "<<endl;
           sort(temp.begin(),temp.end());
           cout<<"After";
            cout<<temp[0]<<" "<<temp[1]<<" "<<temp[2]<<" "<<endl;
           int mi = temp[0]+temp[1];
           if(mi>k){
               break;
           }
           //cout<<l<<" "<<r<<" "<<c1<<" "<<c2<<"\n";
           ans = max(ans,c1+c2+c3);
       }
       if(s[l]=='a'){
           c1--;
       }else if(s[l]=='b'){
           c2--;
       }else{
           c3--;
       }
       l++;
   }
   cout<<"ans";
   cout<<ans;
}