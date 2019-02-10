class Solution
{
public:
  int removeDuplicates(vector<int> &nums)
  {
    int luq = 0, n = nums.size();
    if (n == 0)
      return 0;
    for (int i = 1; i < n; i++)
      if (nums[i] != nums[luq])
        nums[++luq] = nums[i];
    return luq + 1;
  }
};