#include<bits/stdc++.h>
using namespace std;

bool Equally(int fruits){
    if (fruits%11 == 1){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    freopen("taktakin.txt","r",stdin);
    freopen("taktakout.txt","w",stdout);
    int  fruits;
    cin >> fruits;
    int equally = 0;
    int fullMoon = 0;

    while (!Equally(fruits)){
        fullMoon += 1;
        fruits = 2*fruits;
    }
    cout << fullMoon << " " << fruits << endl;
    
    return 0;
}