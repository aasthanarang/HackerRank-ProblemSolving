#include <bits/stdc++.h>

using namespace std;

// Complete the isBalanced function below.
bool isBalanced(string s) {
    stack <char> c;
    for(int i=0;i<s.length();i++){
        if(s[i]=='[' || s[i]=='{' || s[i]=='('){
            c.push(s[i]);
        } else if(s[i]=='}'){
            if(c.empty()){
                return false;
                }
            if(c.top()=='{'){
                c.pop();
            } else {
                return false;
            }
        }else if(s[i]==']'){
            if(c.empty()){
                return false;
                }
            if(c.top()=='['){
                c.pop();
            } else {
                return false;
            }
        }else if(s[i]==')'){
            if(c.empty()){
                return false;
                }
            if(c.top()=='('){
                c.pop();
            } else {
                return false;
            }
        }
        else{ 
            return false;
        }
    }

    if(c.empty()){
        return true;
        } else return false;


}

int main()
{
    int t;
    cin>>t;
    while(t>0){
        string s;
        cin>>s;
        bool check=isBalanced(s);
        if(check){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO\n";
        }
        t--;
        }


    return 0;
}
