#include<bits/stdc++.h>

using namespace std;

int main(){
    queue<int> fila;
    queue<int> aux;
    int n;
    while(cin >> n){
        if(n == 0) break;

        while(!fila.empty())
            fila.pop();

        while(!aux.empty())
            aux.pop();

        for(int i = 1; i <= n; i++){
            fila.push(i);
        }
        while(fila.size() >= 2){
            aux.push(fila.front());
            fila.pop();
            fila.push(fila.front());
            fila.pop();
        }

        cout << "Discarded cards: ";
        while(aux.size() >=2 ){
            cout << aux.front() << ", ";
            aux.pop();
        }
        cout << aux.front() << endl;
        cout << "Remaining card: " << fila.front() << endl;
    }
    return 0;
}