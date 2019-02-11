class Solution
{
public:
  int removeElement(vector<int> &nums, int val)
  {
    int n = nums.size(), inc = 0;
    if (n == 0)
      return 0;

    if (n == 1)
    {
      return nums[0] == val ? 0 : 1;
    }

    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
      if (nums[i] == val || map[i] == 1)
      {
        int j = i + 1, count = 0;
        while (j < n && nums[j] == val || map[j] == 1)
        {
          if (nums[j] == val)
          {
            count++;
          }
          j++;
        }
        if (j < n)
        {
          if (nums[i] == val)
            inc++;
          nums[i] = nums[j];
          map[j] = 1;
        }
        else
        {
          inc += count;
          if (nums[i] == val)
            inc++;
          return (n - inc);
        }
      }
    }

    return n - inc;
  }
};