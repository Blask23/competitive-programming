// Problema:
// Plataforma:
// Categoria:
// Origem:
// Link:
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

map<int, pair<int,int>> p;

void posicoes(pair<int,int> p0){
    p.clear();
    p.insert({1, {p0.first + 1, p0.second + 2}});
    p.insert({8, {p0.first - 1, p0.second + 2}});
    
    p.insert({4, {p0.first + 1, p0.second - 2}});
    p.insert({5, {p0.first - 1, p0.second - 2}});

    p.insert({2, {p0.first + 2, p0.second + 1}});
    p.insert({7, {p0.first - 2, p0.second + 1}});

    p.insert({3, {p0.first +2, p0.second - 1}});
    p.insert({6, {p0.first - 2, p0.second - 1}});
}

int main() {
    fastio;

    set<pair<int,int>> buracos;

    buracos.insert({1,3});
    buracos.insert({2,3});
    buracos.insert({2,5});
    buracos.insert({5,4});

    p.insert({1, {5,5}});
    p.insert({2, {6,4}});
    p.insert({3, {6,2}});
    p.insert({4, {5,1}});
    p.insert({5, {3,1}});
    p.insert({6, {2,2}});
    p.insert({7, {2,4}});
    p.insert({8, {3,5}});

    int n;
    int pulos = 1;
    bool flag = true;

    cin >> n;
    while (n--)
    {
        int pos;
        cin >> pos;

        if(buracos.find(p[pos]) != buracos.end()){
            cout << pulos << '\n';
            flag = false;
            break;
        }

        posicoes(p[pos]);
        pulos++;
    }
    
    if(flag)
        cout << pulos -1<< '\n';

    return 0;
}