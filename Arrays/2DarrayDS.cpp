#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[6][6];
    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            cin>>arr[i][j];
        }
    }
    int sum=0, maxsum= INT_MIN;
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum=0;
            for(int x=0; x<3; x++){
                sum += arr[i][j+x] + arr[i+2][j+x];    
            }
            sum += arr[i+1][j+1];
            maxsum= max(sum,maxsum);
        }
    }
cout<<maxsum;
return 0;

}
