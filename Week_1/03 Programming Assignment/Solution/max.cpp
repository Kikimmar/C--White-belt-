#include <iostream>
#include <cmath>
using namespace std;

int main(){
    // Ax2 + Bx + C = 0
    double A, B, C;
    cin >> A >> B >> C;
    double D;
    D = B * B - 4 * A * C;
    double x1, x2;
    if(A == 0){
        if (B != 0){
            cout << - C / B << endl;
        }
    }
    else if(D > 0){
        // есть два корня
        x1 = (-B + sqrt(D)) / (2 * A);
        x2 = (-B - sqrt(D)) / (2 * A);
        cout << x1 << x2 << endl;
    }
    else if(D == 0){
        //есть один корень
        x1 = (-B + sqrt(D)) / (2 * A);
        cout << x1 << endl;
    }
    else if (D < 0){
        // нет корней
        cout << "  " << endl;
    }
    return 0;
}