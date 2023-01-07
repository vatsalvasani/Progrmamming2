#include<bits/stdc++.h>
using namespace std;
void Bubble_Sort(vector<int> &v1)
{
	//simple idea is compare each element in every i loop but in ith loop last i elements are sorted so don't need to comare again
	//time complexity o(n)(element are sorted),o(n^2),o(n^2)
    for(int i=0;i<v1.size()-1;i++)
    {
	    //don't need to compare last i elements.
        for(int j=0;j<v1.size()-i-1;j++)
        {
            if(v1[j]>v1[j+1])
            {
                swap(v1[j],v1[j+1]);
            }
        }
    }
}

int main(){
    vector<int> v1 = {1,2,6,8,4,5,76,9};
    Bubble_Sort(v1);
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
}