//https://www.pbinfo.ro/probleme/437/conex

#include<bits/stdc++.h>
using namespace std;


ifstream fin ("conex.in");
ofstream fout ("conex.out");

int n, i, insule;
vector <int> muchii[5000];
bitset <5000> viz;

void dfs (int nod) {
	viz[nod] = 1;
	for (auto it : muchii[nod])
		if (!viz[it])
			dfs(it);
}

int main () {
    fin >> n;
    int x, y;
    while (fin >> x >> y) {
    	muchii[x].push_back(y);
    	muchii[y].push_back(x);
    }

    for (i = 1; i <= n; i++)
    	if (viz[i] == 0) {
    		insule++;
    		dfs(i);
    	}

    if (insule == 1)
    	fout << "DA";
    else
    	fout << "NU";
}