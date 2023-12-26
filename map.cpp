#include<bits/stdc++.h>
using namespace std;

int main(){

    //can be considered like hash map thing in dsa
    //consists of key and value
    //both key and value can be of any data type

    //map stores unique keys in sorted order

    map<int,int> mpp;
    //here the first int refers to datatype of key 
    // second int refersto datatype of value

    map<int,pair<int,int>>mpp1;
    //here key is integer and value is pair of 2 integers
    //vice versa can occur

    mpp[1]=2;//internally in map it refers as
    // 1->2 for key 1 ,value is 2
    mpp.emplace(3,1);
    // 3->1  for key 3 value is 1
    mpp.insert({2,4});
    //2->4 for key 2 value is 4

    for(auto it:mpp  //prints in sorted order of key
    ){
        cout<< it.first<<" "<<it.second<<endl;
       //first prints the key and second prints the value
    }
    
    //auto it2= mpp.find(3);
    //cout<< *(it2).second; prints 1

    //it= map.upper_bound(key) returns iterator pointing at immediate next location greater than key
    //it= map.lower_bound(key) returns iterator pointing to key in container
    

    

}