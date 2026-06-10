#include <bits/stdc++.h>
using namespace std;
 
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
 
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
 
    sort(all(a));
 
    int p1=0,p2=0;
    int maior = 0;
 
    while (p2<n)
    {
        if((a[p2] - a[p1]) <= 5){
            maior = max(maior, p2-p1+1);
            p2++;
        }else{
            p1++;
        }
    }
 
    cout << maior << '\n';
    
    
 
    return 0;
}