#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int flag;

    while(getline(cin, s)){
        flag = 0;
        for(int i =0; i < s.size(); i++){
            if(s[i] == ' ') continue;
            if(flag == 0){
                s[i] = toupper(s[i]);
                flag = 1;
            }else{
                s[i] = tolower(s[i]);
                 flag = 0;
            }
        }
        cout << s << endl;
    }
    return 0;
}