#include <bits/stdc++.h>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int X;
    cin >> X;
    bool isFound = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] == X)
        {
            cout << i << endl;
            isFound = 1;
            break;
        }
    }
    if (isFound != 1)
    {
        cout << "-1" << endl;
    }

    return 0;
}