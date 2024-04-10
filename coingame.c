/*동전 던지기 간단 프로그램 코드 조각
for roll in range(sample):
	face = random.randrange(0, 2)
	if face == 0:
		frequency0 += 1
	else:
		frequency1 += 1 */

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
