/* Linked List
array = {item0, item1, item2, item3, item4}
c == size of item
item0's address == A0(array address)
item1's address == A0 + c
item2's address == A0 + 2*c
...

linked list = item0, item1, item3, item4
- item���� ���������� �޸𸮿� ����x
item0's address == A
item1's address == B
item2's address == C
item3's address == D
item4's address == E

linked list: item + link field(�޸� �ּ�, 8bite)
A: [item0][B]       // head node
B: [item1][C]
C: [item2][D]
D: [item3][E]
E: [item4][NULL]    // tail node

linked list
����
- Data�� �߰�, ����, ������ ����: ���� link field -> [���ο� ���][new link field] -> ���� ���
- �ٸ� linked list�� �����ϴ� ���� ����: tail link field -> head node
- �޸��� �� ����(�̻������ ����) ����Ͽ� ���� ����
����
- link field ��ŭ�� �߰� �޸� ���� ���
- ������� data�� Ž���� ���������� <-> Array�� random access�� ����

1. Traversal: �ڷḦ ���������� ���� ��
- array: �ݺ���
    <PSEUDO>
    for(int i=0; i<=n; i++) print data[i];
- linked list: �޸��� �ּҸ� ���� ��Ʈ��
    1) head node�� data ���
    2) head node�� link field ����
    3) 2)�� �ִ� �ּҷ� ���� next node�� data ���
    ...
    convention: ITEM(p): node�� data filed, LINK(p): node�� link filed
    p: aux, ptr variable, ���� �鿩�� �� node�� ����Ű�� ����
    <PSEUDO>
    p<-l    // head node
    while(p!=NULL){
        print ITEM(p)
        P<-link(P)
    }

2. Insertion and Deletion
    convention: new(), free(p)  // new: node �ϳ��� ���� �� �ִ� ���� �Ҵ� �Լ�, �ּ� return -> �޸� ���� ���� �� NULL return
                                // free: node ���� ��, ���� ��ȯ �Լ�

    1) Insertion: p: �ڽ� ����� �ּ�, q: new()���� ���� ����
    <PSEUDO>
    q<-new()
    if(q==NULL) FAILURE
    LINK(q)<-LINK(p)
    LINK(p)<-q

    2) Deletion: p: �ڽ� ����� �ּ�, q: ������ ����� �ּ�
    <PSEUDO>
    LINK(p)<-LINK(q)
    free(q)

Stack using a linked list
generic: push, pop ��� �� overflow �߻� x -> ����, ���� �߻�
exceptional: overflow�� �߻� �� �� �ִ� ��Ȳ
�켱����: generic >>> exceptional
linked list -> head ��ġ�� �˰� ���� -> head�� top���� ����
    <PSEUDO>
    top{
        init: top<-NULL
    }
    push(x){
        p<-new()
        // full: OVERFLOW, �ڱ� �ڽ����� ���ƿ� -> new()�� NULL ptr return
        if(p==NULL) OVERFLOW
        LINK(p)<-top
        top<-p
    }
    pop(){
        // empty: UNDERFLOW, �ڱ� �ڽ����� ���ƿ� -> LINK(p)�� NULL
        if(top==NULL) UNDERFLOW
        p<-top
        y<-ITEM(p)
        top<-LINK(p)
        free(p)

        return y
    }
*/