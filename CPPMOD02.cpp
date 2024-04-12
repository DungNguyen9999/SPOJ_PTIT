#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 1

inline void solution()
{
    ll a,m;
    cin >> a >> m;
    int check = 1;
    for(ll i = 0;i <= m-1; i++)
    {
        if((a*i) % m == 1)
        {
            cout << i << "\n";
            check = 0;
            break;
        }
    }
    if(check)
        cout << "-1" << "\n";
}

int main()
{
    faster();
    int t;
    if(TEST)
    {
        cin >> t;
        cin.ignore();
    }    
    else        t = 1;
    while(t--)
    {
        solution();
    }
}