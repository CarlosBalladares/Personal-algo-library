/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
var twoSum = function(nums, target) {
  const map={}
  let res=[];
  nums.forEach((num, i)=>{
    map[target-num]=i;
  });  
  
  nums.forEach((num, i)=>{
    if(map[''+num] && map[num]!==i){
       res= [map[num], i]
    }
  });

  return res;
};