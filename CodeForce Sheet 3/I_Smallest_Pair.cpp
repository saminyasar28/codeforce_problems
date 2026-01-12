#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;
        int mn = INT_MAX;

        int A[N + 1];
        for (int i = 1; i <= N; i++)
        {
            cin >> A[i];
        }
        for (int i = 1; i < N; i++)
        {
            for (int j = i + 1; j <= N; j++)
            {
                int val = A[i] + A[j] + (j - i);
                if (val < mn)
                {
                    mn = val;
                }
            }
        }
        cout << mn << endl;
    }

    return 0;
}