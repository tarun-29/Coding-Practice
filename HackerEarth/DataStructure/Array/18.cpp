// NOT DONE BY ME



#include<bits/stdc++.h>
using namespace std;
unsigned long long NotinRange (unsigned long long* R,unsigned long long* L,unsigned long long n ) {

// Write your code here

sort(R, R+n);
sort(L, L+n);
unsigned long long sum=0;

unsigned long long i;

for(i=0;i<n;++i)

{

if(i==0)

{

sum += ((L[i]-1)*(L[i]))/2;

}

if(i>0)

{

if(L[i]<=R[i-1])

L[i]=R[i-1]+1;


 

if(L[i]!=(R[i-1]+1))

sum += ((L[i]-R[i-1]-1)*(L[i]+R[i-1]))/2;

}

}

sum += ((1000000-R[i-1])*(1000000+R[i-1]+1))/2;

return(sum);

}


 

int main() {

 

ios::sync_with_stdio(0);

cin.tie(0);

unsigned long long n;

cin>>n;

unsigned long long L[n],R[n];

for(unsigned long long i=0; i<n; i++)

  cin>>L[i]>>R[i];

 

unsigned long long out_ = NotinRange(R, L, n);

cout<<out_;

}