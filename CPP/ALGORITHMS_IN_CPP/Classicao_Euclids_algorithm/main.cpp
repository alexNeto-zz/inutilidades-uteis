#include <iostream>
#include <string>
#include <sstream>

using namespace std;

struct fraction{
    int numerator;
    int denomenator;
}frac;

int gcd(int u, int v){
    int r;
    while(true){
        r = u % v;
        if(r == 0)
            break;
        u = v;
        v = r;
    }

    return v;
}

int main()
{
    while(true){
        int x, y;
        string frac;
        cin >> frac;
        cout << frac[2];
        while(cin >> x && cin >> y){
            if(x > 0 && y > 0) cout << x << ' ' << y << ' ' << gcd(x, y) << endl;
            else{
                x = 0;
                y = 0;
                break;
            }
        }
    }
    return 0;
}
