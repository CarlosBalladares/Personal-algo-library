/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var intersection = function(nums1, nums2) {
  var set1 = new Set(nums1);
  var set2 = new Set(nums2);
  var ts1 = Array.from(set1);

  return ts1.filter(function(item) {
    return set2.has(item);
  });
};
