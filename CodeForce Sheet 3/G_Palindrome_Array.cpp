#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int A[N];
    bool isPel = 1;
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < N / 2; i++)
    {
        if (A[i] != A[N - 1 - i])
        {
            isPel = 0;
            break;
        }
    }
    if (isPel == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}