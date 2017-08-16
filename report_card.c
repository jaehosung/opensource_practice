#include<stdio.h>
int main(){
    int kor = 90, math = 80, eng = 100,sum,avg;
    sum = kor + math + eng;
    avg = sum/3;

    printf("국어 : %d\n",kor);
    printf("수학 : %d\n",math);
    printf("영어 : %d\n",eng);
    printf("합계 : %d\n",sum);
    printf("평균 : %d\n",avg);

    return 0;
}
