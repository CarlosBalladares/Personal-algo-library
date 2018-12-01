/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */

var getCounts = function(nums) {
  var mapping = {};
  nums.map(function(num) {
    if (num in mapping) {
      mapping[num]++;
    } else {
      mapping[num] = 1;
    }
  });

  return mapping;
};
var intersect = function(nums1, nums2) {
  var mapping1 = getCounts(nums1);
  var mapping2 = getCounts(nums2);

  var res = [];

  for (var key in mapping1) {
    var times = Math.min(mapping1[key], mapping2[key]);
    while (times--) {
      res.push(key);
    }
  }
  return res;
};
