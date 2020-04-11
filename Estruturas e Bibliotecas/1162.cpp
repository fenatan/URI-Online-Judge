#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n, v[55];

    cin >> t;
    for(int i = 0; i < t; i++){
        int cont = 0;
        cin >> n;
        for(int j = 0; j < n; j++)
            cin >> v[j];
        for(int k = 0; k < n; k++){
            for(int l = k+1; l < n; l++){
                if(v[k] > v[l]){
                    int aux = v[k];
                    v[k] = v[l];
                    v[l] = aux;
                    cont++;
                }
            }
        }

        cout << "Optimal train swapping takes " << cont <<  " swaps.\n";
    }
}