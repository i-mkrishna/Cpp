#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n;
    cin >> n;
    int arr[n] = {0};
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }    
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++){
        if(( i%2==0 )||( arr[i]%2 ==0 )){
            even += arr[i];
        }
        else{
            odd += arr[i];
        }
    }
    cout << even << " " << odd << endl;
    return 0;
}