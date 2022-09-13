#include <bits/stdc++.h>

using namespace std;

int main(){
    int x;
    cin >> x;
    if(x<1918){
        if(x%4==0)cout<<"12.09."<<x<<endl;
        else cout<<"13.09."<<x<<endl;
    }
    else if(x==1918){
         cout<<"26.09."<<x<<endl;
    }
    else{
        if(x%400==0){
            cout<<"12.09."<<x<<endl;
        }
        else if(x%4==0&&x%100!=0){
            cout<<"12.09."<<x<<endl;
        }
        else cout<<"13.09."<<x<<endl;
    }
}
