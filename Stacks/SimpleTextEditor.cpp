#include <bits/stdc++.h>
using namespace std;
int main() {
    string s1,s2;
    stack <string> s;
    int n,q,k;
    cin>>n;
    while(n>0){
        cin>>q;
        switch(q){
            case 1:cin>>s2;
                s.push(s1);
                s1.append(s2);
                break;
            case 2: cin >> k;
                s.push(s1);
                s1.erase(s1.length() - k);
                break;
            case 3: cin >> k;
                cout << s1[k - 1] << endl;
                break;
            case 4: s1 = s.top();
                s.pop();
                break;
        }
        n--;
    }
}
