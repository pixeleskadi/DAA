#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a[] = {1,5,3,9,12,14,10};
    int n = 7;

    sort(a,a+n);

    int l = 0, ans = 1;
    for(int r=0;r<n;r++) {
        while(a[r] - a[l] > 10) l++;
        ans = max(ans, r - l + 1);
    }
    cout << ans;
}

