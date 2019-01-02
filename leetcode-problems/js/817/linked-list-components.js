/**
 * @param {ListNode} head
 * @param {number[]} G
 * @return {number}
 */
const numComponents = (head, G) => {
  const llmap = {},
    gmap = {};
  let count = 0;
  while (head.next) {
    llmap[head.val] = head.next.val;
    head = head.next;
  }

  G.forEach(g => (gmap[g] = true));

  Object.keys(llmap).forEach(k => {
    count += gmap[llmap[k]] ? 1 : 0;
  });

  return count;
};
