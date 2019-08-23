#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here
  return -1;
}

int get_majority_element1(vector<int> &a) {

  vector<int>::iterator it = max_element(a.begin(), a.end());
  int& ref = (*it);
  int* ptr = &ref;
  vector<int> b((*ptr)+1);

  for (int i = 0; i < b.size(); ++i)
  {
    b[i] = 0;
  }
  for (int i = 0; i < a.size(); ++i)
  {
    b[a[i]]++;
  }

  for (int i = 0; i < b.size(); ++i)
  {
    if (b[i]!= 0 && b[i] > a.size()/2)
    {
      return 1;
    }
  }

  return 0;

}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << get_majority_element1(a) << "\n";

  //std::cout << get_majority_element(a, 0, a.size()) << "\n";

}
