//https://www.pbinfo.ro/probleme/817/zero
void zero(int n, int a[]){
    int par[51], imp[51], ip = 0, ii = 0;
    for(int i = 1; i <= 2 * n; ++i)
        if(a[i] % 2 == 0)
            par[++ip] = a[i];
        else
            imp[++ii] = a[i];
    ip = 1;
    ii = 1;
    for(int i = 1; i <= 2 * n; ++i)
        if(i % 2 == 0)
            a[i] = par[ip], ip++;
        else
            a[i] = imp[ii], ii++;
}
