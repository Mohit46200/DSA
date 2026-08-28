#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

double myPow(double x, int n) {             //Using binary form
        double ans = 1;
        long power = n;
        if(power<0){
            x=1/x;
            power=(-1)*power;
        }
        while(power>0){
            if(power%2 == 1){
                ans = ans * x;
            }
            x = x*x;
            power = power/2;
        }
        return ans;
    }

int main() {
    double x = 2.465465;
    int n = 5;
    cout<<(myPow(x,n))<<"\n";

}