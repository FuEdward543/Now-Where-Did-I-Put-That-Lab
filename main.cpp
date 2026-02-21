#include <iostream>
using namespace std;

#include "src/where.hpp"

int main() {
  char searchForChar;
  string givenString;
  cout << "Input String: ";
  cin >> givenString;
  cout << "Search for a Character? Y or N";
  cin >> searchForChar;
  if (searchForChar == 'Y'||searchForChar == 'y') {
    char searchChar;
    cout << "Enter a character: ";
    cin >> searchChar;
    cout << findWithinString(givenString, searchChar);
  } else {
    string searchString;
    cout << "Enter a string: ";
    cin >> searchString;
    cout << findWithinString(givenString, searchString);
  }
}
