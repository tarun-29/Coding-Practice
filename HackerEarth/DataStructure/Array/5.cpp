#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int ans = 0;
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j]+1 == arr[j+1])
            {
                if (arr[j]== arr[j - 1]+1)
                {
                    ans = ans + 3;
                    cout<<"for 3: "<<"\t";
                    cout<<ans<<endl;
                }
                else
                {
                    ans = ans + 2;
                    cout<<"for 2: "<<"\t";
                    cout<<ans<<endl;
                }
            }
            else
            {
                break;
            }
        }
    }
    cout<<ans;
}