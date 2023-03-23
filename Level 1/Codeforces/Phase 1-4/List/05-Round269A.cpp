#include <bits/stdc++.h>
using namespace std;
int main()
{
    int freq[10]{};
    int arr[6];
    int num = -1;
    for (int i = 0; i<6; ++i)
    {
        cin>>arr[i];
        freq[arr[i]]++;
        if (freq[arr[i]]==4){
            num = arr[i];
        }
    }
    if (num==-1){
        cout<<"Alien"<<endl;
        return 0;
    }
    int cnt = 0;
    int bod = -1,head = -1;
    if (freq[num]==5){
        bod = num;
        for (int i = 0; i<6; ++i){
            if (arr[i]!=num){
                head = arr[i];
                break;
            }
        }
    }else if (freq[num]==6){
        bod = num;
        head = num;
    }else {
        for (int i = 0; i<6; ++i){
            if (arr[i]!=num && bod==-1){
                bod = arr[i];
            }else if (arr[i]!=num){
                head = arr[i];
                break;
            }
        }
    }
    if (head!=bod){
        cout<<"Bear"<<endl;
    }else {
        cout<<"Elephant"<<endl;
    }
}
