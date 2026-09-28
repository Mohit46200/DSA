// To find number of prime numbers in range 2 to N
#include <iostream> 
#include <vector>
#include <algorithm>
using namespace std;

 int countPrimes(int n) {
        if(n<=2) return 0;
        int cnt = n-2;
        vector<char> s(n, 1);
        for(int i = 2 ; i*i < n ; i++ ){
            if(s[i]) {
                for(int j = i*i; j<n; j+=i){
                    if(s[j]){
                        s[j] = 0;
                        cnt--;
                    }
                }
            }
        }
        return cnt;
    }


int main(){
    int num = 4240833;
    cout<<countPrimes(num);
}



