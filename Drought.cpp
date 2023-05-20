#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("rainin.txt","r",stdin);
    freopen("rainout.txt","w",stdout);
    int n,c;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int j = 0;
    while (c>0){
        c = c - arr[j];
        j++;
    }
    cout << j << endl;
    return 0;
}