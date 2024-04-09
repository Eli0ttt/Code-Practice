#include <iostream>
using namespace std;

struct ListNode{
	int val;
	ListNode* next;
};

ListNode* createList(){
	ListNode* head = NULL;
	ListNode* p1, * p2;
	p1 = new ListNode;
	p2 = p1;
	cin >> p1->val;
	while (p1->val != -1){
		if (head == NULL)
			head = p1;
		else p2->next = p1;
		p2 = p1;
		p1 = new struct ListNode;
		cin >> p1->val;
	}
	p2->next = NULL;
	delete p1;
	return head;
}

ListNode* oddEvenList(ListNode* head) {
	if (!head)return NULL;
	ListNode* newhead = new ListNode;
	newhead->next = NULL;
	newhead->val = head->val;
	ListNode* r = newhead;
	ListNode* h;
	if (head->next) {
		h = head->next->next;
		while (h) {
			ListNode* p = new ListNode;
			p->next = NULL;
			p->val = h->val;
			r->next = p;
			r = p;
			if (h->next)h = h->next->next;
			else break;
		}
	}
	h = head->next;
	while (h) {
		ListNode* p = new ListNode;
		p->next = NULL;
		p->val = h->val;
		r->next = p;
		r = p;
		if (h->next)h = h->next->next;
		else break;
	}
	return newhead;
}

int main(){
	ListNode* head;
	head = createList();
	ListNode* ans = oddEvenList(head);
	if (ans == NULL)
		cout << "-1";
	else{
		while (ans != NULL){
			cout << ans->val << " ";
			ans = ans->next;
		}
	}
	return 0;
}