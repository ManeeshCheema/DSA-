#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define ends " "
using namespace std;

int setbit(int n,int pos){
    int mask= 1<<pos;
    return n|mask;
}
 int clearbit(int n,int pos){
     int mask = ~(1<<pos);
     return n&mask;
}

bool getbit(int n,int pos){
     int mask= 1<<pos;
    return n&mask;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout<<setbit(5,1)<<endl;
    cout<<clearbit(5,2)<<endl;
    cout<<getbit(5,1);
    
    return 0;
}