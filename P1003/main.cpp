#include <iostream>

using namespace std;

int main()
{
    int n,x,y,cnt=0,m=0;
    cin>>n;

    int a[n],b[n],g[n],k[n];
    for(int i=0;i<n;i++)
        cin>>a[i]>>b[i]>>g[i]>>k[i];

    cin>>x>>y;

    for(int i=0;i<n;i++)
    {
        if(x>=a[i] && x<=a[i]+g[i] && y>=b[i] && y<=b[i]+k[i])
            {cnt++;m=i;}
    }

    if(cnt==0) cout<<"-1"<<endl;
    else cout<<m+1<<endl;

    return 0;
}
