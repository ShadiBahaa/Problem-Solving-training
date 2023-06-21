# String 
## 1- Round 102 B:
Problem link: https://codeforces.com/problemset/problem/143/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int index = s.find('.');
    bool fraction = index!=string::npos;
    bool neg = s[0]=='-';
    string em = "";
    string tmp = "";
    if (fraction)
    {
        int i = index - 1;

        for (; i>=neg; --i)
        {
            em += s[i];
            tmp += s[i];
            if (em.size()%3==0 && i!=neg)
            {
                tmp += ',';
            }
        }
        reverse(tmp.begin(),tmp.end());
        if (neg)cout<<"(";
        cout<<"$"<<tmp<<".";
        i = index + 1;
        int cnt = 0;
        string flt;
        for (; i<s.size(); ++i)
        {
            cnt++;
            if (cnt==3)break;
            flt += s[i];
        }
        while (flt.size()<2)flt += '0';
        cout<<flt;
        if (neg) cout<<")";
        cout<<endl;
    }
    else
    {
        for (int i = s.size()-1; i>=neg; --i)
        {
            em += s[i];
            tmp += s[i];
            if (em.size()%3==0 && i!=neg)
            {
                tmp += ',';
            }
        }
        reverse(tmp.begin(),tmp.end());
        if (neg)cout<<"(";
        cout<<"$"<<tmp<<".";
        cout<<"00";
        if (neg)cout<<")";
        cout<<endl;
    }
}
```
## 2- Round 156 B:
Problem link: https://codeforces.com/problemset/problem/255/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int> mp;
    for (char c:s){
        mp[c]++;
    }
    if (mp['x']>mp['y']){
        for (int i = 0; i<(mp['x']-mp['y']); ++i)cout<<'x';
    }else {
        for (int i = 0; i<(mp['y']-mp['x']); ++i)cout<<'y';
    }
    cout<<endl;
}
```
