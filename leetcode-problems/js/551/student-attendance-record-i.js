/**
 * @param {string} s
 * @return {boolean}
 */
const checkRecord = s => {
  const map = { A: 0, L: 0, P: 0 };
  let l1 = false,
    l2 = false,
    l3 = false;

  s.split("").forEach(day => {
    if (day !== "L") l1 = l2 = false;
    else if (l1 && !l2) l2 = true;
    else if (l1 && l2) l3 = true;
    else l1 = true;
    map[day]++;
  });

  return map.A < 2 && !l3;
};
