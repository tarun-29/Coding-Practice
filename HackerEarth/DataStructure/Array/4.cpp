#include <iostream>

using namespace std;

int main()
{
    long long int t, no;
    cin >> t;
    while (t--)
    {
        long long int n, k, ans;
        cin >> n >> k;
        long long int min = 1000000;
        for (int i = 0; i < n; i++)
        {
            cin >> no;
            if (min >= no)
            {
                min = no;
            }
        }
        if(k<min){
            ans = 0;
        }else{
        ans = k - min;
        }
        if (ans < 0)
        {
            break;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
    return 0;
}
