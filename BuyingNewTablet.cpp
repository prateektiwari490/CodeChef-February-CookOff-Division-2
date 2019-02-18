#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++)
    {
        int n;
        long b;
        cin>>n>>b;
        long w[n],h[n],p[n];
        for(int i=0;i<n;i++)
        {
            cin>>w[i]>>h[i]>>p[i];
        }
        int area = 0;
        for(int i=0;i<n;i++)
        {
            if(p[i]<=b)
            {
                if(area<(w[i]*h[i]))
                {
                    area = w[i]*h[i];
                }
            }
        }
        if(area==0)
        {
            cout<<"no tablet"<<endl;
        }
        else
        {
            cout<<area<<endl;
        }
    }
}