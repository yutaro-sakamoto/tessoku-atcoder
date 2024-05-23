import * as fs from 'fs';

const inputs = fs.readFileSync("/dev/stdin", "utf8");
const nums = inputs.split(/\s/).map(Number);
const N = nums[0];
const K = nums[1];

let count = 0;
for (let a = 1; a <= N; a++) {
    let rest = K - a;
    for (let b = 1; b <= N && b <= rest && a + b <= K; b++) {
        let c = K - a - b;
        if (1 <= c && c <= N) {
            count++;
        }
    }
}

console.log(count);