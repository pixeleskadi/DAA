#include <iostream>
using namespace std;

int part(int a[], int l, int r) {
    int pivot = a[r];
    int i = l - 1;

    for(int j=l;j<r;j++) {
        if(a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }
    swap(a[i+1], a[r]);
    return i+1;
}

void quickSort(int a[], int l, int r) {
    if(l < r) {
        int p = part(a, l, r);
        quickSort(a, l, p-1);
        quickSort(a, p+1, r);
    }
}

int main() {
    int a[] = {4,2,6,9,2};
    quickSort(a,0,4);

    for(int i=0;i<5;i++) cout<<a[i]<<" ";
}

