#include <iostream>

using namespace std;

typedef long long int ll;

int main()

{

    ll n, i, count = 0;

    cin >> n;

    ll arr[n];

    for (i = 0; i < n; i++)

        cin >> arr[i];

    sort(arr, arr + n);

    while (arr[n - 1] != 0)

    {

        for (i = 0; i < n; i++)

        {

            if (arr[i] % 2 != 0)

            {

                arr[i]--;

                count++;
            }
        }

        for (i = 0; i < n; i++)

            arr[i] /= 2;

        count++;
    }

    cout << (count - 1) << endl;

    return 0;
}