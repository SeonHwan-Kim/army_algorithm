#include <iostream>

using namespace std;

int main(void) {
    int A, B, V, day;

    cin >> A >> B >> V;
    if((V - A) % (A - B) == 0)
        day = (V - A)/(A - B);
    else
        day = (V - A)/(A - B) + 1;
    cout << day + 1;
}