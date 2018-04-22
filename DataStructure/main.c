//
//  main.c
//  DataStructure
//
//  Created by fengdongsheng on 2018/4/22.
//  Copyright © 2018年 fengdongsheng. All rights reserved.
//

#include <stdio.h>
#include <time.h>

void printN (int n);

clock_t start,stop;
double duration;

int getMaxSubSequence (int A[], int n);

int main(int argc, const char * argv[]) {
//    start = clock();
//    printN(100000);
//    stop = clock();
//    duration = (double)(stop - start)/CLOCKS_PER_SEC;
//    printf("总共用时%.2f",duration);

    int n;
    if (scanf("%d", &n) == 1) {
        int input[n];
        for (int i = 0; i < n; i++) {
            if (scanf("%d",&input[i]) == 1) {
                
            }
        }
        int max = getMaxSubSequence(input, n);
        printf("%d",max);
    }
    return 0;
}

void printN (int n) {
    int i;
    for (i = 0; i <= n; i++) {
        printf("%d\n",i);
    }
}

// 计算最大子项值
int getMaxSubSequence (int A[], int n) {
    int maxSum,currentSum;
    maxSum = currentSum = 0;
    for (int i = 0; i < n; i++) {
        currentSum += A[i];
        if (currentSum > maxSum) {
            maxSum = currentSum;
        } else if (currentSum < 0) {
            currentSum = 0;
        }
    }
    return maxSum;
}
