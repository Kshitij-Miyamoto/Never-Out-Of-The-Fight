#include<iostream>
using namespace std ; 
int main()
{
    string s = "Kshitij Sharma "  ; 
    string sub = "sh" ; 
    if (s.find(sub) != string::npos) {
    cout << "Found! at " <<s.find(sub) <<  endl;
} else {
    cout << "Not found." << endl;
}
string search = "NewMewNew";
    string substring = "New";

    size_t pos = search.find(substring);
    while (pos != string::npos) {
        cout << "Found at: " << pos << endl;
        pos = search.find(substring, pos + 1); // search again after the last found index
    }
return 0; 
}