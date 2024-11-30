// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    
    int x = 3, a = 2, b = 3, c = 4;
    int result = 0;
     if(c >= a && c >= a){
            for(int i = c; i < 6; i++){
                result = result + 1;
            }
    }
    // while(x > 0){
        
    //     cout<<"enter ";
    //     cin>>a;
       
    //     x--;
        
    // }
    
    // cout<<result<<endl; // result = 2
    int numerator = result;
    int denominator = 6;
     // Simplify fraction using GCD
    int divisor = gcd(result, denominator);
    numerator /= divisor;
    denominator /= divisor;

    cout << numerator << "/" << denominator << endl;
    // float d = result / 6.0;
    // cout<<d;
   
    
    return 0;
}