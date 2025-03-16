#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int> s = {10, 20, 30, 40, 50};

    int x = 20;

    // Finding lower bound
    auto lb = s.lower_bound(x);
    if (lb != s.end())
        cout << "Lower bound of " << x << " is " << *lb << endl;
    else
        cout << "Lower bound of " << x << " not found" << endl;

    // Finding upper bound
    auto ub = s.upper_bound(x);
    if (ub != s.end())
        cout << "Upper bound of " << x << " is " << *ub << endl;
    else
        cout << "Upper bound of " << x << " not found" << endl;

    return 0;
}