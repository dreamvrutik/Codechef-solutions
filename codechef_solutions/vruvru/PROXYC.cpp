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

int32_t main()
{
	IOS;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        double per=0;
        double p=0;
        for(int i=0;i<n;i++)
            if(s[i]=='P')
                p++;
        per=(double)p/n;
        if(per>=0.75)
        {
            cout<<0<<endl;
        }
        else
        {
            int ct=0,f=0;
            if(n>4)
            {
                for(int i=2;i<=n-3;i++)
                {
                    if(s[i]=='A' && (s[i-1]=='P' || s[i-2]=='P') && (s[i+1]=='P' || s[i+2]=='P'))
                    {
                        p++;
                        ct++;
                    }
                    per=p/n;
                    if(per>=0.75)
                    {
                        cout<<ct<<endl;
                        f=1;
                        break;
                    }
                }
            }
            if(!f)
                cout<<-1<<endl;
        }
    }
}
