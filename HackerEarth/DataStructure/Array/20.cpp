#include<bits/stdc++.h>
using namespace std;
 
#define M 1000000007
long long func(long long *sum,long long X,long long N)
{
    return (sum[X%N]+(((X/N)%M)*sum[N])%M)%M;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        long long arr[N+1];
        for(int i=1;i<=N;i++)
            cin>>arr[i];
        int Q;
        cin>>Q;
        long long L[Q],R[Q];
        for(int i=0;i<Q;i++)
            cin>>L[i];
        for(int i=0;i<Q;i++)
            cin>>R[i];
        long long sum[N+1];
        sum[0]=0;
        for(int i=1;i<=N;i++)
            sum[i]=(sum[i-1]+arr[i])%M;
        for(int i=0;i<Q;i++)
            cout<<(func(sum,R[i],N)-func(sum,L[i]-1,N)+M)%M<<" ";
        cout<<endl;
    }
    
}