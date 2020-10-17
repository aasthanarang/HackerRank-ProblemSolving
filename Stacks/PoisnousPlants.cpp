#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector<int> v;
    for(int i=1; i<=n; i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    stack<pair<int,int>> s;
    s.push({v[0],0});
    int maxall=0;
    for(int i=1; i<n; i++){
        if(v[i]>s.top().first){
            s.push({v[i],1});
        }
        else{
            int maxday=0;
            while(!s.empty() && (s.top()).first>=v[i]){
            int day= (s.top()).second;
            maxday= max(maxday,day);
            s.pop();
            }
            if(!s.empty()){
                s.push({v[i],maxday+1});
            }
            else{
                s.push({v[i],0});
            }
        }
        maxall=max(maxall,(s.top()).second);
    }
 cout<<maxall;
   


}
