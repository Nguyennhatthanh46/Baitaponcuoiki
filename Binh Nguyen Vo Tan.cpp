#include <iostream>
using namespace std;
#define MAX 500

int main()
{
    int n, m; cin >> n >> m;
    int a[MAX][MAX];
    for (int t = 0; t < n; t++)
    {
        for(int i = 0; i < m; i++)
        {
            cin >> a[t][i];
        }
    }
    int nv = 0, doi = 0;
    for (int i = 0; i < n; i++)
    {
        for(int k = i+1; k <n; k++)
        {
            int dem = 0;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] | a[k][j])
                {
                    dem++;
                }

                if (dem > nv)
                {
                    nv = dem;
                    doi = 1;
                }
                else if(dem == nv)
                {
                    doi++;
                }
            }
        }
    }
    cout << nv << endl << doi;
    return 0;
}
