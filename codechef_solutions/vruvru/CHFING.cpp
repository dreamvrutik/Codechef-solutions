#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define int long long
#define endl "\n"
#define double long double
#define mod 1000000007
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
int32_t main()
{
	IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int m1=k;
        int m2=(n+k-1)%mod;
        int d=m1-m2;
        int a=((2*m1)%mod-m2-1+100*mod)%mod;
        int l=m1/(m2-m1);
        l=(((l+1)*m1)%mod-((l*m2)%mod)+100*mod)%mod;
        int m;
        m=l-a;
        m/=d;
        m+=1;
        int s=(((m)*(a+l))/2)%mod;
        s+=m1-1;
        cout<<s%mod<<endl;
    }
}
