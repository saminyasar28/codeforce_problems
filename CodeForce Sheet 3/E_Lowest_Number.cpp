#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N, pos;
    cin >> N;
    int A[N + 1];
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    int mn = A[1];
    pos = 1;
    for (int i = 1; i <= N; i++)
    {
        if (A[i] < mn)
        {
            mn = A[i];
            pos = i;
        }
    }
    cout << mn << " " << pos;

    return 0;
}