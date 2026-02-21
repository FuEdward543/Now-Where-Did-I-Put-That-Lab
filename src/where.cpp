#include <string>
using namespace std;

int findWithinString(const string& inputString, const char& search) {
   for (int i = 0; i < inputString.length(); i++)
   {
      if (search == inputString.at(i)) {
         return i;
      }
   }
   return -1;
}

int findWithinString(const string& inputString, const string& search) {
   int searchCount = 0;
   for (int i = 0; i < inputString.length(); i++)
   {
      const int preSearchCount = searchCount;
      for (int j = 0; j < search.length(); j++) {
         if (search.at(j) == inputString.at(i)) {
            if (searchCount == search.length()-1) {
               return i-searchCount;
            }
            searchCount++;
            break;
         }
      }
      if (preSearchCount == searchCount) {
         searchCount = 0;
      }
   }
   return -1;
}