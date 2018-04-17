#include<cstdio>
int DP[12] = { 1,1,2,};
int main(void) {
	int T, tmp;
	scanf("%d", &T);

	for (int i = 3; i < 12; i++) {
		DP[i] = DP[i - 1] + DP[i-2] + DP[i-3];
	}

	while (T--)
	{
		scanf("%d", &tmp);
		printf("%d\n", DP[tmp]);
	}
}