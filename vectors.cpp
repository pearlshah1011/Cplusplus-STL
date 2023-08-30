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

for(vector<int>::iterator it=v.begin();it!=v.end();it++)
{
    cout<<*(it)<<" ";
}
for(auto it=v.begin();it!=v.end();it++)
{
    cout<<*(it)<<" ";
}






}
