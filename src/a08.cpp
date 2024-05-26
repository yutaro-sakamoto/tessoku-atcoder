#include <iostream>
using namespace std;

int H, W, Q;
int X[1510][1510], S[1510][1510];
int A[100010], B[100010], C[100010], D[100010];

int main()
{
    cin >> H >> W;
    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            cin >> X[i][j];
        }
    }
    cin >> Q;
    for (int i = 1; i <= Q; i++)
    {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }

    for (int i = 0; i <= H; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            S[i][j] = 0;
        }
    }

    for (int i = 1; i <= H; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            S[i][j] = S[i][j - 1] + X[i][j];
        }
    }

    for (int j = 1; j <= W; j++)
    {
        for (int i = 1; i <= H; i++)
        {
            S[i][j] += S[i - 1][j];
        }
    }

    for (int i = 1; i <= Q; i++)
    {
        cout << S[C[i]][D[i]] + S[A[i] - 1][B[i] - 1] - S[A[i] - 1][D[i]] - S[C[i]][B[i] - 1] << endl;
    }
}