#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    n = 2*n+1;
    int a[n][n] = {0};
    int cnt = (n)*(n) - 1;
    
    int x[4], y[4];
    x[0] = 1, x[1] = 0, x[2] =-1, x[3] = 0;
    y[0] = 0, y[1] =-1, y[2] = 0, y[3] = 1;

    int pointX = 0, pointY = n-1; 
    int dir = 0;
    while(cnt > 0)
    {
        // a[point]
        
        while(cnt > 0 && pointX >= 0 && pointX < n && pointY >= 0 &&  pointY < n && a[pointX][pointY] == 0)
        {
            a[pointX][pointY] = cnt;
            cnt--;
            pointX+=x[dir];
            pointY+=y[dir];
            // cout<<"x="<<pointX<<" y="<<pointY<<endl;
        }
        pointX-=x[dir];
        pointY-=y[dir];
        dir = (dir+1) % 4;
        pointX+=x[dir];
        pointY+=y[dir];
    }

    for(int i = 0;i<n;i++)
    {
        for(int j = 0; j<n;j++)
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
13 14 15 16 1
12 23 24 17 2
11 22 25 18 3
10 21 20 19 4
9  8  7  6  5
*/
