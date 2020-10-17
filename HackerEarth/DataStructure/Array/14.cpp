#include<iostream>
using namespace std;

int main() {

int t;

cin >> t;

while(t--) {

int n, p, q, r, count=0;

cin >> n >> p >> q >> r;

for(int i=1; i<=n; i++) {

if((i%p==0) && (i%q!=0) && (i%r!=0)){

count++;

}

else if((i%p!=0) && (i%q!=0) && (i%r==0)) {

count++;

}

else if((i%p!=0) && (i%q==0) && (i%r!=0)) {

count++;

}

}

cout << count << "\n";

}

return 0;

}