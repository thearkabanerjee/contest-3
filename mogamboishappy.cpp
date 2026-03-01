# include <iostream>
using namespace std;

int main(){
    string a;
    cin >> a;

    string hour = a.substr(0,2);
    string mins = a.substr(3,2);

    if (hour == mins){
        cout << "Mogambo is happy"<< endl;
    }
    else{
        cout << "Mogambo is sad"<< endl;
    }
    return 0;
}