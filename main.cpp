
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, *pl, *pr, *p, tmp , i;
    cout << "How many numbers: ";
    cin >> n;

    p = new int[n];       
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> p[i];          
    }

    pl = p;
    cout << "Original:  ";
    for (int i = 0; i < n; i++,pl++) {
        cout << setw(3) << *pl;
    }
        cout << endl;

    }
    
    //reversed
    pl = p;
    cout << "Reversed:  ";
    for (int i = 0; i < n; i++, pl++) {
        cout << setw(3) << *pl;
    }
    cout << endl;

    delete[] p; // free the rest memory
    return 0;
