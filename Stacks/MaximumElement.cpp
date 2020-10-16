#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int q;
    long long int d,maximum=INT_MIN;
    stack <long long int> s;
    while(n>0){
        cin>>q;
        if(q==1){
            cin>>d;
            if(s.empty()){
                maximum=d;
                s.push(d);
                n--;
                continue;
            }
            if(maximum<d){
                maximum=d;
            }
            s.push(maximum);
        } else if(q==2){
            if(!s.empty()){
                s.pop();
                if(!s.empty()){
                maximum=s.top();
                }
            }
        } else if(q==3){
            cout<<s.top()<<endl;
        }
        n--;
    }
    return 0;
}

