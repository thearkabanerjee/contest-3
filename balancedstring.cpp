# include <iostream>
using namespace std;


int main(){
    string a;
    cin >> a;

    int acounter = 0;
    int bcounter = 0;
    for (int i = 0; i< a.length();i++){
        if (a[i]== 'a'){
            acounter++;
        }
        else if (a[i] =='b'){
            bcounter ++;
        }
    }

    if (acounter == bcounter){
        cout << "YES"<< endl;
    }
    else {
        cout << "NO"<< endl;
    }
    return 0;
}