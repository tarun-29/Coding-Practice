#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int l = 0, r = 0, x = 0, y = 0, z = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            l++;
        }
        else
        {
            r++;
        }
    }
    if (l != r)
    {
        cout << "0";
    }
    else
    {
        l = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                l++;
            }
            else
            {
                l--;
            }
            if (l < y)
            {
                y = l;
                x = i + 1;
            }
        }
        reverse(s.begin(), s.begin() + x);
        reverse(s.begin() + x, s.end());
        reverse(s.begin(), s.end());

        l = 0;

        for (int i = 0; i < s.length(); i++)

        {

            if (s[i] == '(')

                l++;

            else

                l--;

            if (l == 0)
            {
                z++;
            }
        }
        cout<<z;
    }

}
