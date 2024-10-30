#include <iostream>

using namespace std;
int main(){
     int size;

    cout << "Enter the number of rows for the triangle: ";
    cin >> size;

     for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl; 

      for (int i = 1; i <= size; ++i) {
        for (int j = 1; j <= size - i; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;



}