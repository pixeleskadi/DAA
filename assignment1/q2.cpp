#include <iostream>
using namespace std;

void merge(int a[], int l, int m, int r) {
    int n1 = m - l + 1, n2 = r - m;
    int L[50], R[50];

    for(int i=0;i<n1;i++) L[i] = a[l+i];
    for(int i=0;i<n2;i++) R[i] = a[m+1+i];

    int i=0,j=0,k=l;
    while(i<n1 && j<n2) {
        if(L[i] <= R[j]) a[k++] = L[i++];
        else a[k++] = R[j++];
    }
    while(i<n1) a[k++] = L[i++];
    while(j<n2) a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r) {
    if(l >= r) return;
    int m = (l + r) / 2;
    mergeSort(a, l, m);
    mergeSort(a, m+1, r);
    merge(a, l, m, r);
}

int main() {
    int a1[] = {12,11,13,5,6,7};
    int a2[] = {38,27,43,3,9,82,10};

    mergeSort(a1,0,5);
    mergeSort(a2,0,6);

    for(int i=0;i<6;i++) cout<<a1[i]<<" ";
    cout<<"\n";
    for(int i=0;i<7;i++) cout<<a2[i]<<" ";
}

