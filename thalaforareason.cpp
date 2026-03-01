#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

    int arr[T];

    for (int i = 0; i < T; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < T; i++){

        string m = to_string(arr[i]);
        int sum = 0;

        for (int j = 0; j < m.length(); j++){
            sum += m[j] - '0';
        }

        if (sum == 7){
            cout << "Thala for a reason" << endl;
        }
        else{
            cout << "Blocked for no reason" << endl;
        }
    }

    return 0;
}