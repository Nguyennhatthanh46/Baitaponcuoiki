#include <bits/stdc++.h>
using namespace std;

void tanggiam(char c, int &sum){
    if(c == 'U') sum += 1;
    else sum -= 1;
}

int main(){
    int k; cin >> k;
    char a[k];
    for(int i = 0; i < k; i++){
        cin >> a[i];
    }
    int sum = 0, dem = 0;
    for(int i = 0; i < k; i++){
        tanggiam(a[i], sum);
        if(sum < 0){
            sum++;
            while(i < k){
                tanggiam(a[i], sum);
                if(sum == 0){
                    dem++;
                    break;
                }
                i++;
            }
        }
    }
    cout << dem << endl;
}
