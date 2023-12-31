#include<bits/stdc++.h>
using namespace std;

long long binPow(long long a, long long b, long long m)
{
    long long res = 1;
    while(b > 0) {
        if (b&1)
            res = res*a % m;
        a = a*a  % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << binPow(a,b, 9999) << endl;
    return 0;
}