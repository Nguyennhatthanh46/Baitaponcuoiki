#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, m, res = 0, count = 1;
    int a[500][500];
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >>a[i][j];
        }
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            int x = 0;
            int cnt = 0;
            while(x < m){
                if(a[i][x] || a[j][x]) cnt++;
                x++;
            }
            if(res == cnt) count++;
            if(cnt > res) {
                res = max(res, cnt);
                count = 1;
            }
        }
    }
    cout << res << endl << count;
    return 0;
}
