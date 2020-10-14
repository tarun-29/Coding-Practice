#include<iostream>
#include <math.h>
#define MOD 1000000007

using namespace std;
 
int main() {
    int tst;
    cin>>tst;
    while (tst--) {
        int N, i;
        cin>>N;
        unsigned long long ans=0;
        unsigned long long val = pow(2,N-1);
        
        for (i=0; i<N; i++) {
            unsigned long long input;
            cin>>input;
            // scanf("%llu", &input);
            if (N<64 && input >= val) {
                ans = (ans+(input%MOD))%MOD;
            }
        }
        
        cout<<ans<<endl;
    }
}