#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll no_factor(ll n)
{  ll no_factors=1;
    for(ll i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            no_factors++;
        }
    }
    return no_factors;
}

int main()
{
    ll num, no_rectangle=0;
    cin >> num;
    for(ll i=1;i<=num;i++)
    {
        no_rectangle+=no_factor(i);
    }
    cout<<no_rectangle;
    return 0;
}

