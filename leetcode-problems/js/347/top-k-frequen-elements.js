/**
 * @param {number[]} nums
 * @param {number} k
 * @return {number[]}
 */

var topKFrequent = function(nums, k) {
  var mapping = {};
  nums.map(function(num) {
    if (num in mapping) {
      mapping[num]++;
    } else {
      mapping[num] = 1;
    }
  });

  return Object.entries(mapping)
    .sort(function(a, b) {
      return b[1] - a[1];
    })
    .splice(0, k)
    .map(function(num) {
      return +num[0];
    });
};
