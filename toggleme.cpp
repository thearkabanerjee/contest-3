# include <iostream>
using namespace std;

int main(){
    string a;
    cin >> a;

    for (int i = 0; i< a.length(); i++){
        if (a[i] >='a' and a[i] <='z'){
            cout << char(a[i] -32);
        }
        if (a[i] >='A' and a[i] <= 'Z'){
            cout << char(a[i] +32);
        }
    }
    cout << endl;
    return 0;
}