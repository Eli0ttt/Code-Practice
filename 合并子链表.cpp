//#include <iostream>
//using namespace std;
//
//struct ListNode{
//	int val;
//	ListNode* next;
//};
//
//ListNode* createList(){
//	ListNode* head = NULL;
//	ListNode* p1, * p2;
//	p1 = new ListNode;
//	p2 = p1;
//	cin >> p1->val;
//	while (p1->val != -1){
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
//ListNode* mergeNodes(ListNode* head){
//	if (!head)return NULL;
//	ListNode* p = head->next;
//	int cnt = 0;
//	while (p && p->val != 0) {
//		cnt += p->val;
//		p = p->next;
//	}
//	ListNode* newhead = new ListNode;
//	newhead->next = NULL;
//	newhead->val = cnt;
//	ListNode* r = newhead;
//	while (p->next) {
//		p = p->next;
//		cnt = 0;
//		while (p && p->val != 0) {
//			cnt += p->val;
//			p = p->next;
//		}
//		ListNode* p = new ListNode;
//		p->val = cnt;
//		p->next = NULL;
//		r->next = p;
//		r = p;
//	}
//	return newhead;
//}
//
//int main(){
//	ListNode* head;
//	head = createList();
//	ListNode* ans = mergeNodes(head);
//	while (ans != NULL){
//		cout << ans->val << " ";
//		ans = ans->next;
//	}
//	return 0;
//}