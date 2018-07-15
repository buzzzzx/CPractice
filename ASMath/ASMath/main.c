//
//  main.c
//  ASMath
//
//  Created by binja on 2018/5/31.
//  Copyright © 2018年 binja. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n, m, i, k;
    scanf("%d", &n);
    
    m = n / 7;
    
    for (i = 1; i <= m; i++) {
        k = 7 * i;
        if ((k % 2 == 1) && (k % 3 == 2) && (k % 5 == 4) && (k % 6 == 5)) {
            printf("%d ", k);
        }
    }
    
    return 0;
}
