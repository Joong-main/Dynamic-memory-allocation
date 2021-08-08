#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int score_cnt=0;
    

    printf("과목 수를 입력하세요: ");
    scanf_s("%d", &score_cnt);

    double input_score = 0.0;
    double* score;
    score = (double *)malloc(score_cnt *sizeof(double));
    double total_score=0.0;

    for (int i = 0; i < score_cnt; i++) {
        printf("%d 번째 과목 점수를 입력하세요: ", i+1);
        scanf_s("%lf", &score[i]);
    }
    for (int i = 0; i < score_cnt; i++) {
        total_score += score[i];
    }
    printf("===========================================================\n");
    printf("점수 총합 : %f\n\n", total_score);
    printf("전과목 평균 점수: %f\n\n", total_score / score_cnt);
    printf("===========================================================\n");
    printf("전체 입력 내역\n\n");
    for (int i = 0; i < score_cnt; i++) {
        printf("%d 번째 입력: %lf\n",i+1,score[i]);
    }
    printf("===========================================================\n");
    return 0;
}