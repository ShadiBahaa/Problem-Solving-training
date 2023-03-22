#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v){
    cout<<v.size()<<" ";
    for (int it:v)cout<<it<<" ";
    cout<<endl;
}
int main()
{
    int n;
    cin>>n;
    vector<int> pos;
    vector<int> neg;
    vector<int> zero;
    for (int i = 0; i<n; ++i){
        int x;
        cin>>x;
        if (x==0)zero.push_back(x);
        else if (x>0)pos.push_back(x);
        else neg.push_back(x);
    }
    if (pos.size()==0){
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if (neg.size()%2==0){
        zero.push_back(neg.back());
        neg.pop_back();
    }
    print(neg);
    print(pos);
    print(zero);
}
