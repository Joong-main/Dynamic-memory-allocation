#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int score_cnt=0;
    

    printf("���� ���� �Է��ϼ���: ");
    scanf_s("%d", &score_cnt);

    double input_score = 0.0;
    double* score;
    score = (double *)malloc(score_cnt *sizeof(double));
    double total_score=0.0;

    for (int i = 0; i < score_cnt; i++) {
        printf("%d ��° ���� ������ �Է��ϼ���: ", i+1);
        scanf_s("%lf", &score[i]);
    }
    for (int i = 0; i < score_cnt; i++) {
        total_score += score[i];
    }
    printf("===========================================================\n");
    printf("���� ���� : %f\n\n", total_score);
    printf("������ ��� ����: %f\n\n", total_score / score_cnt);
    printf("===========================================================\n");
    printf("��ü �Է� ����\n\n");
    for (int i = 0; i < score_cnt; i++) {
        printf("%d ��° �Է�: %lf\n",i+1,score[i]);
    }
    printf("===========================================================\n");
    return 0;
}