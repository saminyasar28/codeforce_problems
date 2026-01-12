#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N, val = 0;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for(int i = 0; i < N - 2; i++)
    {
        for(int j = i + 1; j < N; j++)
        {
            if(A[i] != A[j])
            {
                val = A[i];
            }
        }
    }
    if(val % 2 )
    return 0;
}