#include<bits/stdc++.h>
using namespace std;

int min(int arr[],int n){
    int ans = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] < ans){
            ans = arr[i];
        }
    }
    return ans;
}
int max(int arr[],int n){
    int ans = arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i] > ans){
            ans = arr[i];
        }
    }
    return ans;
}

int main(){
    freopen("dishin.txt","r",stdin);
    freopen("dishout.txt","w",stdout);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    cout << min(arr,n) << " " << max(arr,n) << " " << sum/n << endl;
    return 0;
}