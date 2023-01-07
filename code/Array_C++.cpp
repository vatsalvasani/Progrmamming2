#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    int n=5;
    sort(arr,arr+n,greater<int>());
    cout<<arr[0];
    return 0;
}