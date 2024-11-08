// #include<iostream>
// using namespace std;
// int main(){
//         int n,m;
//         cout<<"Enter the row: "<<" ";
//         cin>>n;
//         cout<<"Enter the column: "<<" ";
//         cin>>m;
//         for(int i = 0 ; i<n ; i++){
//                 for(int j = 0 ; j<m ; j++){
//                         cout<<"*"<<" ";
//                 }
//                 cout<<endl;
//         }

// }



#include<iostream>
using namespace std;
int main(){
        int n;
        cout<<"Enter the number: " <<" ";
        cin>>n;
        int m;
        cout<<"Enter the number: "<<" ";
        cin>>m;
        for(int i = 0 ;  i<n ; i++){
                for(int j = 0 ; j<n-i-1 ; j++){
                        cout<<" ";
                }
                for(int j = 0 ; j<2*i+1; j++){
                        cout<<"*";
                }
                cout<<endl;
        }

}