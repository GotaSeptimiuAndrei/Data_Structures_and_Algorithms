//https://www.pbinfo.ro/probleme/421/graf-partial-1

#include<iostream>
#include<fstream>
using namespace std;
ifstream f("graf_partial_1.in");
ofstream g("graf_partial_1.out");
int a[101][101],b[101],n,x,y,cnt,m,k;
int main()
{
    int M=0,m,nr=0;
   f>>n;
   m=n;
 while(f>>x>>y)
    {

    if(a[x][y]==0){
            a[x][0]++;
            a[y][0]++;
    }
        a[x][y]=1;
        a[y][x]=1;
    }
    for(int i=1;i<=n;i++)
    {
       if(a[i][0]<m)
           m=a[i][0];
        if(a[i][0]>M)
            M=a[i][0];
    }
    nr=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i][0]==m)
            for(int j=1;j<=n;j++)
            if(a[j][0]==M && a[i][j]==1)
        {
            a[i][j]=0;
            a[j][i]=0;
            ++nr;
        }
    }
    g<<nr<<'\n';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
          g<<a[i][j]<<' ';
        g<<'\n';
    }
}
