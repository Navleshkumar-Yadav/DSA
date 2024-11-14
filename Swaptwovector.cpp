








#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> ans1;
    vector<int> ans2;
  
   
    ans1.push_back(10);
    ans1.push_back(20);
    ans1.push_back(30);
    ans1.push_back(30);
    
 
    
    // vector<int> ans2;

   
    ans2.push_back(40);
    ans2.push_back(50);
    ans2.push_back(60);
    ans2.push_back(70);

    swap(ans2,ans1);
    
    
    for(auto i: ans1){
        cout<<i<<" ";
    }
    cout<<endl;

    
    for(auto it: ans2){
        cout<<it<<" ";
    }
    
    
  
}
int main(){
    explainVector();
  
    
}
