//N(informatics)
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m][n];
    int cnt = 0;
    for(int i = n-1;i>=0;i--)
    {
        for(int j = 0; j<m;j++)
        {
            int t;
            cin>>t;
            a[j][i] = t;
        }
    }
    for(int i = 0; i < m;i++)
    {
        for(int j = 0; j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    
    return 0;
}
