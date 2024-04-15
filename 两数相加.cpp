//#include<iostream>
//#include<cmath>
//#include<string.h>
//using namespace std;
//struct ListNode {
//	int val;
//	ListNode* next;
//};
//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//	ListNode* l3 = new ListNode;
//	l3->next = NULL;
//	int flag = 0;
//	l3->val = l1->val + l2->val;
//	if (l3->val > 9) {
//		l3->val %= 10;
//		flag = 1;
//	}
//	l1 = l1->next, l2 = l2->next;
//
//	ListNode* r = l3;
//
//	while (l1 && l2) {
//		ListNode* p = new ListNode;
//		p->val = l1->val + l2->val + flag;
//		p->next = NULL;
//		if (p->val > 9) {
//			p->val %= 10;
//			flag = 1;
//		}
//		else flag = 0;
//		r->next = p;
//		r = p;
//		l1 = l1->next, l2 = l2->next;
//	}
//
//	while (l1) {
//		ListNode* p = new ListNode;
//		p->val = l1->val + flag;
//		p->next = NULL;
//		if (p->val > 9) {
//			p->val %= 10;
//			flag = 1;
//		}
//		else flag = 0;
//		r->next = p;
//		r = p;
//		l1 = l1->next;
//	}
//	while (l2) {
//		ListNode* p = new ListNode;
//		p->val = l2->val + flag;
//		p->next = NULL;
//		if (p->val > 9) {
//			p->val %= 10;
//			flag = 1;
//		}
//		else flag = 0;
//		r->next = p;
//		r = p;
//		l2 = l2->next;
//	}
//	if (flag) {
//		ListNode* p = new ListNode;
//		p->val = flag;
//		p->next = NULL;
//		r->next = p;
//	}
//	return l3;
//}