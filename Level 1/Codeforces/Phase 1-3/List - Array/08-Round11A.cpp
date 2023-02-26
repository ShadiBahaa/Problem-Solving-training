#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n>>d;
    n--;
    int prev;
    cin>>prev;
    int moves = 0;
    while (n--){
        int x ;
        cin>>x;
        if (x<=prev){
            int tmp = (prev-x)/d + 1;
            prev= x + tmp*d;
            moves+=tmp;
        }else {
            prev = x;
        }
    }
    cout<<moves<<endl;
}
