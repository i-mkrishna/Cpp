#include<bits/stdc++.h>
using namespace std;

int main(){
    // freopen("mixin.txt","r",stdin);
    // freopen("mixout.txt","w",stdout);
    int n,d;
    cin >> n >> d;
    int b = n%d;
    if(b==0){
        cout << n/d << endl;
    }
    else{
        cout << n/d << " " << (n%d) << "/" << d << endl;
    }

    return 0;
}