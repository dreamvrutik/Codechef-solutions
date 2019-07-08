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
int mod=1e9+7;
int modexpo(int x, unsigned int y)
{
    int res = 1;      // Initialize result

    x = x % mod;  // Update x if it is more than or
                // equal to p

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % mod;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % mod;
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
        int n,q;
        cin>>n>>q;
        //up(n,a);
        int a[n+1];
        for(int i=1;i<=n;i++)
            a[i]=i;
        int s=0;
        int d,b,c;
        int me=0;
        set<int>f;
        while(q--)
        {
            cin>>d>>b;
            me=0;
            if(d==2)
                cin>>c;
            if(d==1)
            {
                a[b+s]=0;
            }
            else
            {
                int l=b+s;
                int r=c+s;
                while(a[r]==0 &&r>=l)
                    r--;
                if(r<l)
                    r=0;
                cout<<r<<endl;
                s+=r;
                s=s%n;
            }
            //cout<<"S="<<s<<endl;
        }

    }
}
