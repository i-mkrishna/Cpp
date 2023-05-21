#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("sitin.txt","r",stdin);
    freopen("sitout.txt","w",stdout);
    int r,s;
    cin >> r >> s;
    int tickets;
    cin >> tickets;
    if((r*s)>=tickets){
        cout << tickets << " " << 0 << endl;
    }
    else{
        cout << (r*s) <<" " << tickets - (r*s) << endl;
    }
    return 0;
}
