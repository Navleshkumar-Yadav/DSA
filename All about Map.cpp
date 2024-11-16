#include<bits/stdc++.h>
using namespace std;
void explainSet(){
    set<int> st;
    st.insert(10);
    st.insert(20);
    st.insert(20);
    st.insert(40); 
    st.insert(15);
    
    // erase function'
    // st.erase(15);
    auto it = st.end();
    it--; it--;
    st.erase(it);
    
    for(auto it: st){
        cout<<it<<" ";
    }
    
       
}
int main(){
    explainSet();
    
    
}

Multiset


#include<bits/stdc++.h>
using namespace std;
void explainMultiSet(){
    multiset<int> mt;
    mt.insert(10);
    mt.insert(20);
    mt.insert(5);
    mt.insert(10);
    mt.insert(50);
    
    cout<<mt.count(10);
    cout<<endl;
   
    auto it = mt.erase(mt.find(10));
    for(auto it: mt){
        cout<<it<<" ";
    }
    

    
}
int main(){
    explainMultiSet();
    
}


unorderedSet 


#include<bits/stdc++.h>
using namespace std;
void explainUnderedSet(){
    unordered_set<int> st;
    st.insert(10);
    st.insert(2);
    st.insert(3);
    st.insert(40);
    st.insert(1);
    for(auto it: st){
        cout<<it<<" ";
    }
    
}
int main(){
    
    explainUnderedSet();
    
}





#include<bits/stdc++.h>
using namespace std;
void explanMap(){
    map<int, string> mp;
     mp.insert({5,"nadskjfnkj"});
    mp[1] = "abdc";
    mp[2] = "efgh";
    mp[3] = "ijkl";
    mp[4] = "rstv";
    // mp.insert({5,"nadskjfnkj"});
    
    
    
    for(auto it: mp){
        cout<<it.first<<"-> "<<it.second<<endl;
    }
    
}
int main(){
    explanMap();
    
    
}


unorderedMap data structure
#include<bits/stdc++.h>
using namespace std;
void explainUnorderedMap(){
    unordered_map<int , string> mp;
    mp[1] = "abcdedf";
    mp[2] = "efghhhei";
    mp[3] = "jklama";
    mp[4] = "hjniuadshbf    ewiibgfew";
    mp.insert({5,"nDIJKHCjnKJn"});
    for(auto it: mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    
}
int main(){
    explainUnorderedMap();
    
}


#include <bits/stdc++.h>
using namespace std;

void explainMultiMap() {
    multimap<int, char> mpp;

    mpp.insert({3, 'A'});
    mpp.insert({4, 'B'});
    mpp.insert({5, 'C'});
    mpp.insert({6, 'D'});
    mpp.insert({8, 'E'});
    mpp.insert({9, 'F'});

    
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl; // Fixed 
    }
}

int main() {
    explainMultiMap();
    return 0;
}
