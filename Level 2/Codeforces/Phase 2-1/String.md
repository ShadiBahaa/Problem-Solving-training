# String 
## 1- Round 163 B
Problem link: https://codeforces.com/problemset/problem/266/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    while (t--)
    {
        for (int i = 1; i<n; ++i)
        {
            if (s[i]=='G' && s[i-1]=='B')
            {
                swap(s[i],s[i-1]);
                i++;
            }
        }
    }
    cout<<s<<endl;
}
```
## 2- Round 424 B
Problem link: https://codeforces.com/problemset/problem/831/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,char> mp;
    string first,second;
    cin>>first>>second;
    for (int i = 0; i<26; ++i){
        mp[first[i]] = second[i];
    }
    string l;
    cin>>l;
    for (char x:l){
        if (x>='a' && x<='z'){
            cout<<mp[x];
        }else if (x>='0' && x<='9'){
            cout<<x;
        }else {
            cout<<(char)((mp[(x-'A')+'a']-'a')+'A');
        }
    }
    cout<<endl;
}
```
## 3- Round 32 B
Problem link: https://codeforces.com/problemset/problem/32/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for (int i = 1; i<s.size(); ++i){
        if (s[i]==s[i-1] && s[i]=='-'){
            s.replace(i-1,2,"2");
        }
    }
    for (int i = 1; i<s.size(); ++i){
        if (s[i]=='.' && s[i-1]=='-'){
            s.replace(i-1,2,"1");
        }
    }
    for (int i = 0; i<s.size(); ++i){
        if (s[i]=='.')s[i] = '0';
    }
    cout<<s<<endl;
}
```
## 4- Round 481 B
Problem link: https://codeforces.com/problemset/problem/978/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt = 0;
    int ans = 0;
    for (char c:s){
        if (c=='x'){
            cnt++;
        }else {
            ans += max(0, cnt - 2);
            cnt = 0;
        }
    }
    if (cnt>2)ans+=cnt-2;
    cout<<ans<<endl;
}
```
## 5- Round 386 B
Problem link: https://codeforces.com/problemset/problem/746/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string c;
    cin>>c;
    deque<char> d;
    bool ff = true;
    if (c.size()%2==0)ff= false;
    for (int i = 0; i<c.size(); ++i){
        if (ff){
            d.push_back(c[i]);
        }else {
            d.push_front(c[i]);
        }
        ff = !ff;
    }
    for (int i = 0; i<d.size(); ++i){
        cout<<d[i];
    }
    cout<<endl;
}
```
## 6- Round 387 B
Problem link: https://codeforces.com/problemset/problem/747/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    if (n%4)
    {
        cout<<"==="<<endl;
        return 0;
    }
    map<char,int> mp;
    mp['A'] = mp['G'] = mp['C'] = mp['T'] = 0;
    for (int i = 0; i<s.size(); ++i)
    {
        if (s[i]!='?')
        {
            mp[s[i]]++;
            if (mp[s[i]]>(n/4))
            {
                cout<<"==="<<endl;
                return 0;
            }
        }
    }
    for (int i = 0; i<s.size(); ++i)
    {
        if (s[i]=='?')
        {
            for (auto &pa:mp)
            {
                if ((pa.second)<(n/4))
                {
                    cout<<pa.first;
                    pa.second++;
                    break;
                }
            }
        }
        else
        {
            cout<<s[i];
        }
    }
    cout<<endl;
}
```
## 7- Round 479 B
Problem link: https://codeforces.com/problemset/problem/977/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    map<string,int> mp;
    for (int i = 0; i<s.size()-1; ++i){
        mp[s.substr(i,2)]++;
    }
    cout<<max_element(mp.begin(),mp.end(),[](const auto &x,const auto &y){return x.second<y.second;})->first<<endl;
}
```
## 8- Round 459 B
Problem link: https://codeforces.com/problemset/problem/918/B
```cpp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    map<string,string> mp;
    while (n--){
        string name,ip;
        cin>>name>>ip;
        mp[ip] = name;
    }
    while (m--){
        string command,ip;
        cin>>command>>ip;
        cout<<command<<" "<<ip<<" #"<<mp[ip.substr(0,ip.size()-1)]<<endl;
    }
}
```

