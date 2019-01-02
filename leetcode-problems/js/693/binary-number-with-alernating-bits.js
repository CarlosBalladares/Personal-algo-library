/**
 * @param {number} n
 * @return {boolean}
 */
const hasAlternatingBits = n => {
  if (n === 0) return true;
  let curr = n % 2;
  while (n > 0) {
    n = n >> 1;
    if (curr === n % 2) break;

    curr = n % 2;
  }

  return n === 0;
};
