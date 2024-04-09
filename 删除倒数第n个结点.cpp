//#include <iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode* next;
//};
//
//ListNode* createList() {
//	ListNode* head = NULL;
//	ListNode* p1, * p2;
//	p1 = new ListNode;
//	p2 = p1;
//	cin >> p1->val;
//	while (p1->val != -1) {
//		if (head == NULL)
//			head = p1;
//		else p2->next = p1;
//		p2 = p1;
//		p1 = new struct ListNode;
//		cin >> p1->val;
//	}
//	p2->next = NULL;
//	delete p1;
//	return head;
//}
//
//ListNode* getKthFromEnd(ListNode* head, int k) {
//	if (!head)return NULL;
//	int cnt = 0;
//	ListNode* p = head->next;
//	while (p) {
//		cnt++;
//		p = p->next;
//	}
//	if (cnt < k)return NULL;
//	int i;
//	p = head;
//	for (i = 0; i < cnt - k; i++)p = p->next;
//	return p;
//}
//
//int main(){
//	ListNode* head;
//	int k;
//	head = createList();
//	cin >> k;
//	ListNode* ans = getKthFromEnd(head, k);
//	if (ans == NULL)
//		cout << "-1";
//	else cout << ans->val;
//	return 0;
//}