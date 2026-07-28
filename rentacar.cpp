#include <iostream>
using namespace std;

int main() {
    int p;
    while(p--){
    int n, x, y, a, b;
    cin >> n >> x >> y >> a >> b;
    
    int petrolLitres = n / a;
    int dieselLitres = n / b;
    int cost1 = petrolLitres * x;
    int cost2 = dieselLitres * y;
    if (cost1 < cost2) {
        cout << "petrol";
    }
    else if (cost2 < cost1) {
        cout << "diesel";
    }
    else {
        cout << "any";
    }
}
return 0;

    
}