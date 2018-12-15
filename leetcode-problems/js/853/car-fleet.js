/**
 * @param {number} target
 * @param {number[]} position
 * @param {number[]} speed
 * @return {number}
 */
const carFleet = (target, position, speed) => {
  let orderedFleet = position
    .map((pos, i) => {
      return { pos: pos, speed: speed[i] };
    })
    .sort((a, b) => {
      return b.pos - a.pos;
    });

  orderedFleet.forEach(car => {
    car.arrival = (target - car.pos) / car.speed;
  });

  let fleets = 0;
  while (orderedFleet.length) {
    fleets++;
    const first = orderedFleet.shift();
    orderedFleet = orderedFleet.filter(car => {
      return car.arrival > first.arrival;
    });
  }

  return fleets;
};
