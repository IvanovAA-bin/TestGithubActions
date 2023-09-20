#include <stdio.h>
#include <assert.h>

int intro_sum(int a, int b){
    return a + b;
}

int main(void){
    assert(intro_sum(1,2) == 3);
    assert(intro_sum(100, 200) == 100);
}