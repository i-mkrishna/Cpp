#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[100] = {0};
    for (int i = 0; i < N; i++){
        cin >> arr[i];
    }
    int max[100] = {0};
    for (int i = 0; i < N; i++){
        max[i] = arr[i]-arr[0];
    }
    for (int i = 0; i < N; i++){
        if(max[0]<max[i]){
            max[0] = max[i];
        }
    }
    cout << max[0] << endl;
    return 0;
}