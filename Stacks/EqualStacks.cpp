#include <iostream>
#include <stack>
using namespace std;
int main() {
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    stack<int> s1,s2,s3;
    stack<int> i1,i2,i3;
    int sum1=0,sum2=0,sum3=0;

    for(int i=0; i<n1; i++){
        int d;
        cin>>d;
        i1.push(d);
        sum1 += d;
    }
    for(int i=0; i<n1; i++){
       s1.push(i1.top());
       i1.pop();
    }
    for(int i=0; i<n2; i++){
        int d2;
        cin>>d2;
        i2.push(d2);
        sum2+= d2;
    }
    for(int i=0; i<n2; i++){
        s2.push(i2.top());
        i2.pop();
    }

    for(int i=0; i<n3; i++){
        int d3;
        cin>>d3;
        i3.push(d3);
        sum3+=d3;
    }
    for(int i=0; i<n3; i++){
        s3.push(i3.top());
        i3.pop();
    }

     while(sum1+sum2+sum3>0){
         if(sum1==sum2 && sum2==sum3){
             break;
         }
         
        int m= max(max(sum1,sum2),sum3);
         if(m==sum1){
           sum1 -= s1.top(); 
           s1.pop();
         }
         else if(m==sum2){
             sum2 -= s2.top();
             s2.pop();
         }
         else if(m==sum3){
             sum3 -= s3.top();
             s3.pop();
         }
     }
     cout<<sum1<<endl;
    return 0;


}
