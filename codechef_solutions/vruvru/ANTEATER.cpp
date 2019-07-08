#include<bits/stdc++.h>
#pragma GCC optimize ("-O2")
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define endl "\n"
#define int long long
#define double long double
using namespace std;
void pairsort(int a[], int b[], int n)
{
    pair<int, int> pairt[n];


    for (int i = 0; i < n; i++)
    {
        pairt[i].first = a[i];
        pairt[i].second = b[i];
    }

    sort(pairt, pairt + n);

    for (int i = 0; i < n; i++)
    {
        a[i] = pairt[i].first;
        b[i] = pairt[i].second;
    }
}
bool isPrime(int n){

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0)
         return 0;
               //   cout<<i;
    }
    return 1;
}
int factorial(int n)
{
    int i=1;
    for(int j=1;j<=n;j++)
        i*=j;
    return i;
}
int nCr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}

// Returns factorial of n

double modd(double x)
{
    if(x>=0)
        return x;
    return -1*x;
}
int dp(int y)
{
    int s=0;
    while(y!=0)
    {
        int r=y;
        s+=r;
        y/=10;
    }
    if(s==0)
        return 1;
    return 0;
}
int sd(int n)
{
    int s=0;
    while(n!=0)
    {
        s+=n;
        n/=10;
    }
    return s;
}
int mod = 1e9+7;
int modexpo(int x,int p){
    int res = 1;
    x = x%mod;
    while(p){
        if(p%2)
            res = res * x;
        p >>= 1;
        x = x*x % mod;
        res %= mod;
    }
    return res;
}

int32_t main()
{
    IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char a[n][m];
        map<pair<int,int>,vector<int> > x;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            int g=max(n,m);
            for(int k=0;k<g;k++)
            x[{i,j}].push_back(0);

        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(a[i][j]!='-' && a[i][j]!='#')
                {
                    int k;
                    if(a[i][j]=='U')
                    {
                        k=i;
                        int ct=0;
                        for(k=i;k>=0;k--)
                        {
                            if(a[k][j]=='#')
                                break;
                            x[{k,j}][ct]++;
                            ct++;
                        }
                    }
                    else if(a[i][j]=='D')
                    {
                        k=i;
                        int ct=0;
                        for(k=i;k<n;k++)
                        {
                            if(a[k][j]=='#')
                                break;
                            x[{k,j}][ct]++;
                            ct++;
                        }
                    }
                    else if(a[i][j]=='L')
                    {
                        k=j;
                        int ct=0;
                        for(k=j;k>=0;k--)
                        {
                            if(a[i][k]=='#')
                                break;
                            x[{i,k}][ct]++;
                            ct++;
                        }
                    }
                    else if(a[i][j]=='R')
                    {
                        k=j;
                        int ct=0;
                        for(k=j;k<m;k++)
                        {
                            if(a[i][k]=='#')
                                break;
                            x[{i,k}][ct]++;
                            ct++;
                        }
                    }
                }
            }
        }
        int g=max(n,m);
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                for(int k=0;k<g;k++)
                {
                    if(x[{i,j}][k])
                        ans+=nCr(x[{i,j}][k],2);
                }
            }
        }
        cout<<ans<<endl;
    }
}
