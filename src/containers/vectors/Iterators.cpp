#include <vector>
#include <string>
// iterators can be used to fetch an element in a container or character in a string.
// Iterators are used in place of subscripts.

int main()
{
  std::vector<int>::iterator it;      // can read/write vector<int> elements.
  std::string::iterator str_iterator; // str_iterator can read and write charactors in a string.
  std::string::const_iterator const_iterator; // const_iterator can only read but not write. Behaves like a const pointer
}