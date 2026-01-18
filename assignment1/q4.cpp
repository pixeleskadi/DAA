#include <iostream>
using namespace std;

int main() {
    int a[] = {-2,-5,6,-2,-3,1,5,-6};
    int n = 8;

    int curr = a[0], best = a[0];

    for(int i=1;i<n;i++) {
        if(curr + a[i] > a[i]) curr = curr + a[i];
        else curr = a[i];

        if(curr > best) best = curr;
    }

    cout << best;
}

