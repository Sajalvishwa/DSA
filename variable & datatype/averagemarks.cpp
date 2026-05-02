#include <iostream>
using namespace std;

int main() {
    int englishMarks ;
    int mathMarks ;
    int scienceMarks ;
    cout << "Enter the marks of English : " ;
    cin >> englishMarks ;
    cout << "Enter the marks of Math : " ;
    cin >> mathMarks ;
    cout << "Enter the marks of Science : " ;
    cin >> scienceMarks ;
    int averageMarks = (englishMarks + mathMarks + scienceMarks) / 3 ;
    cout << "The average marks of the student is : " << averageMarks << endl ;
    return 0;
}