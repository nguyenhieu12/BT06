#include <iostream>

using namespace std;

long long sum = 0;

long long test(int n){
     int arr[10000] = {100};
     if(n==0) return 100;
     else return sum + test(n - 1);
}

int main(){
    int n = 9999;
    cout << test(n);
    return 0;
}
