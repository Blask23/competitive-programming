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

    vector<int> t(n);

    for (size_t i = 0; i < n; i++)
        cin >> t[i];

    int l = 0, r = n-1;
    int sum1 = 0, sum2 = 0;
    int qtd1 = 0, qtd2 = 0;

    while (l<=r)
    {
        if(sum1 <= sum2){
            sum1 += t[l];
            l++;
            qtd1++;
        }else{
            sum2 += t[r];
            r--;
            qtd2++;
        }
    }

    cout << qtd1 << ' ' << qtd2 << '\n';
    
    return 0;
}