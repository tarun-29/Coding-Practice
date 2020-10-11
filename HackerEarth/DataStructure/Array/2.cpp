// #include <iostream>
// #include<algorithm>

// using namespace std;


// int main()
// {
//     int n;
//     int number = 1;
//     cin >> n;
//     int ans;
//     int arr[n];
//     for (int i = 0; i < n-1; i++)
//     {
//         cin>>arr[i];
//     }
//     sort(arr, arr+n-1);
    
//     for(int i=0; i<n-1; i++){
//         // cout<<number<<"\t"<<arr[i]<<endl;
//         if(number != arr[i]){
//             cout<<number;
//             return 0;
//         }
//         // cout<<number;
//         number = number + 2;
//     }
//     cout<<number;
// }
#include <iostream>
#include<algorithm>
#include <numeric> 

using namespace std;

int main()
{
    long long int n;
    int number = 1;
    cin >> n;
    int ans;
    long long int sum = 0;
    long long int arr[n-1];
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    sum = accumulate(arr, arr+(n-1), sum);
    cout<<(n*n)-sum;
}