#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
int n,k,q;
cin>>n>>k>>q;
int a[n];
for(int i = 0;i<n;i++){
    cin>>a[i];
}
while(q--){
    int in;
    cin>>in;
    cout<<a[(in - k+n)%n]<<endl;
}
}
