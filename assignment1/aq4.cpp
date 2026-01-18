#include <iostream>
using namespace std;

int main() {
    int a[] = {1,3,2,4,5};
    int n = 5, A = 3, k = 1;

    int cnt = 0, ans = 0;
    for(int i=0;i<n;i++) {
        cnt = 0;
        for(int j=i;j<n;j++) {
            if(a[j] > A) cnt++;
            if(cnt == k) ans++;
        }
    }
    cout << ans;
}

