// #include<iostream>
// using namespace std;
// int main(){
//         cout<<"Ram";
// }


#include<iostream>
using namespace std;
int main(){
        int n,m;
        cout<<"Enter the number: "<<endl;
        cin>>n>>m;
        for(int i = 0; i<n ; i++){
                for(int j = i ; j<=m ; j++){
                        cout<<"*";
                }
                cout<<endl;

        }

}