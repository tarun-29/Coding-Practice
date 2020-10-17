#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int call[n];
    int ideal[n];
    for(int i=0; i<n; i++){
        cin>>call[i];
    }
    for(int i=0; i<n; i++){
        cin>>ideal[i];
    }
    int i,count=0,min,j;
    for(i=0;i<n;){
    //Check if the current values match and only when they match you can go to the next pair of numbers of numbers
        if(call[i]==ideal[i]){
            i++;
        }
        else{
            count++;
            min=call[i]; // store the current element in a variable so that we can put it to the back of the array;
            for(j=i;j<n;j++){
                call[j]=call[j+1]; // shift all the array numbers to the left side e.g 3 2 1 becomes 2 1 0;
            }
            call[n-1]=min; // and put current element to the back of the array
        }
    }
    cout<<count+n;
}

// #include<iostream>

// using namespace std;

// int check(int arr[], int arr1[], int n){
//     for(int i=0; i<n; i++){
//         if(arr[i]!=arr1[i]){
//             return 0;
//         }
//     }
//     return 1;
// }

// int main(){
//     int n;
//     cin>>n;
//     int call[n];
//     int ideal[n];
//     for(int i=0; i<n; i++){
//         cin>>call[i];
//     }
//     for(int i=0; i<n; i++){
//         cin>>ideal[i];
//     }
//     int time = 0;
//     while(1){
//         int i,temp ;
//         for(i=0; i<n-1; i++){
//             if(i==0){
//                 temp = call[0];
//             }
//             call[i] = call[i+1];
//         }
//         call[i] = temp;    
//         int ans = check(call,ideal, n);
//         time = time +1;
//         if(ans == 1){
//             break;
//         }
//     }
//     time = time + n;
//     cout<<time;
// }