#include<iostream>
#include<math.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int q;
    long long arr[n];
    int L, R;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long long int i, k = 0;
    cin>>q;
    long long ans[q];
    int j=0;
    int index= 0;
    while(j<n){
        cin>>L>>R;
        int left, right ;
        for (i = 0; i < j; i++)
            left = 10 * left + arr[i];
        for (i = j; i < n; i++)
            right = 10 * right + arr[i];
        int total = left + right;
        if(total%2==0 && total%3==0 && total%5==0){
            if(L<=j>=R){
                ans[index++] = 1;
            }
        }
        else{
            ans[index++] = 0;
        }
        j++;
    }
    for(j=0; j<q; j++){
        cout<<ans[j]<<endl;
    }
}


// correct python code not written by me

// n = int(input())
// a = list(map(int,input().split()))

// tmp_sum = sum(a)
// lucky = []
// if n == 1:
//     lucky.append(1)
// else:
//     for i in range(n):
//         if i == 0:
//             lucky.append(0)
//         else:
//             lucky.append(lucky[i-1])
//         #print(lucky)
//         if (tmp_sum - a[i])%3 == 0:
//             if i == 0:
//                 if a[n-1] == 0:
//                     lucky[i]+=1
//             elif i == n-1:
//                 if a[n-2] == 0:
//                     lucky[i]+=1
//             else:
//                 if (a[i-1]+a[n-1])%10 == 0:
//                     lucky[i]+=1
// lucky.insert(0,0)   
// q = int(input())
// for _ in range(q):
//     l,r = map(int,input().split())
//     print(lucky[r] - lucky[l-1])