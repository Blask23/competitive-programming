#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int n;
    cin >> n;

    int aux, ant = 0;
    for (size_t i = 1; i < n; i++)
    {
        cin >> aux;
        cout << aux - ant << ' ';
        ant = aux;
    }
    
    cin >> aux;
    cout << aux - ant << '\n';

    

    return 0;
}

