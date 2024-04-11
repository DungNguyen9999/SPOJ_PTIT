#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int cnt = 0;
        if(n % 2 == 0)
            ++cnt;
        for(int i = 2; i <= sqrt(n); i++)
        {
            if(n % i == 0)
            {
                if(i % 2 == 0)
                    ++cnt;
                if((n/i) % 2 == 0)
                    ++cnt;
                if(i * i == n && cnt)
                    --cnt;
            }
        }
        cout << cnt << "\n";
    }
}