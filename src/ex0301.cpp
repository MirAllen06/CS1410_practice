#include <iostream>
#include <string>

using namespace std;

string repChar(char, int); // function prototype
long hms_2_seconds(int, int, int);
void swapV(double& x, double& y); // function prototype

void swapV(double& x, double& y){
    double t = x;
    x = y;
    y = t;
}

long hms_2_seconds(int h, int m, int s){
    long secs = h * 3600 + m * 60 + s;
    return secs;
}

int main(){

    cout << repChar('X', 8) << endl;
    cout << hms_2_seconds(4, 56, 17) << endl;

    double x = 10.0, y = 30.0;
    swapV(x, y);
    cout << x << ", " << y << endl;

    return 0;
}

string repChar(char c, int n){
    string r = "";
    for(int i = 0; i < n; i++){
        r += c;
    }
    return r;
}   

