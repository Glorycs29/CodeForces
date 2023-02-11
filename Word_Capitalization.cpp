#include<bits/stdc++.h>
using namespace std;

int32_t main(){
    string word;
    cin>>word;

    if(word[0]>='A' && word[0]<='Z'){
        cout<<word;
    }else{
        word[0] = word[0]-'a'+'A';
        cout<<word;
    }
    return 0;

}