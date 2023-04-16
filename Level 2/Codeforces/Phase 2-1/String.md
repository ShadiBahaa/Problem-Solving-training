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
