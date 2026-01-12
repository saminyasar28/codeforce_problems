#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N;
    long long int sum = 0;
    cin >> N;

    int A[N];

    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    for(int i = 0; i < N; i++)
    {
        sum += A[i];
    }
    cout << abs(sum) << endl;
    return 0;
}