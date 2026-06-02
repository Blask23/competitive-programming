// Problema: 2023 - A Última Criança Boa
// Plataforma: beecrowd
// Categoria: Strings (nivel 4)
// Origem: Por M.C. Pinto, UNILA Brazil
// Link: https://judge.beecrowd.com/pt/problems/view/2023
// Assunto:


#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main() {
    fastio;

    string str;
    vector<pair<string, string>> vet;
    while (getline(cin, str))
    {
        string aux = str;

        for (size_t i = 0; i < str.size(); i++)
        {
            str[i] = tolower(str[i]);
        }

        vet.pb({str, aux});
    }

    sort(all(vet));

    cout << vet.rbegin()->second << '\n';
    

    return 0;
}