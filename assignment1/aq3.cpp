#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1,2,3,4};

    while(a.size() > 2) {
        vector<int> med;

        for(int i=0;i+2<=a.size();i++) {
            vector<int> t = {a[i], a[i+1], a[i+2]};
            sort(t.begin(), t.end());
            med.push_back(t[1]);
        }

        int mn = *min_element(med.begin(), med.end());
        for(int i=0;i<a.size();i++) {
            if(a[i] == mn) {
                a.erase(a.begin()+i);
                break;
            }
        }
    }

    int sum = 0;
    for(int x:a) sum+=x;
    cout << sum;
}

