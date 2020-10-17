#include <bits/stdc++.h>

using namespace std;

int main()

{

    int test;

    cin>>test;

    for(int i=0; i<test; i++)

    {   int count=0;

        string str;

        int max=str.length();

        cin>>str;

        

        sort(str.begin(),str.end());

        

        for(int a=0; a<str.length(); a++)

        {

            if(str[a]+1==str[a+1])

            {

                count++;

            }

        }

        if(count+1==str.length())

        cout<<"YES"<<endl;

        else

        cout<<"NO"<<endl;

        

    }

    return 0;

}