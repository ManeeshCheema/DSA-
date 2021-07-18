#include<bits/stdc++.h>
using namespace std;

#define N 100
vector<bool> primes(N+1,true);

void sieve(){
    primes[0]=primes[1]=false;
    for(int i=4;i<=N;i+=2) primes[i]=false; //2 is the only even prime n
    for(int i=3;i*i<N;i+=2){ //since prime factors of n are less than root n
        if(primes[i]){
            for(int j=i*i;j<=N;j+=i){ // all multiple till i*(i-1) will already be marked
                primes[j]=false;
            }
        }
    }
    int n=0;
    for(auto i:primes) cout<<n++<<" "<<i<<endl;
}
int main(){
   sieve();
    return 0;
}