#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    bool solved = false;
    for (int i = 0; i<n; ++i)
    {
        cin>>arr[i];
        if (!solved && arr[i][0]=='O' && arr[i][1]=='O')
        {
            solved = true;
            arr[i][0] = '+';
            arr[i][1] = '+';
        }
        else if (!solved && arr[i][3]=='O' && arr[i][4]=='O')
        {
            solved = true;
            arr[i][3] = '+';
            arr[i][4] = '+';
        }
    }
    if (solved)
    {
        cout<<"YES"<<endl;
        for (string s:arr)
        {
            cout<<s<<endl;
        }
    }else {
        cout<<"NO"<<endl;
    }
}
