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
*/