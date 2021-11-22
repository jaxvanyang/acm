/* Generated by powerful Codeforces Tool
 * Author: Kenshin2438
 * Time: 2021-11-22 20:46:15
**/
 
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cassert>
 
#include <algorithm>
#include <random>
#include <chrono>
#include <iostream>
#include <functional>
#include <bitset>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
 
#define PII pair<int, int>
#define vec vector
#define str string
#define fi first
#define se second
#define pb push_back
#define all(a) a.begin(), a.end()
using namespace std;
 
typedef long long ll;
typedef unsigned long long ull;
 
const int mod = 1e9 + 7;
const int N = 3e5 + 10;
const int inf = 0x3f3f3f3f;
const ll  INF = 1e18;
const double eps = 1e-8;
 
int T;
 
int main() {
  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
  for (cin >> T; T--; ) {
    ll a, b; cin >> a >> b;
    cout << 180LL * b / __gcd(a, 180LL * b) - 1 << '\n';
  }
  return 0;
}