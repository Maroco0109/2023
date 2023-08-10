/*
스택: 삽입과 삭제 연산이 후입 선출(Last-in, First-out) 형태로 이루어지는 자료구조
- 삽입과 삭제가 한 쪽에서만 일어남
- DFS(Depth First Search), 백트래킹 종류의 코딩테스트에 효과적 -> 재귀 함수 알고리즘 원리와 일맥 상통
스택과 재귀함수
func A() -> func A() -> ... => A function call(A function call(A function call(Feasible))) => 제일 마지막에 호출된 함수, 즉 feasible한 함수 부터 종료 -> 후입선출 구조
즉, 백트래킹과 DFS도 스택 스타일로 구현 가능

큐: 삽입과 삭제 연산이 선입 선출(First-in First-out)로 이루어지는 자료구조
- 삽입은 큐의 back, 삭제는 큐의 front 에서 이루어진다.
- BFS(Breadth First Search) 에서 자주 사용
Root node 탐색 -> 제일 가까운 child node 탐색(Root node 종료) -> child node 1(==Root node 1)... => feasibility check

우선순위 큐: 우선순위가 높은 데이터가 먼저 나오는 자료구조
- front에 항상 최댓값 또는 최솟값이 위치
- heap을 이용하여 구현 -> 트리 종류 중 하나
*/