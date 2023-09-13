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
*/