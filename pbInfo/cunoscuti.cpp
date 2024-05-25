//https://www.pbinfo.ro/probleme/575/cunoscuti

#include<bits/stdc++.h>
using namespace std;

int n, m, i, j, grad_intern[1000], nr, k, maxx = -1;
vector <int> v;

int main () {
    cin >> n >> m;

    for (i = 1; i <= m; i++) {
        int x, y;
        cin >> x >> y;
        grad_intern[y]++;
    }

    for (i = 1; i <= n; i++) {
        maxx = max(maxx, grad_intern[i]);
    }

    for (i = 1; i <= n; i++)
        if (grad_intern[i] == maxx) 
            v.push_back(i);


    sort(v.begin(), v.end());

    for (auto itr : v)
        cout << itr << ' ';
}