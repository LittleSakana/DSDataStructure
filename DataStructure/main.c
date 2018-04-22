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

int main(int argc, const char * argv[]) {
    
    start = clock();
    printN(100000);
    stop = clock();
    duration = (double)(stop - start)/CLOCKS_PER_SEC;
    printf("总共用时%.2f",duration);
    return 0;
}

void printN (int n) {
    int i;
    for (i = 0; i <= n; i++) {
        printf("%d\n",i);
    }
}
