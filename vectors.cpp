#include<bits/stdc++.h>
using namespace std;
int main(){
 //better than array because of dynamic nature ,array fixed length,vector length can be increased
vector <int> v;//creates an empty container

//pushes back an element to the end of empty container
//constructs a temp and then copies the element to the new box made at the end of vector then deconstructs temp
v.push_back(1000);


//directly copies to the last block without copying in to temp
v.emplace_back(500);//faster than pushback
v.emplace_back(20);
v.emplace_back(40);


vector<pair<int,int>> vect;
vect.push_back({5,40});
vect.emplace_back(6,10);

//other ways to define vector
// vector<int> v(5,100);//creates 5 instances of 100 like {100,100,100,100,100}

// vector<int> v(5);//creates 5 instances of zero

vector<int> v1(5,20);;
//to copy this vector in other vector v2
vector<int> v2(v1);


//v.begin() gives the memory address and *(v.begin()) helps us to get the value at that location 
//v.begin() points to first element of v
//v.end() points to location after the last element
//v.back()points at last element

for(vector<int>::iterator it=v.begin();it!=v.end();it++)
{
    cout<<*(it)<<" ";
}
for(auto it=v.begin();it!=v.end();it++)
{
    cout<<*(it)<<" ";
}

//deletion of elements
//suppose we have {10,20,30,40,50,60}
v.erase(v.begin()+1);//deletes 20//new {10,30,40,50,60}
v.erase(v.begin()+2,v.begin()+4);//start to end(after the element)//new {10,60}


//inserting element
vector<int> p(2,100);//{100,100}
p.insert(p.begin(),300);//{300,100,100} insert at that position
p.insert(p.begin()+1,2,10);//{300,10,10,100,100}insets 2 10s

//inserting a vector to another vector
vector<int> copy(2,50);
p.insert(p.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}


v.size();// gives number of elements
v.pop_back() ;//removes last element
v1.swap(v);//swaps 2 vectors
v.clear();//erases entire vector











}
