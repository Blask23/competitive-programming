// Problema: 10020 - Minimal coverage
// Plataforma: vjudge - UVA
// Categoria:
// Origem:
// Link: https://vjudge.net/problem/UVA-10020
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    int m;
    cin >> m;

    vector<pair<int,int>> vet;
    while (true)
    {
        int a, b;
        cin >> a >> b;

        if(a == 0 && b == 0)
            break;

        vet.pb({a,b});
    }
    
    sort(all(vet));

    for(auto h : vet){
        cerr << h.first << ' ' << h.second << '\n';
    }

    stack<pair<int,int>> p;
    p.push(vet[0]);


    auto i = vet.begin()++;
    pair<int,int> j = {0,0};

    while (p.top().second <= m && i != vet.end())
    {
        cerr << p.top().first << ' ' << p.top().second << '\n';

        if(i->first < 0 && p.top().second < i->second){
            p.pop();
            p.push(*i);
        }
       
        i++;
    }
    
    while (p.size() != 0)
    {
        cout << p.top().first << ' ' << p.top().second << '\n';
        p.pop();
    }
    

    

    return 0;
}