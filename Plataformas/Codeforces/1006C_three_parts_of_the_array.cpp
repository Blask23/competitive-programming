// Problema: 1006C - Three Parts of the Array
// Plataforma: codeforces
// Categoria: 
// Origem: Codeforces Round 498 (Div. 3)
// Link: https://codeforces.com/problemset/problem/1006/C
// Assunto: two pointers


#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 
int main(){
    int n;
    cin >> n;
 
    vector<int> d(n);
 
    for (int i = 0; i < n; i++)
        cin >> d[i];
    
    int l=0, r=n-1;
    ll sumL = d[l], sumR = d[r];
    ll res = 0;
 
    while (l<r)
    {
        if(sumL == sumR){
            res = sumL;
            l++;
            r--;
            sumL += (ll)d[l];
            sumR += (ll)d[r];
        }else if(sumL < sumR){
            l++;
            sumL += (ll)d[l];
        }else if(sumR < sumL){
            r--;
            sumR += (ll)d[r];
        }
    }
 
    cout << res << '\n';
    
    
 
    return 0;
}