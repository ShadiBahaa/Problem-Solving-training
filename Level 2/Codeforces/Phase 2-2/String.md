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
## 3- Round 239 B:
Problem link: https://codeforces.com/problemset/problem/408/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> mp1;
    map<char,int> mp2;
    string n,m;
    cin>>n>>m;
    int ans = 0;
    for (char c:n)mp1[c]++;
    for (char c:m)mp2[c]++;
    for (int i = 0; i<26; ++i)
    {
        if (mp1[i+'a'] && mp2[i+'a'])ans += min(mp1[i+'a'],mp2[i+'a']);
        else if (!mp1[i+'a'] && mp2[i+'a'])
        {
            ans = 0;
            break;
        }
    }
    if (ans==0)cout<<-1<<endl;
    else cout<<ans<<endl;
}
```
## 4- Round 309 B:
Problem link: https://codeforces.com/problemset/problem/554/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<string,int> mp;
    for (int i = 0; i<n; ++i){
        string s;
        cin>>s;
        mp[s]++;
    }
    int ans = 0;
    for (pair<string,int> p:mp)ans = max(ans,p.second);
    cout<<ans<<endl;
}
```
## 5- Round 327 B:
Problem link: https://codeforces.com/problemset/problem/591/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    map<char,char> mp;
    for (char i = 'a'; i<='z'; ++i)
    {
        mp[i] = i;
    }
    while (m--)
    {
        char x,y;
        cin>>x>>y;
        for (char i = 'a'; i<='z'; ++i)
        {
            if (mp[i]==x)mp[i] = y;
            else if (mp[i]==y)mp[i] = x;
        }
    }
    for (char &c:s)
    {
        c = mp[c];
    }
    cout<<s<<endl;
}
```
## 6- Round 107 B:
Problem link: https://codeforces.com/problemset/problem/151/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,vector<string>> girls;
    map<int,vector<string>> taxis;
    map<int,vector<string>> pizzas;
    int girl = 0;
    int taxi = 0;
    int other = 0;
    while (n--)
    {
        int si;
        string name;
        cin>>si>>name;
        int girr = 0;
        int taxx = 0;
        int othh = 0;
        for (int i = 0; i<si; ++i)
        {
            string tmp;
            cin>>tmp;
            bool all = true;
            bool desc = true;
            int last = tmp[0];
            for (int i = 1; i<tmp.size(); ++i)
            {
                if (tmp[i]=='-')continue;
                if (tmp[i]!=last && all)
                {
                    all = false;
                }
                if (tmp[i]>=last && desc)
                {
                    desc = false;
                }
                if (!all && !desc)break;
                last = tmp[i];
            }
            if (all)taxx++;
            else if (desc) othh++;
            else girr++;
        }
        girl = max(girl,girr);
        taxi = max(taxi,taxx);
        other = max(other, othh);
        girls[girr].push_back(name);
        pizzas[othh].push_back(name);
        taxis[taxx].push_back(name);
    }
    cout<<"If you want to call a taxi, you should call: ";
    for (int i = 0; i<taxis[taxi].size(); ++i){
        cout<<taxis[taxi][i];
        if (i==(int)taxis[taxi].size()-1)cout<<".";
        else cout<<", ";
    }
    cout<<endl;
    cout<<"If you want to order a pizza, you should call: ";
    for (int i = 0; i<pizzas[other].size(); ++i){
        cout<<pizzas[other][i];
        if (i==(int)pizzas[other].size()-1)cout<<".";
        else cout<<", ";
    }
    cout<<endl;
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for (int i = 0; i<girls[girl].size(); ++i){
        cout<<girls[girl][i];
        if (i==(int)girls[girl].size()-1)cout<<".";
        else cout<<", ";
    }
    cout<<endl;
}
```
## 7- Round 180 B:
Problem link: https://codeforces.com/problemset/problem/298/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    string d;
    cin>>d;
    long long x_res = ex - sx;
    long long y_res = ey - sy;
    map<char,int> mp;
    if (x_res < 0)
    {
        mp['W'] += abs(x_res);
    }
    else mp['E'] += x_res;
    if (y_res < 0)
    {
        mp['S'] += abs(y_res);
    }
    else mp['N'] += y_res;
    if (!mp['N'] && !mp['E'] && !mp['W'] && !mp['S']){
        cout<<0<<endl;
        return 0;
    }
    for (int i = 0; i<d.size(); ++i){
        if (mp[d[i]])mp[d[i]]--;
        if (!mp['N'] && !mp['E'] && !mp['W'] && !mp['S']){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
```
