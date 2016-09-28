#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll reverse(ll a)
{
     ll temp=a, sum=0;
    while(temp)
    {
        sum*=10;
        sum += temp%10;
        temp/=10;
    }
    return sum;

}

int main()
{
   int test;
   ll a,b;
   cin>>test;
   //ll result[test];
   ll result;
  for(int i=0;i<test;i++){
     cin>>a>>b;
     ll rA=reverse(a);
     ll rB=reverse(b);
     ll sum = rA+rB;
     cout<<reverse(sum)<<endl;
   }

    return 0;
}
