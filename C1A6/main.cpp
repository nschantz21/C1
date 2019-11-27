#include <iostream>
#include <string>
using namespace std;

int main() {
    
    char test[] = "Strange characters";
    string bf("Length");
    bf += " o" + "f this is: ";
    string bf2(test + 6, test + 16);
    cout << bf << bf2.length() << ' ' << bf2;
    
    return 0;
}