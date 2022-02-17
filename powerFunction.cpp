#include <bits/stdc++.h>
using namespace std;
const int m = 1e9+7;
const long long int M = 1e18+7;

long long int power_Rec(long long int n, long long int p){
    if(p==0) return 1;
    long long int a = (power_Rec(n,p/2))%m;
    if(p&1){
        return (n*a*a)%M;
    }
    else{
        return (a*a)%M;
    }

}

long long int power_itt(long long int n, long long int p){
    long long int ans = 1;
    if(p==0) return 1;
    n = n%m;
    while(p){
        if((p&1)!=0){
        ans =(ans*n)%M;
    }
        n = (n*n)%M;
        p>>=1;
    }
    return ans;
}
int main()
{ 
   //freopen("input.txt","r",stdin);
   
    long long int a = 1e17+16;
    long long int b = 3;
    cout<<power_Rec(a,b)<<endl;
    cout<<power_itt(a,b)<<endl;
    return 0;
  
}