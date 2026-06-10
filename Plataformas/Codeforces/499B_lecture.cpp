// Problema: 499B - Lecture
// Plataforma: codeforces
// Categoria:
// Origem: Codeforces Round 284 (Div. 2)
// Link: https://codeforces.com/problemset/problem/499/B
// Assunto: greedy


#include <bits/stdc++.h>
using namespace std;
 
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
 
    map<string, string> mapa;
 
    int n, m;
 
    cin >> n >> m;
 
    string s1, s2;
    for (size_t i = 0; i < m; i++)
    {
        cin >> s1 >> s2;
 
        if(s1.size() <= s2.size())
            mapa[s2] = s1;
        else
            mapa[s1] = s2;
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cin >> s1;
        cout << (mapa.find(s1) == mapa.end() ? s1 : mapa[s1]) << ' ';
    }
    cout << '\n';
 
    return 0;
}