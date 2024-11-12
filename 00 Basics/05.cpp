#include<iostream>
using namespace std;
void println(int n){
    int start = 0 ;
    for(int i = 1; i<=n ; i++){
        if(i%2==0){
            start = 1;
        }
        else{
            start = 0;
        }
        for(int j = 1 ; j<=i ; j++){
            cout<<start<<" ";
            start = 1-start;
            
         
            
        }
        cout<<endl;

        
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    println(n);
    
}