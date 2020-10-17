#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000000007
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;ll sum=0;
        ll arr[n];
        for(ll i=0;i<n;i++)
        {cin>>arr[i];sum+=arr[i];} 
        ll q;cin>>q;
        ll left[q];ll right[q];
        for(ll i=0;i<q;i++)
        {cin>>left[i];left[i]--;}
        for(ll i=0;i<q;i++)
        {cin>>right[i];right[i]--;}
        for(ll i=0;i<q;i++)
        {
            ll ans=0;
            ll len=right[i]-left[i]+1;
            ans=(ans+(((len/n)%mx)*sum)%mx)%mx;
            ll le=left[i]%n;
            ll ri=right[i]%n;
            while(le!=ri)
            {
                ans=(ans+(arr[le]))%mx;
                le=(le+1)%n;
            }
            cout<<(ans+arr[ri])%mx<<" ";
        }
        cout<<endl;
    }
	
}