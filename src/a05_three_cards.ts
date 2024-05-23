import * as fs from 'fs';

const inputs = fs.readFileSync("/dev/stdin", "utf8");
const nums = inputs.split(/\s/).map(Number);
const N = nums[0];
const K = nums[1];
console.log(`${N} ${K}`);