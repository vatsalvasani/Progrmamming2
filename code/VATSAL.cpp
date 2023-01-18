
// //-------------unordered set---------------
// //characteristic :- it store the element in any order No Particular Order

// //create --> insert
// //read --> itr(s1.begin(),s1.end())
// //update --> count or find
// //delete --> erase or clear

// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     unordered_set<int> us1;
//     //c
//     us1.insert(2);
//     us1.insert(1);
    
//     //u
//     if(us1.count(1)){
//         cout<<"present"<<endl;
//     }
//     else{cout<<"Not Present"<<endl;}
    
//     //d
//     us1.erase(1);
    
//     if(us1.count(1)){
//         cout<<"present"<<endl;
//     }
//     else{cout<<"Not Present"<<endl;}
    
//     //r
//     auto itr = us1.begin();
//     while(itr!=us1.end()){
//         cout<<*itr;
//         itr++;
//     }
    
//     return 0;
// }



// //---------------------------------------------------------------
// //------------------------vector---------------------------------
// //create --> push_back,pop_back,insert
// //read --> for loop or iterator  v1.front(),v1.back()
// //update --> 
// //delete --> v1.erase,v1.delete
// //reverse
// //sort
// //upper_bound
// //lower_bound
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v1;
    
//     //c
//     v1.push_back(3);
//     v1.push_back(5);
//     v1.pop_back();
//     v1.insert(v1.begin()+1,4);
    
//     //r
//     for(auto i:v1){
//         cout<<i<<" ";
//     }
//     cout<<v1.front()<<v1.back()<<" ";
    
//     //d
//     v1.erase(v1.begin());/////////////////////////
    
//     for(auto i:v1){
//         cout<<i<<" ";
//     }
    
//     v1.push_back(1);
//     v1.push_back(2);
//     v1.push_back(3);
//     v1.push_back(44);
    
//     sort(v1.begin(),v1.end(),greater<int>());
//     reverse(v1.begin(),v1.end());
    
//     for(auto i:v1){
//         cout<<i<<" ";
//     }
    
//     auto it1 = upper_bound(v1.begin(),v1.end(),4);
//     auto it2 = lower_bound(v1.begin(),v1.end(),3);
//     cout<<" "<<*it1<<*it2;
    
// }






//---------------------------------------------------------------
//------------------------SET---------------------------------
//characteristic : store in Ascending order
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     set<int> s1;
//     //c
//     s1.insert(1);
//     s1.insert(2);
//     s1.insert(5);
//     s1.insert(3);
//     s1.insert(4);
//     //r
//     auto itr = s1.begin();
//     while(itr!=s1.end())
//     { 
//         cout<<*itr<<" ";
//         itr++;
//     }
//     //u
//     if(s1.count(4)){cout<<"Yes";}
//     else{cout<<"No";}
//     //d
//     s1.erase(5);
//     itr= s1.begin();
//     while(itr!=s1.end())
//     { 
//         cout<<*itr<<" ";
//         itr++;
//     }    
//     cout<<*s1.begin()<<" "<<*s1.end();
//     return 0;
// }



//---------------------------------------------------------------
//------------------------UNORDERED MULTISET---------------------------------
//characteristic : store in Any order But It Can Store Duplicate Also



//---------------------------------------------------------------
//------------------------MULTISET---------------------------------
//characteristic : store in Ascending order But It Can Store Duplicate Also



// //---------------------------------------------------------------
// //------------------------UNORDERED MAP---------------------------------
// //characteristic : store in Ascending order But It Can Store Duplicate Also

// //create --> a.insert({'a',1});  or a['a']=1;
// //read --> itr->first itr->second;
// //update --> count and find
// //delete --> erase
// //sort or sort acording to second value
// //reverse
// //lower_bound
// //upper_bound with key
// #include<bits/stdc++.h>
// using namespace std;
// bool withsecond(pair<int,string> &a,pair<int,string> &b){
//     return a.second < b.second;
// }
// int main(){
//     unordered_map<int,string> m1;
//     //c
//     m1.insert({1,"Vatsal"});
//     m1[2] = "Vasani";
//     m1[3] = "ZAKIR";
//     //r
//     auto itr  = m1.begin();
//     while(itr!=m1.end()){
//         cout<<itr->first<<itr->second<<" ";
//         itr++;
//     }
//     //u
//     if(m1.count(1)){cout<<"Yes";}
//     else{cout<<"NO";}
//     //d
//     m1.erase(1);
//     //reverse
//     // reverse(m1.begin(),m1.end());
    
//     //sort
//     //first convert map into vector of pair
//     vector<pair<int,string>> vp;
//     itr = m1.begin();
//     while(itr!=m1.end()){
//         vp.push_back(*itr);
//         itr++;
//     }
    
//     sort(vp.begin(),vp.end());//with first value
//     itr  = vp.begin();
//     while(itr!=vp.end()){
//         cout<<itr->first<<itr->second<<" ";
//         itr++;

//     }
    
//     sort(vp.begin(),vp.end(),withsecond);//with first value
//     itr  = m1.begin();
//     while(itr!=m1.end()){
//         cout<<itr->first<<itr->second<<" ";
//         itr++;

//     }
    //min_element(v1.begin(),v1.end()) and same for max_element are same

//     return 0;
// }



// //---------------------------------------------------------------
// //------------------------LIST---------------------------------
// //characteristic : LINKED LIST

//create --> pop_back,push_back,pop_front,push_front
//read --> front,back, itrator

//reverse -> v1.reverse() 
//sort -> v1.sort()
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     list<string> l1;
//     //create
//     l1.push_back("atsal");
//     l1.push_front("vasani");
//     l1.push_back("Bharatbhai");
    
//     //read
//     auto itr = l1.begin();
//     while(itr!=l1.end()){
//         cout<<*itr<<" ";
//         itr++;
//     }
    
//     l1.pop_back();
//     itr = l1.begin();
//     while(itr!=l1.end()){
//         cout<<*itr<<" ";
//         itr++;

//     }    
//     l1.sort();
//     itr = l1.begin();
//     while(itr!=l1.end()){
//         cout<<*itr<<" ";
//         itr++;

//     }    
    
//     l1.reverse();
    
//     itr = l1.begin();
//     while(itr!=l1.end()){
//         cout<<*itr<<" ";
//         itr++;

//     }    
//     return 0;
// }




// //---------------------------------------------------------------
// //------------------------LIST---------------------------------
// //characteristic : DOUBLY LINKED LIST
// https://cplusplus.com/reference/forward_list/forward_list/
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     //swap the linked lise
//     d1.swap(d2);
//     d1.sort();
//     d1.reverse();
//     d1.remove(20);
    
//     return 0;
// }
