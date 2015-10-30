//
//  main.c
//  Assignment2-3
//
//  Created by zhong on 15/10/23.
//  Copyright © 2015年 zhong. All rights reserved.
//

#include <stdio.h>

int main() {
    int row;
    int col;
    for(row=10;row>=1;row--){
        for(col=1;col<=row;col++){
            if(row%2==0)
                printf("# ");
            if(row%2==1)
                printf("- ");
            }
        printf("\n");
        }
    return 0;
}
