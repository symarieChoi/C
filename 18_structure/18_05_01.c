#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
        int number;
        struct node *p_next;
} NODE;

void AddNumber(NODE **pp_head, NODE **pp_tail, int data)
{
        if (NULL != *pp_head) // *pp_head라고 사용하면 p_head 포인터에 저장된 주소 값
        {
                (*pp_tail)->p_next = (NODE *)malloc(sizeof(NODE)); // *pp_tail이라고 사용하면 p_tail 포인터에 저장된 주소 값 의미
                *pp_tail = (*pp_tail)->p_next;
        }
        else
        {
                *pp_head = (NODE *)malloc(sizeof(NODE)); // 새 노드를 할당함
                *pp_tail = *pp_head;                     // 새 노드의 주소 값을 p_tail(*pp_tail)에 저장함함
        }
        (*pp_tail)->number = data;
        (*pp_tail)->p_next = NULL; // 다음 노드가 없음을 명시
}

void main()
{
        // 노드의 시작과 끝을 기억할 포인터
        NODE *p_head = NULL, *p_tail = NULL, *p;
        int sum = 0, temp;

        while (1)
        { // 무한 루프: 중간에 9999를 누르면 종료
                printf("숫자를 입력하세요 (9999를 누르면 종료) : ");
                scanf("%d", &temp);
                if (9999 == temp)
                        break;
                // 노드의 시작과 끝을 기억하는 포인터의 주소 값과 입력된 숫자를 전달
                AddNumber(&p_head, &p_tail, temp);
        }

        p = p_head;
        while (NULL != p)
        {
                if (p != p_head)
                        printf("+");       // 숫자와 숫자 사이에 +를 출력함
                printf(" %d ", p->number); // 입력한 숫자를 출력함
                sum = sum + p->number;     // 입력한 숫자들을 합산함
                p = p->p_next;             // 다음 노드로 이동
        }
        printf(" = %d\n", sum);

        while (NULL != p_head)
        {
                p = p_head;              // 현재 노드를 삭제하기 위해 p 변수에 노드 주소 값을 저장
                p_head = p_head->p_next; // 시작 위치를 다음 노드로 옮김
                free(p);                 // 기억했던 주소를 사용하여 노드 삭제제
        }
        p_tail = p_head;
}