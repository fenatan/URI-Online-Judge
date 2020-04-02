#include<bits/stdc++.h>

using namespace std;

int main(){
    set <string> s;
    string aux;
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aux;
        s.insert(aux);
    }

    cout << "Falta(m) " << 151 - s.size() << " pomekon(s).\n";
    
    return 0;
}