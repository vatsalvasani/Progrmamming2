// Find Last Digit

// Bookmark
// Easy
// 8.1% Success

// 46

// 7
// Asked In:
// Accenture
// Problem Description
 
 

// Find last digit of the number AB.
// A and B are large numbers given as strings.


// Problem Constraints
// 1 <= |A| <= 105
// 1 <= |B| <= 105


// Input Format
// First argument is a string A.
// First argument is a string B.


// Output Format
// Return an integer.


// Example Input
// Input 1:
// A = 2
// B = 10
// Input 2:
// A = 11
// B = 11


// Example Output
// Output 1:
// 4
// Output 2:
// 1


// Example Explanation
// Explanation 1:
// 210 = 1024, hence last digit is 4.
// Explanation 2:
// 1111 = 285311670611, hence last digit is 1.
int Solution::solve(string a, string b) {
    int n = b.size();
       if(b == "0")
            return 1;
       int base = a.back()-48;
       int power = stoi((n == 1) ? b : b.substr(n-2, n));
       power %= 4;
       
       unordered_map<int,vector<int>>mp;
       mp.insert({0,  {0,0,0,0}});
       mp.insert({1,  {1,1,1,1}});
       mp.insert({2,  {2,4,8,6}});
       mp.insert({3,  {3,9,7,1}});
       mp.insert({4,  {4,6,4,6}});
       mp.insert({5,  {5,5,5,5}});
       mp.insert({6,  {6,6,6,6}});
       mp.insert({7,  {7,9,3,1}});
       mp.insert({8,  {8,4,2,6}});
       mp.insert({9,  {9,1,9,1}});
       
       return mp[base][(power == 0) ? 3 : power-1];
}