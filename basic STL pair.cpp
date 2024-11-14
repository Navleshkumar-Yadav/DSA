#include<iostream>
using namespace std;
void explainPair(){
    pair<int,int> ptr1 = {2,9};

    cout<<ptr1.first<<" "<<ptr1.second<<" ";
    cout<<endl;
    
    pair<int,char> ptr2 = make_pair(9,'A');
    cout<<ptr2.first<<" "<<ptr2.second<<" ";
    cout<<endl;
    
    pair<pair<int,char>, int> ptr3 = {{5,'B'},20};
    cout<<ptr3.first.second<<endl;
    
    
}
int main(){
    explainPair();
    return 0;
    
}
