#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 
int main() {
    fastio;
 
    int n, x;
 
    cin >> n >> x;
 
    vector<int> a(n+1);
    a[0] = 0;
 
    for (size_t i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i-1];
    }
 
    int p1 = 0, p2 = 1, qtd = 0;
    while (p2 < n+1)
    {
        if(a[p2] - a[p1] < x){
            p2++;
        }else if (a[p2] - a[p1] > x){
            p1++;
        }else{
            qtd++;
            p2++;   
        }
    }
    
    cout << qtd << '\n';
    
 
    return 0;
}