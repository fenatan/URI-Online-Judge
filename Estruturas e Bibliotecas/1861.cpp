#include<bits/stdc++.h>

using namespace std;

int main(){
    map<string,int> murderers;
    set<string> murdered;
    string s1, s2;

    while(cin >> s1 >> s2){
        murdered.insert(s2);
        murderers[s1] ? murderers[s1]++ : murderers[s1] = 1; 
    }

    cout << "HALL OF MURDERERS\n";

    for(auto x : murderers){
        if((x.second <= 0) or !(murdered.find(x.first) == murdered.end())) continue;
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}