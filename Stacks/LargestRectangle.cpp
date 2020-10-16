#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int h[n];
    int area[n],c=0;
    for(int i=0;i<n;i++){
        cin>>h[i];
        }
     stack <int> s;
     s.push(0);
     int i=1;
     while(i<n){
         
         if(h[i]>=h[s.top()]){
          s.push(i);
         }
         else{
             while(!s.empty() && h[s.top()]>h[i]){
                 int x= s.top();
                 s.pop();
                 if(!s.empty()){
                   area[c++]=h[x]*(i-s.top()-1);
                }
                else if(s.empty()){
                     area[c++]=h[x]*i;
                }
             }
             s.push(i);
             }
             i++;
         }
         while(!s.empty()){
                 int y= s.top();
                 s.pop();
                 if(!s.empty()){
                   area[c++]=h[y]*(i-s.top()-1);
                }
                else{
                     area[c++]=h[y]*i;
                     
                     break;
                }
         }
         int max=-1;
         for(int i=0; i<n; i++){
           
             if(area[i]>=max){
                 max=area[i];
             }
         }
         cout<<max<<endl;

     


    return 0;
}
