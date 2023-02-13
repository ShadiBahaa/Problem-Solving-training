#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,problems = 0;
    cin>>n;
    while (n--){
        int solved = 0,answer;
        for (int i = 1; i<=3;i++){
            cin>>answer;
            solved+=answer;
        }
        if (solved >= 2){
            ++problems;
        }
    }
    cout<<problems<<endl;
}
