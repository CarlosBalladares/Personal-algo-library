class Solution
{
public:
  void nextPermutation(vector<int> &nums)
  {
    if (nums.size() == 1)
      return;

    auto res = nums.end();
    for (auto it = nums.end() - 1; it != nums.begin(); --it)
    {
      if (*(it - 1) < *it)
      {
        res = it - 1;
        break;
      }
    }
    if (res == nums.end())
    {
      reverse(nums.begin(), nums.end());
      return;
    }

    auto res2 = res + 1;

    for (auto it = res2; it != nums.end(); ++it)
      if (*it > *res && *it <= *res2)
        res2 = it;

    iter_swap(res, res2);
    reverse(res + 1, nums.end());
  }
};
