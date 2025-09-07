#include <iostream>
#include <string>

using namespace std;

int main(){
    string day;

    cout << "Enter day:" << endl;
    cin >> day;

    if(day == "sun" || day == "sat"){
        cout << "It's a weekend." << endl;
    } else {
        cout << "It's a weekday." << endl;
    }

    return 0;
}