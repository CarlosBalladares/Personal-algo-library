const mostCommonWord = (paragraph, banned) => {
  //const par =
  const arr = [],
    map = {};
  let wrd;

  paragraph = paragraph.replace(/[\W_]+ /g, " ");
  paragraph = paragraph.replace(/[\W_]+/g, " ");

  paragraph.split(" ").forEach(word => {
    wrd = word.toLowerCase();
    map[wrd] = !map[wrd] ? 1 : map[wrd] + 1;
  });

  let vals = Object.entries(map);

  vals.sort((a, b) => b[1] - a[1]);
  vals = vals.filter(val => {
    return banned.indexOf(val[0]) === -1;
  });

  return vals[0][0];
};
