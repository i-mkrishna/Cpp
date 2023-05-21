#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[100001] = {0};
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n/2; i++){
        // int ans = (arr[i]+arr[n-i]);
        // int groups = ans/10;
        // int left_people = ans%10;
        cout << (arr[i]+arr[(n-i)-1])/10 << " " << (arr[i]+arr[(n-i)-1])%10 << endl;
    }
    return 0;
}