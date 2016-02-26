//
//  main.c
//  C_Linknode_Test
//
//  Created by Xiao Xiang on 16/2/25.
//  Copyright © 2016年 Xiang Xiao. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

struct Linknode {
    int price;
    int atk;
    struct Linknode * next;
};

struct Linknode * create(){
    struct Linknode * head;
    struct Linknode * p1, * p2;
    int n = 0;
    p1 = p2 = (struct Linknode *)malloc(sizeof(struct Linknode));
    scanf("%d,%d", &p1->price, &p1->atk);
    head = NULL;
    while (p1->price != 0) {
        n++;
        if (n == 1) {
            head = p1;
        } else {
            p2->next = p1;
        }
        p2 = p1;
        p1 = (struct Linknode *)malloc(sizeof(struct Linknode));
        scanf("%d,%d", &p1->price, &p1->atk);
    }
    p2->next = NULL;
    return head;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    struct Linknode *p;
    p=create();
    printf("%d, %d\n", p->price, p->atk);
    return 0;
}
