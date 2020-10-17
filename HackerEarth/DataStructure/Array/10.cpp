#include<iostream>
#include<stack>
using namespace std;
 
int main(){
int N;
cin>>N;
string charges;
cin>>charges;
if(charges.size() == 1) cout<<charges<<endl;
else{
// its a question of stack
stack<char> st;
for(auto i:charges){
if(!st.empty() && st.top() == i) st.pop();
else st.push(i);
}
string result = "";
while(!st.empty()){
char c = st.top();
result += c;
st.pop();
}
cout<<result.size()<<endl;
for(int i = result.size() - 1; i >= 0; i--){
cout<<result[i];
}
cout<<endl;
}
return 0;
}