#include <bits/stdc++.h>

#define faster() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
typedef long long ll;
#define mx 1000000
#define TEST 0

inline void solution()
{
    int n;
    cin >> n;
    for(int i = -n/2; i <= n/2; i++)
    {
        for(int j = -n/2; j <= n/2; j++)
        {
            if(j == 0 || i == 0)
                cout << "D";
            else if(abs(j) <= n/2 - abs(i))
                cout << "D";
            else
                cout << "*";
        }
        cout << "\n";
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