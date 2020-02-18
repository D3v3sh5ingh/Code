#include <iostream>
#define N 1000000
using namespace std;
int n;
int d[N];
int ans;

void input() {
    cin >> n;
    for(int i = 0; i < n; ++i) {
    cin >> d[i];
    }
}

void precalc() {
    int mx = 0;
    for(int i = 0; i < n; ++i) {
    d[i] = mx = max(mx, i + d[i]);
    }
}

int calc() {
    int i = 0;
    int res = 0;
    while(i < n) 
    {
    if(i == d[i]) return -1;
    i = d[i], res++;
    }
    return res;
}

int main() {
int t;
cin>>t;
while(t--){
    input();
    precalc();
    ans = calc();
    if(ans == -1) cout << "No solution\n";
    else cout << ans << "\n";
    }
    return 0;
}