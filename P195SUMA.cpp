#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

int a[mx+5];

// 3 7 5 1 10 3 20
// 1 3 3 5 7 10 20

inline void solution()
{
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    if(k == 0)
    {
        cout << 1;
        return;
    }
    sort(a,a+n);
    int cnt = 0;
    int max = -1;
    int idx;
    for(int i = 0; i < n; i++)
    {
        
    }
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