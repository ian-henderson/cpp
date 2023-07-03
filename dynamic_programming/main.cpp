#include <iostream>
#include <unordered_map>

unsigned int
dp(int i, std::unordered_map<int, unsigned int>& map)
{
  if (i <= 2)
    return i;

  if (!map.contains(i))
    map[i] = dp(i - 1, map) + dp(i - 2, map);

  return map.at(i);
}

int
main(int argc, char* argv[])
{
  const int n = argc > 1 ? std::atoi(argv[1]) : 100;

  std::cout << "dynamic programming stair climbing problem\n";

  std::unordered_map<int, unsigned int> map = {};

  std::cout << "dp(" << n << "): " << dp(n, map) << std::endl;
}
