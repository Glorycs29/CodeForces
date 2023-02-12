#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    int num,k;
    cin>>num>>k;
    while(k--){

        if(num>9){
            if(num%10==0){
                num/=10;
            }else{
                num--;
            }
        }else{
            num--;
        }

    }
    cout<<num;
    return 0;
}