#include<iostream>
using namespace std;
int main(){
        cout<<"Ram";
}


#include<iostream>
using namespace std;
int main(){
        int n,m;
        cout<<"Enter the number: "<<endl;
        cin>>n>>m;
        for(int i = 1; i<n ; i++){
                for(int j =  1; j<m ; j++){
                        cout<<"*";
                }
                cout<<endl;

        }

}


#include<iostream>
using namespace std;
int   sumFirstAndLast(int arr[] , int n){
        if(n==0){
                return 0;
        }
        return arr[0]+arr[n-1];

}
int main(){
        int n;
        cout<<"Enter the size of array: ";
        cin>>n;
        int arr[n];
        cout<<"Enter the array element: ";
        for(int i = 0 ; i<n ; i++) {
                cin>>arr[i];
        }
        int sum = sumFirstAndLast(arr,n);
        cout<<"The sum of fisrt and last element of array: "<<sum<<endl;



       
}



