#include <bits/stdc++.h>

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pq priority_queue<int>
#define setbit(x) __builtin_popcount(x)
#define zerobits(x) __builtin_ctz(x)
#define startzero(x) __builtin_clz(x)
#define rf(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n]
#define w(t)      \
        int t;    \
        cin >> t; \
        while (t--)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repi(i, a, b) for (int i = b - 1; i >= a; i--)

#include <iostream>
#include <cmath>
using namespace std;

int check(int n)
{
        if (n == 1)
        {
                return 1;
                //break;
        }
        else if (n % 2 == 0)
        {
                cout << n << " ";
                n = n / 2;

                return check(n);
        }
        cout << n << " ";
        n = n * 3 + 1;

        return check(n);
}

int main()
{
        int n;

        cin >> n;
        cout << n << " ";

        while (n > 1)
        {
                n = n & 1 ? n * 3 + 1 : n >> 1;
                cout << n << " ";
        }
        //cout << check(n) << endl;
        return 0;
}