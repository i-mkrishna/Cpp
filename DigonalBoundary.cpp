#include<bits/stdc++.h>
using namespace std;
// int takingInput(int arr[N][N],int N){
//     for (int i = 0; i < N; i++){
//         for (int j = 0; j < N; j++){
//             cin >> arr[i][j];
//         }
//     }
// }

int digonalBoundarSum(int arr[][N],int n){
    int ans = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            // for Digonal Element
            if( (i==j) || ((i+j)<n-1)){
                ans += arr[i][j];
            }
            // for boundary condition
            else if(i == 0 || j == 0 || i == N - 1 || j == n - 1){
                ans += arr[i][j];
            }
        }
        
    }
    return ans;
}
int main(){
    int t,N;
    cin >> t;
    cin >> N;
    int arr[1000][1000] = {0};
    //takingInput(*arr,N);
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cin >> arr[i][j];
        }
    }
    cout << digonalBoundarSum(arr,N) << endl;
    return 0;
}