#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> ans;
    ans.push_back(191);
     ans.push_back(120);
      ans.push_back(130);
      ans.push_back(139);
        ans.push_back(129);
        
        
        //
        cout<<ans.at(0)<<" "<<endl;
        // 
        cout<<ans[2]<<" ";
        for(int i = 0 ; i<ans.size(); i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
        
        
    
        
        
        
        
        
        
        ans.erase(ans.begin()+1, ans.end()-1);
        for(auto i: ans){
            cout<<i<<" ";
            
        }
        cout<<endl;
        
        
        // reversed element in vec from begin
        ans.erase(ans.begin()+2);
        for(auto i : ans){
            cout<<i<<" ";
        }
        
        
        
        
        
        
        
        cout<<endl;
        
        
        // erase element in vec from last
        
        ans.erase(ans.end()-1);
        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
        
        
        
        
        
        
        
        reverse(ans.begin(),ans.end());
        
        
        
        for(auto i : ans){
            cout<<i<<" ";
        }
        
        
        
        cout<<endl;
        sort(ans.begin(),ans.end());
        for(auto i : ans){
            cout<<i<<" ";
        }
        
   
       
        
    
    
    
    
    
}
int main(){
    explainVector();
    
 
    return 0;
    
    
    
    
    
    
    
    
    
}










// swap two vector


#include<bits/stdc++.h>
using namespace std;
void explainVector(){
    vector<int> ans1;
  
  
   
    ans1.push_back(10);
    ans1.push_back(20);
    ans1.push_back(30);
    ans1.push_back(30);
    ans1.insert(ans1.begin()+2,8);
    ans1.insert(ans1.end(),40);
    for(auto i: ans1){
        cout<<i<<" ";
    }
   

   
    
    
  
}
int main(){
    explainVector();
  
    
}
