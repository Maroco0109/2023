/*
����: ���԰� ���� ������ ���� ����(Last-in, First-out) ���·� �̷������ �ڷᱸ��
- ���԰� ������ �� �ʿ����� �Ͼ
- DFS(Depth First Search), ��Ʈ��ŷ ������ �ڵ��׽�Ʈ�� ȿ���� -> ��� �Լ� �˰��� ������ �ϸ� ����
���ð� ����Լ�
func A() -> func A() -> ... => A function call(A function call(A function call(Feasible))) => ���� �������� ȣ��� �Լ�, �� feasible�� �Լ� ���� ���� -> ���Լ��� ����
��, ��Ʈ��ŷ�� DFS�� ���� ��Ÿ�Ϸ� ���� ����

ť: ���԰� ���� ������ ���� ����(First-in First-out)�� �̷������ �ڷᱸ��
- ������ ť�� back, ������ ť�� front ���� �̷������.
- BFS(Breadth First Search) ���� ���� ���
Root node Ž�� -> ���� ����� child node Ž��(Root node ����) -> child node 1(==Root node 1)... => feasibility check

�켱���� ť: �켱������ ���� �����Ͱ� ���� ������ �ڷᱸ��
- front�� �׻� �ִ� �Ǵ� �ּڰ��� ��ġ
- heap�� �̿��Ͽ� ���� -> Ʈ�� ���� �� �ϳ�
*/