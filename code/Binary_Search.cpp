// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(vector<int> &arr,int low,int high,int find)
{
    int mid;
    //simple idea is that till ther are two elments high and low run a while loop

    while(high-low>1)
    {
        //find a middle element
        mid = (low+high)/2;
        //if mid == find
        if(arr[mid] == find){return mid;}
        //check for < find condition
        else if(arr[mid]<find){
            //if it is then make lower index to middle + 1
            low = mid + 1;
        }
        else{
            //otherwise make higher element as mid
            high = mid;
        }

    }
    //if find is in last high or low check for this conditions
    if(arr[low] == find){return low;}
    if(arr[high] == find){return high;}

//if not present
    return -1;
}
int main() {
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int low = 0;
    int find = 4;
    int high = arr.size() - 1;
    cout<<binary_search(arr,low,high,find);
    return 0;
}