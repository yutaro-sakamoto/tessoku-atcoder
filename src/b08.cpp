#include <iostream>
#include <vector>
using namespace std;
int N;
int Z[1502][1502];
int Q;
int S[1502][1502];

int main()
{
    cin >> N;

    for (int i = 0; i < 1502; ++i)
    {
        for (int j = 0; j < 1502; ++j)
        {
            Z[i][j] = 0;
            S[i][j] = 0;
        }
    }

    for (int i = 1; i <= N; i++)
    {
        int X, Y;
        cin >> X >> Y;
        Z[X][Y] += 1;
    }

    for (int i = 1; i <= 1500; i++)
    {
        for (int j = 1; j <= 1500; j++)
        {
            S[i][j] = S[i][j - 1] + Z[i][j];
        }
    }

    for (int j = 1; j <= 1500; j++)
    {
        for (int i = 1; i <= 1500; i++)
        {
            S[i][j] += S[i - 1][j];
        }
    }

    cin >> Q;
    for (int i = 0; i < Q; i++)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        cout << S[C][D] - S[A - 1][D] - S[C][B - 1] + S[A - 1][B - 1] << endl;
    }
}