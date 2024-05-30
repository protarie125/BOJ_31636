
#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
string s;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n >> s;
  auto ct = 0LL;
  for (const auto& x : s) {
    if ('o' == x) {
      ++ct;
      if (3 == ct) {
        cout << "Yes";
        return 0;
      }
    } else {
      ct = 0;
    }
  }

  cout << "No";

  return 0;
}