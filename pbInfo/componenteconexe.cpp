//https://www.pbinfo.ro/probleme/438/componenteconexe

#include<bits/stdc++.h>
using namespace std;

ifstream fin ("componenteconexe.in");
ofstream fout ("componenteconexe.out");

int n, i, insule;
vector <int> muchii[5000], v, z;
bitset <5000> viz;

void dfs (int nod) {
	viz[nod] = 1;
	for (auto it : muchii[nod])
		if (!viz[it]) {
			v.push_back(it);
			dfs(it);
		}
}

int main () {
    fin >> n;
    int x, y;
    while (fin >> x >> y) {
    	muchii[x].push_back(y);
    	muchii[y].push_back(x);
    }

    /*
    1 : 4
    2 : 4
    3 : 5
    4 : 1 2
    5 : 3
    */

    for (i = 1; i <= n; i++)
    	if (viz[i] == 0) {
    		v.push_back(i);
    		insule++;
    		dfs(i);
    		v.push_back(-1);
    	}

    fout << insule << endl;

    for (auto itr : v) {
    	if (itr == -1) {
           sort(z.begin(), z.end());
           for (auto aa : z)
           	fout << aa << ' ';
           fout << endl;
           z.clear();
    	}
    	else
    		z.push_back(itr);
    }   
}