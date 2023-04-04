#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    map<int,bool> mp;
    for (int i = 0; i<3; ++i)
    {
        for (int j = 0; j<3; ++j){
            cin>>arr[i][j];
        }
    }
    int n;
    cin>>n;
    int x;
    while (n--){
        cin>>x;
        mp[x]=true;
    }
    for (int i = 0; i<3; ++i){
        bool all = true;
        for (int j = 0; j<3; ++j){
            if (!mp[arr[i][j]]){
                all = false;
                break;
            }
        }
        if (all){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    for (int j = 0; j<3; ++j){
        bool all = true;
        for (int i =0; i<3; ++i){
            if (!mp[arr[i][j]]){
                all = false;
                break;
            }
        }
        if (all){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    bool all = true;
    for (int i = 0; i<3; ++i){
        if (!mp[arr[i][i]]){
            all = false;
            break;
        }
    }
    if (all){
        cout<<"Yes"<<endl;
        return 0;
    }
    all = true;
    for (int i = 0; i<3; ++i){
        if (!mp[arr[i][3-i-1]]){
            all = false;
            break;
        }
    }
    if (all){
        cout<<"Yes"<<endl;
        return 0;
    }
    cout<<"No"<<endl;
}
