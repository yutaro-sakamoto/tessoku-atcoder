N = int(input())
A = list(map(int, input().split()))
Q = int(input())

acc = 0
S = []
for i in range(N):
    acc += A[i]
    S.append(acc)

for i in range(Q):
    [L, R] = map(int, input().split())
    t = 0
    if L > 1:
        t = S[R-1] - S[L-2]
    else:
        t = S[R-1]

    if 2 * t > R - L + 1:
        print('win')
    elif 2 * t < R - L + 1:
        print('lose')
    else:
        print('draw')