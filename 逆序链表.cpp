//#include<iostream>
//using namespace std;
//
//struct node{
//	int val;
//	node* next;
//};
//
//node* createList(){
//	node* head = NULL;
//	int data;
//	if (cin >> data, data == -1)return head;
//	head = new node;
//	head->val = data;head->next = NULL;
//	node* r = head;
//	while (cin >> data, data != -1) {
//		node* p = new node;
//		p->val = data;
//		p->next = NULL;
//		r->next = p;
//		r = p;
//	}
//	return head;
//}
//
//node* reverseList(node* head){
//	if (!head)return head;
//	node* newhead = new node;
//	newhead->next = NULL;
//	while (head) {
//		node* p = new node;
//		p->val = head->val;
//		p->next = newhead->next;
//		newhead->next = p;
//		head = head->next;
//	}
//	newhead->val = newhead->next->val;
//	newhead->next = newhead->next->next;
//	return newhead;
//}
//
//int main(){
//	node* head = NULL;
//	head = createList();
//	node* head1 = NULL;
//	head1 = reverseList(head);
//	if (head1 == NULL){
//		cout << "-1 ";
//	}
//	else{
//		node* p = head1;
//		while (p != NULL){
//			cout << p->val << " ";
//			p = p->next;
//		}
//	}
//	return 0;
//}

