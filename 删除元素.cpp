//#include<iostream>
//using namespace std;
//
//struct node{
//	int val;
//	node* next;
//};
//
//node* createList(){
//	int data;
//	if (cin >> data, data == -1)return NULL;
//	node* head = new node;
//	head->val = data;
//	head->next = NULL;
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
//node* deleteElements(node* head, int v){ 
//	while (head && head->val == v)head = head->next;
//	if (!head)return NULL;
//	node* p = head->next;
//	node* r = head;
//	while (p) {
//		while (p && p->val != v) {
//			p = p->next;
//			r = r->next;
//		}
//		if (p) {
//			r->next = p->next;
//		}
//		p = r->next;
//	}
//	return head;
//}
//
//int main(){
//	node* head = NULL;
//	head = createList();
//	int v;
//	cin >> v;
//		head = deleteElements(head, v);
//	if (head == NULL){
//		cout << "-1 ";
//	}
//	else{
//		node* p = head;
//		while (p != NULL){
//			cout << p->val << " ";
//			p = p->next;
//		}
//	}
//	return 0;
//}
//
//
