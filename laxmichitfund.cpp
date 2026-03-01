# include <iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int arr[a];

    for (int i =0; i< a; i++){
        cin >> arr[i];
    }

    int total = 0;
    int min = arr[0];
    int max = arr[0];
    int avg = 0;
    for (int i  = 0; i< a; i++){
        total += arr[i];
    }
    for (int i  = 0; i< a; i++){
        if (arr[i] > max){
            max = arr[i];
        }
    }
    for (int i = 0; i< a; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }

    avg = total/a;
    cout << total << " "<< max<< " "<< min << " "<< avg<< endl;
    return 0;
}