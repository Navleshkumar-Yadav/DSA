#include<iostream>
using namespace std;
void print8(int n){
    for(int i = 1 ; i<=n ; i++){
        for(int j = 1 ; j<=n-i; j++){
            cout<<" ";
        }
        for(int j = 1 ; j<=2*n-i; j++){
            cout<<"*";
        }
        for(int j = 1 ; j<=n-i; j++){
            cout<<" ";
        }
       
        cout<<endl;
    }
    
}
void print9(int n){
    for(int i =n ; i>=1 ; i--){
        for(int j = 1 ; j<=n-i ; j++){
            cout<<" ";
        }
        for(int j = 1 ; j<=2*n-i; j++){
            cout<<"*";
        }
         for(int j = 1 ; j<=2*n-i; j++){
            cout<<"*";
        }
       
        
        cout<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter the name: "<<endl;
    cin>>n;
  
    
    
    print8(n);
    print9(n);
    
    
}
   