#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

/* [Notice for C/C++]
* - 기본 제공되는 뼈대 코드는 입출력의 이해를 돕기위해 제공되었습니다.
* - 뼈대코드의 활용은 선택사항이며 코드를 직접 작성하여도 무관합니다.
*
* - 데이터의 입력과 출력은 stdin과 stdout을 통하고 scanf와 printf를 사용하세요
* - 별도의 병렬 처리나 시스템콜, 네트워크/파일접근 등을 하지 마세요
* - main은 int형으로 선언한 후 return 0를 항상 하는 것을 권유합니다
* - 지역변수 배열 크기에 의한 Stack Overflow 에러에 주의하세요
* - (C++) cin/cout보다 scanf/printf를 사용하기를 권장합니다. (입출력 성능에 의한 이유)
*/

struct team
{
	int index;
	int score;
};

bool cmp(const team& a, const team& b) {
	return a.score > b.score;
}

int main()
{   //프로그램의 시작부 
	int N, M;
	int P, Q;
	scanf_s("%d %d", &N, &M);
	vector<team>arr(N + 1);
	for (int i = 1; i < arr.size(); i++) {
		arr[i].index = i;
		arr[i].score = 0;
	}

	for (int i = 0; i < M; i++) {
		scanf_s("%d %d", &P, &Q);

		if (P <= 0 || P > N || Q <= 0 || Q >N)
			continue;
		if (P == Q)
			continue;
		arr[P].score += 5;
		arr[Q].score += 3;
	}
	stable_sort(arr.begin() + 1, arr.end(), cmp);


	int grade = 1;
	printf("%d %d %d\n", grade, arr[1].index, arr[1].score);

	for (int i = 2; i < arr.size(); i++) {
		if (arr[i - 1].score != arr[i].score) {
			printf("%d %d %d\n", i, arr[i].index, arr[i].score);
			grade = i;
		}
		else {
			printf("%d %d %d\n", grade, arr[i].index, arr[i].score);
		}

	}
	return 0;
}