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
