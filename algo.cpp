#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> p1,pair<int,int> p2){
 //assuming p1 lies before p2
  if(p1.second<p2.second)
  {
    return true;
  }
  if(p1.second>p2.second)
  {
    return false;
  }
  if(p1.first>p2.first)
  {
    return true;
  }
  if(p1.first<p2.first)
  {
    return false;
  }
}

int main(){
    //to sort in ASCENDING order
    //suppose u have {1,3,5,2}
    //sort(a,a+n)  n=4 will sort everything
    //sort(a+2,a+4) will sort only last 2 numbers
    //sort(v.begin(),v.end());


    //to sort in DESCENDING order
    //sort(a,a+n,greater<int>);
    vector<int> v1,v2;
    v1.emplace_back(4);
    v1.emplace_back(20);
    v1.emplace_back(2);
    v1.emplace_back(35);
    sort(v1.begin(),v1.end(), greater<int>() );

    for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)
   {
    cout<<*(it)<<" ";
   }

   //to sort in MY WAY
   //example 
   pair<int,int> a[]={{1,2},{2,1},{4,1}};
   int n=3;
   //sort it according to 2nd element 
   //if 2nd element same 
   //sort it in descending order of 1st element
   
   sort(a,a+n,comp);
   //write a boolean function comp 
   for (int i=0;i<3;i++)
   {
     cout<<a[i].first<<a[i].second<<" ";
   }

   int num=7;// 0111 in binary
   int cnt= __builtin_popcount(num);//returns 3
   cout<<cnt<<" ";

   //PRINTING ALL PERMUTATIONS
   string s1="123";
   //123 132 213 231 312 321

   do{
    cout<<s1<<endl;
   }while(next_permutation(s1.begin(),s1.end()));
   
   string s2="231";
   //231 312 321
    do{
    cout<<s2<<endl;
   }while(next_permutation(s2.begin(),s2.end()));
 
   // so if u want all permuations of a string first sort it nd then run the loop
   //sort(s.begin(),s.end())

   //MAX ELEMENT 
   //max_element(a,a+n) gives address of the element
   //*max_element(a,a+n) gives the value
}