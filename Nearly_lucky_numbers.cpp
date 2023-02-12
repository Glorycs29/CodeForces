#include<bits/stdc++.h>
using namespace std;

/*//* bool check(long long n, long long count){
//     while(n>0){
//         if(n%10 == 4 || n%10==7){
//             count++;
//         }
//         n/=10;
//     }
//     if(count<9){
//          if(count==7 || count==4)return true;
//         else return false;
//     }else{
//        return check(count,0);
//     }
// }
*/
int32_t main(){
    string s;
    cin>>s;
    int len=s.length();
    
    int seven=count(s.begin(),s.end(),'7');
    int four=count(s.begin(),s.end(),'4');
    if(seven+four==7 || seven+four==4) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}