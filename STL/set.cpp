#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> st;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        st.insert(x);
    }

    // Use an iterator to traverse the set
    auto it = st.begin();
    
    for(int i = 0; i < n; i++){
        cout << *it + i << " ";
        ++it;  // Move to the next element in the set
    }

    return 0;
}
