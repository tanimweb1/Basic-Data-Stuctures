
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[n];

        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int b[n];

        for(int i = 0; i < n; i++){
            b[i] = a[i];
        }

        sort(b, b + n);

        int count = 0;

        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                count = 1;
            }
        }

        if(count == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}
