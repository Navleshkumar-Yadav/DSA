#include<bits/stdc++.h>
using namespace std;
void explainSort(){
    int arr[5] = {5,2,1,9,10};
    sort(arr+1 , arr+4);
    for(int i = 0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    
    
    vector<int> ans ={2,8,1,7,3,6};
    sort(ans.begin(),ans.end());
    for(auto it : ans){
        cout<<it<<" ";
    }
}
int main(){
    explainSort();
    
}
