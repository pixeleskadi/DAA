#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    while(T--) {
        int N; cin >> N;
        int mx = 0;
        for(int i=0;i<N;i++) {
            int w,h; cin>>w>>h;
            if(w > mx) mx = w;
            if(h > mx) mx = h;
        }
        cout << mx << "\n";
    }
}

