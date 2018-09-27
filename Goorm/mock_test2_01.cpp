#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
/* [Notice for C/C++]
* - 기본 제공되는 뼈대 코드는 입출력의 이해를 돕기위해 제공되었습니다.
* - 뼈대코드의 활용은 선택사항이며 코드를 직접 작성하여도 무관합니다.
*
* - 별도의 병렬 처리나 시스템콜, 네트워크/파일접근 등을 하지 마세요
* - main은 int형으로 선언한 후 return 0를 항상 하는 것을 권유합니다
* - 지역변수 배열 크기에 의한 Stack Overflow 에러에 주의하세요
* - (C++) cin/cout보다 scanf/printf를 사용하기를 권장합니다. (입출력 성능에 의한 이유)
*/

bool cmp(const int& a, const int& b) {
	return a > b;
}
int main()
{   //프로그램의 시작부 
	int job[5];
	vector<int>arr(4, 0);
	int i;
	int answer; //이 변수에 답을 저장한다
	for (i = 0; i<5; i++) {
		scanf_s("%d", &job[i]);
	}

	sort(job, job + 5, cmp);

	for (int i = 0; i < 5; i++) {
		sort(arr.begin(), arr.end());
		arr[0] += job[i];
	}

	sort(arr.begin(), arr.end(), cmp);
	answer = arr[0];

	//정답을 출력한다 
	printf("%d", answer);
	return 0;
}
