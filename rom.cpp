#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long int x, n, ans;
    cin >> x;
    while(x--)
        {
        cin >> n;
        n %= 1000000007;
        ans = n*n % 1000000007;
        cout << ans << endl;
    }
    return 0;
}
