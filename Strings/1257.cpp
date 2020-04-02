#include <bits/stdc++.h>

using namespace std;

int main(){

    int cont, n, l;
    string s, alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> l;
        cont = 0;
        for (int j = 0; j < l; j++){
            cin >> s;
            for(int k = 0; k < s.size(); k++){
                cont+= j + k + alpha.find(s[k]);
            }
        }
        cout << cont << endl;
    }
    return 0;
}