#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define err 0.001
double iterative(double x){
    return cbrt(x + 11);
}
double f(double x){
    return x * x * x - x - 11;
}
int main(){
    int i = 1;
    double x0, x1;
    cout << "f(x) = x^3 - x - 11" << endl;
    cout << "Enter the first approximation: ";
    cin >> x0;
    x1 = iterative(x0);
    cout << "\nIteration\tRoot\n";
    while (fabs(x1 - x0) > err)    {
        cout << "X" << i << "\t\t"<< fixed << setprecision(6)<< x1 << endl;
        x0 = x1;
        x1 = iterative(x0);
        i++;
    }
    cout << "X" << i << "\t\t"<< fixed << setprecision(6)<< x1 << endl;
    cout << "\nRoot after " << i<< " iterations = " << x1 << endl;
    return 0;
}
