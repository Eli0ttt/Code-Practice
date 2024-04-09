#/*include <iostream>
using namespace std;

struct node{
	int val;
	node* next;
};

node* createList(){
	int data;
	if (cin >> data, data == -1)return NULL;
	node* head = new node;
	head->val = data;
	head->next = NULL;
	node* r = head;
	while (cin >> data, data != -1) {
		node* p = new node;
		p->val = data;
		p->next = NULL;
		r->next = p;
		r = p;
	}
	return head;
}

node* merge(node* head1, node* head2){
	if (!head1)return head2;
	if (!head2)return head1;
	node* head3 = new node;
	head3->next = NULL;
	if (head1->val < head2->val) {
		head3->val = head1->val;
		head1 = head1->next;
	}
	else {
		head3->val = head2->val;
		head2 = head2->next;
	}
	node* r = head3;
	while (head1 && head2) {
		if (head1->val < head2->val) {
			node* p = new node;
			p->val = head1->val;
			p->next = NULL;
			r->next = p;
			r = p;
			head1 = head1->next;
		}
		else {
			node* p = new node;
			p->val = head2->val;
			p->next = NULL;
			r->next = p;
			r = p;
			head2 = head2->next;
		}
	}
	if (head1) r->next = head1;
	if (head2) r->next = head2;
	return head3;
}

int main(){
	node* head1, * head2, * head3;
	head1 = createList();
	head2 = createList();
	head3 = merge(head1, head2);
	if (head3 == NULL){
		cout << "-1 ";
	}
	else{
		node* p = head3;
		while (p != NULL)		{
			cout << p->val << " ";
			p = p->next;
		}
	}
	return 0;
}*/
