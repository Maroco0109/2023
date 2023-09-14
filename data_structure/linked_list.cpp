/* Linked List
array = {item0, item1, item2, item3, item4}
c == size of item
item0's address == A0(array address)
item1's address == A0 + c
item2's address == A0 + 2*c
...

linked list = item0, item1, item3, item4
- item들이 연속적으로 메모리에 저장x
item0's address == A
item1's address == B
item2's address == C
item3's address == D
item4's address == E

linked list: item + link field(메모리 주소, 8bite)
A: [item0][B]       // head node
B: [item1][C]
C: [item2][D]
D: [item3][E]
E: [item4][NULL]    // tail node

linked list
장점
- Data의 추가, 삭제, 삽입이 쉽다: 앞의 link field -> [새로운 노드][new link field] -> 뒤의 노드
- 다른 linked list와 연결하는 것이 쉽다: tail link field -> head node
- 메모리의 빈 공간(미사용중인 공간) 사용하여 구현 가능
단점
- link field 만큼의 추가 메모리 공간 사용
- 순서대로 data를 탐색해 내려가야함 <-> Array는 random access가 가능

1. Traversal: 자료를 순차적으로 보는 것
- array: 반복문
    <PSEUDO>
    for(int i=0; i<=n; i++) print data[i];
- linked list: 메모리의 주소를 직접 컨트롤
    1) head node의 data 출력
    2) head node의 link field 읽음
    3) 2)에 있던 주소로 가서 next node의 data 출력
    ...
    convention: ITEM(p): node의 data filed, LINK(p): node의 link filed
    p: aux, ptr variable, 현재 들여다 볼 node를 가리키는 변수
    <PSEUDO>
    p<-l    // head node
    while(p!=NULL){
        print ITEM(p)
        P<-link(P)
    }

2. Insertion and Deletion
    convention: new(), free(p)  // new: node 하나를 만들 수 있는 공간 할당 함수, 주소 return -> 메모리 공간 없을 시 NULL return
                                // free: node 삭제 시, 공간 반환 함수

    1) Insertion: p: 자식 노드의 주소, q: new()값을 받을 변수
    <PSEUDO>
    q<-new()
    if(q==NULL) FAILURE
    LINK(q)<-LINK(p)
    LINK(p)<-q

    2) Deletion: p: 자식 노드의 주소, q: 삭제할 노드의 주소
    <PSEUDO>
    LINK(p)<-LINK(q)
    free(q)

Stack using a linked list
generic: push, pop 사용 시 overflow 발생 x -> 평상시, 자주 발생
exceptional: overflow가 발생 할 수 있는 상황
우선순위: generic >>> exceptional
linked list -> head 위치는 알고 있음 -> head를 top으로 생각
    <PSEUDO>
    top{
        init: top<-NULL
    }
    push(x){
        p<-new()
        // full: OVERFLOW, 자기 자신으로 돌아옴 -> new()가 NULL ptr return
        if(p==NULL) OVERFLOW
        LINK(p)<-top
        top<-p
    }
    pop(){
        // empty: UNDERFLOW, 자기 자신으로 돌아옴 -> LINK(p)가 NULL
        if(top==NULL) UNDERFLOW
        p<-top
        y<-ITEM(p)
        top<-LINK(p)
        free(p)

        return y
    }
*/