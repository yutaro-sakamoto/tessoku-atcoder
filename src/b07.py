T = int(input())
N = int(input())
A = [0] * (T + 1)

for i in range(N):
    [L, R] = map(int, input().split())
    A[L] += 1
    A[R] -= 1

acc = 0
for i in range(T):
    acc += A[i]
    print(acc)