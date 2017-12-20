#include <iostream> 
using namespace std;
int main()
{
        int n,m, i, j;
        cout << "enter n";
        cin >> n;
        cout << "enter m:";
        cin >> m;
        int A[n][m];
        int B[n][m];
        cout << "Enter first massive's elements:"<< endl;
        for (int i=0; i<n;i++)
        for (int j=0; j<m;j++)
        cin >> A[i][j];
        cout << "Enter second massive's elements"
        for (int i=0; i<n; i++)
        for (int j=0; j<m; j++)
        cin >> B[i][j];
        for (int i=0; i<n;i++)
        {
                for (int j=0;j<m; j++)
                cout << A[i][j] + B[i][j];

        }
        return 0;
}

