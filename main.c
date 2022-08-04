#include "linked_list.h"
#include "linked_list.c"

int main()
{
    Node *my_head_1 = NULL;
    push_back(&my_head_1, 100);
    push_back(&my_head_1, 200);
    push_back(&my_head_1, 300);
    push_back(&my_head_1, 400);

    //pop_front(&my_head_1);
    pop_back(&my_head_1);
    pop_back(&my_head_1);
    pop_back(&my_head_1);
    pop_back(&my_head_1);
    pop_back(&my_head_1);
    pop_back(&my_head_1);
    pop_back(&my_head_1);
    //printf("%p",my_head_1);
    //system("PAUSE");
    print_ll(my_head_1);
    return 0;
}
