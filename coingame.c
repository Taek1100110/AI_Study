/*동전 던지기 간단 프로그램 코드 조각
for roll in range(sample):
	face = random.randrange(0, 2)
	if face == 0:
		frequency0 += 1
	else:
		frequency1 += 1 */

/* 파이썬과 달리 C언어는 간단한 동전 던지기 프로그램을 만들 때에도 3개의 헤더파일 선언이 필요하며, 난수 생성을 위해 srand함수르 추가적으로 사용해야 한다.
   또한 rand함수를 사용하기 위해 모듈러스 연산이 추가적으로 필요하다. 그리고 매우 간단한 파이썬의 for문과 달리 C언어에서는 초기식, 조건식, 변환식이 필요하다. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(NULL)); 
    int comp = 0; 
    int frequency0 = 0, frequency1 = 0; 
    int sample; 
    printf("반복 횟수 입력 : ");
    scanf("%d", &sample);

    for (int i = 1; i <= sample; i++)
    {
        comp = rand() % 2 + 1; 
        if(comp == 1)
        {
            frequency0 += 1;
        } else
        {
            frequency1 += 1; 
        }
    }
    printf("앞면 %d번 뒷면 %d번\n", frequency0, frequency1);

    return 0;
}
