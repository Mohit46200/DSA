#include <iostream>
#include <math.h>
#include <iomanip>
#define bisect(a,b) (a+b)/2
#define err 0.000001
using namespace std;
float f(float x){
    return x*sin(x)-1;
}
int main(){
    int i=1,max;
    float x,x1,a,b;
    cout << "f(x)=x * sinx - 1\n";
    cout << "Enter two initial approximate roots a,b : ";
    cin >> a >> b;
    cout << "Enter max no of iterations: ";
    cin >> max;
    cout << setprecision(10) << "Iterations\tRoot\n";
    x = bisect(a,b);
    while(i < max){
        cout << i << "\t\t" << x << endl;
        if(f(a) * f(x) < 0)
            b = x;
        else
            a = x;
        x1 = bisect(a,b);
        i++;
        if(fabs(x1-x) < err){
            cout << "\nRoot after " << i
                 << " iterations=" 
                 << setprecision(10)
                 << bisect(a,b) << endl;
            return 0;
        }
        x = x1;
    }
    cout << "\nSolution Does not cover: "<< i << " iteration not sufficient";
    return 1;
}