// Problema:
// Plataforma:
// Categoria:
// Origem:
// Link:
// Assunto:

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()

int main()
{
    fastio;

    string str;
    while (cin >> str)
    {
        string ans;
        string b;
        bool flag = true;
        int aux = 0;
        for (size_t i = 0; i < str.size(); i++)
        {

            if (str[i] == '['){
                flag = false;
                b+= ans;
                ans = b;
                b.clear();
            }
            else if (str[i] == ']'){
                flag = true;
                b += ans;
                ans = b;
                b.clear();
            }
            else
            {
                if (!flag){
                    b.push_back(str[i]);
                }
                else{
                    ans.push_back(str[i]);
                }
            }
        }

        if(b.size() > 0){
            b+= ans;
            ans = b;
            b.clear();
        }

        cout << ans << '\n';
    }

    return 0;
}