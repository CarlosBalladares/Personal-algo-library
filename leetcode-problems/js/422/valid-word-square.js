/**
 * @param {string[]} words
 * @return {boolean}
 */

const getMatrix = list => {
  const mat = [];

  const maxim = list.reduce((acc, item) => {
    return item.length > acc ? item.length : acc;
  }, 0);

  list.forEach(item => {
    const row = item.split("");
    while (row.length < maxim) row.push("");
    mat.push(row);
  });
  return mat;
};

const getCol = (n, mat) => {
  return mat[n].join("");
};

const getRow = (n, mat) => {
  const arr = [];
  mat.forEach(row => {
    arr.push(row[n]);
  });
  return arr.join("");
};

const validWordSquare = words => {
  const mat = getMatrix(words);
  return mat.every((row, i) => {
    return getCol(i, mat) === getRow(i, mat);
  });
};
