//
//  Rotword.c
//  Key_schedule_AES_128
//
//  Created by S Dheeraj Kumar on 10/01/23.
//

#include <stdio.h>

static void rot_word(uint8_t *arr)
{
    uint8_t y[4];
    for(int i=0;i<4;++i)
        *(y+i)=*(arr+(i+1)%4);
    for(int i=0;i<4;++i)
        *(arr+i)=y[i];
}
