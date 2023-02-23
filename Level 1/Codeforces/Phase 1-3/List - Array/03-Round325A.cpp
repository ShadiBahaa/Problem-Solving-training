#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i<n; ++i)
    {
        cin>>arr[i];
    }
    int i = 0;
    int cnt = 0;
    bool brk = false;
    while (arr[i]==0)i++;
    for (; i<n ; ++i)
    {
        if (arr[i]==1)
        {
            cnt++;
        }
        else
        {
            int tmp = 0;
            while (i<n && arr[i]==0)
            {
                i++;
                tmp++;
            }
            i--;
            if (tmp==1 && i!=n-1)cnt++;
        }
    }
    cout<<cnt<<endl;
}
