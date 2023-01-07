#include<bits/stdc++.h>
using namespace std;
void Selection_Sort(vector<int> &arr){
    //simple idea is to manage two array 1 is sorted and one in unsorted Time Complexity In All The Case Is O(n^2)
    //run loop till n-1
    for(int i=0;i<arr.size()-1;i++)
    {
        //take remaining array's first element as min
        int min = arr[i];
        //run a loop till n from i+1
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[j]<min)
            {
                swap(arr[j],arr[i]);
            }
        }
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    

}
int main(){
    vector<int> arr={1,2,3,4,2,111,12343,34};
    Selection_Sort(arr);
    return 0;
}