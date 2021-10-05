//K informatics
#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    int cnt = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<m;j++)
        {
            a[i][j] = 0;
        }
    }

    for(int i = 0;i<n;i++)
    {
        if(i % 2 != 0) {
            for(int j=m-1;j>=0;j--)
            {
                a[i][j] = cnt;
                cnt++;
            }
        }
        else {
            for(int j=0;j<m;j++)
            {
                a[i][j] = cnt;
                cnt++;
            }
        }
    }
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (a[i][j] < 10 ) cout << "   ";
            else if (a[i][j] < 100) cout << "  ";
            else if (a[i][j] < 1000) cout << " ";
            cout << a[i][j];
        }
        cout<<endl;
    }
    
    return 0;
}

/*
   0  1  2  3  4  5  6  7  8  9
0  0  1  3  6 10 14 18 22 26 30
1  2  4  7 11 15 19 23 27 31 34
2  5  8 12 16 20 24 28 32 35 37
3  9 13 17 21 25 29 33 36 38 39
*/
