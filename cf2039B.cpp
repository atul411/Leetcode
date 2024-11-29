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

void solution(string str) {
    int n = str.size();
    if (str.size() <= 1) {
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i + 1 < n; i++) {
        if (str[i] == str[i + 1]) {
            cout << str.substr(i, 2) << "\n";
            return;
        }
    }
    for (int i = 0; i + 2 < n; i++) {
        if (str[i] != str[i + 1] and str[i + 1] != str[i + 2] and str[i] != str[i + 2]) {
            cout << str.substr(i, 3) << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}
void test_cases(int test) {
    while (test--) {
        string str;
        cin >> str;
        solution(str);
    }
}
int main() {
    int n;
    cin >> n;
    test_cases(n);
}