#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[1000000];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    stack<int> s;
    int mx=INT_MIN;
    for(int i=0 ; i<n; i++){
        while(!s.empty()){
            int e = s.top()^arr[i];
            mx= max(mx,e);
            if(arr[i]<=s.top()){
                s.pop();
            }
            else{
                break;
            }
        }
        s.push(arr[i]);
    }
    cout<<mx<<endl;
}
