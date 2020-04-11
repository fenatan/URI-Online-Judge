#include<bits/stdc++.h>

using namespace std;

bool func(pair<pair<int, int>, string> a, pair<pair<int, int>, string>b){
    if(a.first.first > b.first.first) return true;

    if(a.first.first == b.first.first)
        if(a.first.second < b.first.second) return true;

    return false;
}

int main(){
    int n;
    string s, aux;
    vector<pair<pair<int, int>, string>> v;

    cin >> n;
    getchar();
    for(int k = 0; k < n; k++){
        getline(cin, s);
        s+=" ";
        int first = 0;
        int j = 0;

        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                aux = s.substr(first, i-first);
                v.push_back({{aux.size(), j}, aux});
                first = i+1;
                j++;
            }
        }
           

        sort(v.begin(), v.end(), func);
        int tam = v.size();
        for(int i = 0; i < tam-1; i++)
            cout << v[i].second << " ";
        cout << v[tam-1].second << endl;
        v.clear();
    }
    
    return 0;
}