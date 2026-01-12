#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int N, sum = 0;
    cin >> N;
    int A[N];
    for(int i = 0; i < N; i++)
    {
        cin >> A[i];
        sum = sum + A[i];
    }
  
    cout << sum << endl;
    return 0;
}