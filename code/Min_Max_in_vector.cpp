// C++ program to find the min and max element
// of Vector using *min_element() in STL

#include <bits/stdc++.h>
using namespace std;

int main()
{
// Get the vector
vector<int> a = { 1, 45, 54, 71, 76, 12 };

// Print the vector
cout << "Vector: ";
for (int i = 0; i < a.size(); i++)
	cout << a[i] << " ";
cout << endl;

// Find the min element
cout << "\nMin Element = "
	<< *min_element(a.begin(), a.end());

// Find the max element
cout << "\nMax Element = "
	<< *max_element(a.begin(), a.end());
return 0;
}
