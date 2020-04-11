#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while(getline(cin, s)){
        int cont = 0;
        for(int i = 0; i < s.size(); i++){
            if(cont < 0)
                break;
            if(s[i] == '(')
                cont++;
            else if(s[i] == ')')
                cont--;
        }

        if(cont == 0)
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }
}