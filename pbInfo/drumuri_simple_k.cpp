//https://www.pbinfo.ro/probleme/3451/drumuri-simple-k

#include<iostream>
using namespace std;

int G[21][21], r[11], n, k, q=1;

void afis(){
int i; q=0;
for(i=0;i<=k;i++)
cout<<r[i]<<' ';
cout<<endl;
}

void parcurge(int i, int l){
if(l==k+1) {
afis();
return;
}
int j;
for(j=1;j<=n;j++)
if(G[i][j]==1) {
r[l]=j;
G[i][j]=0;
parcurge(j,l+1);
G[i][j]=1;
}
}

int main(){
int m, x, y, i;
cin>>n>>m>>k;
for(i=0;i<m;i++){
cin>>x>>y;
G[x][y]=1;
}
for(i=1;i<=n;i++){
r[0]=i;
parcurge(i,1);
}
if(q) cout<<"Nu exista";
}