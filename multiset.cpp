#include<bits/stdc++.h>
using namespace std;

int main(){


    multiset<int>ms;
    //sorted but not unique
    //{1,1,1,2,2,3,3,3,3}
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}

    ms.erase(1);//{ } all ones erased

    //if i only want to delete 1 ,2,3 occurence of 1
    ms.erase(ms.find(1));//erases address of 1st 1

   // ms.erase(ms.find(1),ms.find(1)+2);

}