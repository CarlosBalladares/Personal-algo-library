/**
 * @param {number[]} A
 * @return {number}
 */
const peakIndexInMountainArray = A => {
  if (A.length < 3) return 0;

  const i = A.indexOf(Math.max(...A));

  const incLeft = A.slice(0, i);
  const decRight = A.slice(i + 1, A.length);

  const lcond = incLeft.every((elm, ind) => {
    const prev = ind === 0 ? Number.MIN_SAFE_INTEGER : incLeft[ind - 1];
    return elm > prev;
  });

  const rcond = decRight.every((elm, ind) => {
    const next =
      ind === decRight.length - 1 ? Number.MIN_SAFE_INTEGER : decRight[ind + 1];
    return elm > next;
  });

  return lcond && rcond ? i : 0;
};
