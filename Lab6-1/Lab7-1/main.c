//
//  main.c
//  Lab7-1
//
//  Created by zhong on 15/10/23.
//  Copyright © 2015年 zhong. All rights reserved.
//

#include <stdio.h>

int main() {
    int result=0;
    int i;
    for(i=1;i<100;i+=2)
            result+=i;
    printf("%d\n",result);
    return 0;
}
