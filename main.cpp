#include <iostream>
#include <iomanip>   
#include <cstdlib>   //Atoi :L
using namespace std;

int main(int argc, char *argv[]) {
    int *p, *pl, *pr, i, tmp, n;

    if (argc > 1) {
        n = argc - 1;                
        p = new int[n];
        for (i = 0; i < n; i++)
         {
            p[i] = atoi(argv[i + 1]); 
        }
    } 
    else 
    {
        cout << "How many numbers? " ;
        cin >> n;
        p = new int[n];
        cout << "What are the numbers? ";
        for (i = 0; i < n; i++) {
            cin >> p[i];
        }
    }

    //Original
    pl = p;
    cout << "Original:";
    for (i = 0; i < n; i++, pl++) cout << setw(3) << *pl;
    cout << '\n';

    //Reversed
    pl = p; 
    pr = p + (n - 1);
    for (i = 0; i < n / 2; i++) {
        tmp = *pl; 
        *pl = *pr; 
        *pr = tmp;
        pl++; pr--;
    }

    //For the reveresed 
    pl = p;
    cout << "Reversed:";
    for (i = 0; i < n; i++, pl++) cout << setw(3) << *pl;
    cout << endl;

    delete[] p;
    return 0;
}
