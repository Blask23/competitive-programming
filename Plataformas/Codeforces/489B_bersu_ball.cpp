// Problema: 489B - BerSU Ball
// Plataforma: codeforces
// Categoria:
// Origem: Codeforces Round 277.5 (Div. 2)
// Link: https://codeforces.com/problemset/problem/489/B
// Assunto: two pointers


#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 
int main(){
    int n, m;
 
    cin >> n;
    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    cin >> m;
    vector<int> b(m);
    
    for (int i = 0; i < m; i++)
        cin >> b[i];
 
 
    sort(all(a));
    sort(all(b));
 
    int p1=0, p2=0, qtd=0;
 
    while (p1 < n && p2 < m)
    {
        if(abs( a[p1]-b[p2]) <= 1){
            qtd++;
            p1++;
            p2++;
        }else if(a[p1] < b[p2]){
            p1++;
        }else if(a[p1] > b[p2]){
            p2++;
        }
    }
    
    cout << qtd << '\n';
 
    return 0;
}