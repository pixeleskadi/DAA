#include <iostream>
#include <cmath>
using namespace std;

struct P { double x,y; };

double dist(P a, P b) {
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

int main() {
    P p[] = {{9,3},{2,6},{15,3},{5,1},{1,2},{12,4},{7,2},{4,7},
             {16,5},{3,3},{10,5},{6,4},{14,6},{8,6},{11,1},{13,2}};
    int n = 16;

    double best = 1e18;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            best = min(best, dist(p[i],p[j]));

    cout << best;
}

