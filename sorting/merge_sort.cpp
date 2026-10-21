#include <iostream>
using namespace std;
void merge(int a[], int l, int m, int r) {
    int temp[100], i=l, j=m+1, k=0;
    while(i<=m && j<=r) temp[k++] = (a[i] < a[j]) ? a[i++] : a[j++];
    while(i<=m) temp[k++] = a[i++];
    while(j<=r) temp[k++] = a[j++];
    for(i=l, k=0; i<=r; ++i) a[i]=temp[k++];
}
void sortArray(int a[], int l, int r) {
    if(l>=r) return;
    int m=l+(r-l)/2; sortArray(a,l,m); sortArray(a,m+1,r); merge(a,l,m,r);
}
int main() { int a[]={8,3,6,2,7,1}; sortArray(a,0,5); for(int x:a) cout<<x<<' '; cout<<'\n'; }