#include<bits/stdc++.h>
using namespace std;

int32_t main(){

    int n,m;
    cin>>n>>m;
    // n odd .. snake represented as '#'
    // spaces as '.'
    char snake[n][m]={'#'};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i%2!=0)snake[i][j]='.';
            else snake[i][j]='#';
        }
    }

    /*       ans:   
                ####
                ...#
                ####
                #...
                ####
    ####
    ####
    ####
    ####
    ####
    
    */

   int flag=0;
   for(int i=1;i<n;i+=2){
        if(flag==0){
            snake[i][m-1]='#';
            flag=1;
        }else{
            snake[i][0]='#';
            flag=0;
        }
   }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<snake[i][j];
        }
        cout<<'\n';
    }
    return 0;
}