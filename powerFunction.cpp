#include <bits/stdc++.h>
using namespace std;

int power_Rec(int n, int p){
    if(p==0) return 1;
    int a = power_Rec(n,p/2);
    if(p&1){
        return n*a*a;
    }
    else{
        return a*a;
    }

}

int power_itt(int n, int p){
    int ans = 1;
    if(p==0) return 1;
    while(p){
        if((p&1)!=0){
        ans *=n;
    }
        n*=n;
        p>>=1;
    }
    return ans;
}
int main()
{ 
   //freopen("input.txt","r",stdin);
   
    int a = 3;
    int b = 5;
    cout<<power_Rec(a,b)<<endl;
    cout<<power_itt(a,b)<<endl;
    return 0;
  
}