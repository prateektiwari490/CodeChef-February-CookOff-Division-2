#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        long n;
        cin>>n;
        // cout<<"n = "<<n<<endl;
        long ar[n];
        long flagzero = 0;
        // cout<<"n = "<<n<<endl;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]==0)
            {
                flagzero++;
            }
        }
        // cout<<"n = "<<n<<endl;
        // for(int i=0;i<n;i++)
        // {
        //     if(ar[i]==0)
        //     {
        //         flagzero++;
        //     }
        // }
        long m,j=0;
        // cout<<"n = "<<n<<endl;
        // cout<<"flagzero = "<<flagzero<<endl;

        m = n-flagzero;
        // cout<<"m = "<<m<<endl;
        long a[m];
        for(int i=0;i<n;i++)
        {
            if(ar[i]!=0)
            {
                a[j]=ar[i];
                j++;
            }
        }
        sort(a,a+m);
        for(int i=0;i<m;i++)
        {
            // cout<<"a[i] = "<<a[i]<<endl;
            if(a[i]<=flagzero)
            {
                flagzero++;
            }
        }
        cout<<flagzero<<endl;
    }
}