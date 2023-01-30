// C++ program for the above approach
#include <bits/stdc++.h>
using namespace std;

// Comparator Function
bool myCmp(string s1, string s2)
{

    // If size of numeric strings
    // are same the put lowest value
    // first
    if (s1.size() == s2.size()) {
        return s1 < s2;
    }

    // If size is not same put the
    // numeric string with less
    // number of digits first
    else {
        return s1.size() < s2.size();
    }
}

// Driver Code
int main()
{
    vector<string> v
        = { "12", "2", "10", "6", "4", "99", "12" };

    // Calling sort function with
    // custom comparator
    sort(v.begin(), v.end(), myCmp);

    // Print the vector values after
    // sorting
    for (auto it : v) {
        cout << it << " ";
    }

    cout << "\n";
}

