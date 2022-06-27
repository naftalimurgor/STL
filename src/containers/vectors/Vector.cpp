#include <vector>
#include <string>

struct SalesItem
{

};

int main()
{
 // vector of 10 ints
  std::vector<int> ivec(10);
  // Vector of type SalesItem
  std::vector<SalesItem> Sales_vec;
  // Vector of strings. Notice std::string and #include string header
  // String is part of the Standard Library
  std::vector<std::string> articles = {"a", "an", "the"};
}