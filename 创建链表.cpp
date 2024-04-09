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
//	node* head = NULL;
//	if (cin >> data, data == -1)return head;
//	head = new node;
//	head->val = data; head->next = NULL;
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
//int main(){
//	node* head = NULL;
//	head = createList();
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