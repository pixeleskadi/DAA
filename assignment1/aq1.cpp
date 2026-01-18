#include <iostream>
using namespace std;

bool ok(int a[], int n, int m, int limit) {
    int sum = 0, parts = 1;

    for(int i=0;i<n;i++) {
        if(sum + a[i] > limit) {
            parts++;
            sum = a[i];
            if(parts > m) return false;
        } else sum += a[i];
    }
    return true;
}

int main() {
    int a[] = {7,2,5,10,8};
    int n = 5, m = 2;

    int lo = a[0], hi = 0;
    for(int i=0;i<n;i++) {
        hi += a[i];
        if(a[i] > lo) lo = a[i];
    }

    int ans = hi;
    while(lo <= hi) {
        int mid = (lo + hi) / 2;
        if(ok(a,n,m,mid)) {
            ans = mid;
            hi = mid - 1;
        } else lo = mid + 1;
    }
    cout << ans;
}

