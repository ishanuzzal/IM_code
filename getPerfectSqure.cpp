//Code for closest perfect squre number

#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n){
    if(sqrt(n)-floor(sqrt(n))==0) return true;
    return false;
}

int getPerfectSqure(int n){
    if(isPerfect(n))return n;

    int high = -1;
    int n1 = n+1;
    while(isPerfect(n1)!=true){
        n1++;
    }
    high = n1;

    int low = -1;
    int n2 = n-1;
    while(isPerfect(n2)!=true){
        n2--;
    }
    low = n2;

    if(high-n>n-low) return low;
    return high;
}

int main()
{
    //freopen("input.txt","r",stdin);
    int n;
    cout<<"Enter the number which nearest perfect squre number you want to find"<<endl;
    cin>>n;
    int ans = getPerfectSqure(n);
    cout<<"Nearest perfect integer number of "<<n<<" is "<<ans<<endl; 
}