[H, W] = map(int, input().split())
X = [[0] * (H + 2) for _ in range(W + 2)]
S = [[0] * (H + 2) for _ in range(W + 2)]


for i in range(1, H + 1):
    row = [int(x) for x in input().split()]
    for j in range(1, W + 1):
        X[i][j] = row[j - 1]

for i in range(1, H + 1):
    for j in range(1, W + 1):
        S[i][j] = S[i][j - 1] + X[i][j]

for j in range(1, W + 1):
    for i in range(1, H + 1):
        S[i][j] += S[i - 1][j]

Q = int(input())

for i in range(Q):
    [A, B, C, D] = map(int, input().split())
    print(S[C][D] + S[A-1][B-1] - S[A-1][D] - S[C][B-1])