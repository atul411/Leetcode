#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif


#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <unordered_map>
#include <unordered_set>
#endif
using namespace std;

using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vvl = vector<vector<ll>>;

string upper_case(string str) {
    for (auto &ch : str) {
        ch = toupper(ch);
    }
    return str;
}

string lower_case(string str) {
    for (auto &ch : str) {
        ch = tolower(ch);
    }
    return str;
}

bool equal_ignore_case(string s1, string s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    for (int i = 0; i < s2.size(); i++) {
        if (tolower(s1[i]) != tolower(s2[i])) {
            return false;
        }
    }
    return true;
}

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
vector<int> sieve(int n) {
    vector<int> arr;
    int i = 0;
    while (arr.size() < n) {
        if (is_prime(i)) {
            arr.push_back(i);
        }
        i++;
    }
    return arr;
}

bool equal_double(double a, double b) {
    return abs(a - b) <= 1e-3;
}

int main() {
    string hate = "I hate", love = "I love";
    string ans;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            ans += " that " + love;
        } else if (i == 1) {
            ans += hate;
        } else {
            ans += " that " + hate;
        }
    }
    cout << ans << " it";
}
