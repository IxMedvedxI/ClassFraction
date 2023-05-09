#pragma once
#include <ostream>
#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
//�������� ���� 
struct Node {
	T info;
	Node* next;
	//��� ������������
	Node() {
		this->info = NULL;
		next = NULL;
	}
	Node(T inf) {
		this->info = inf;
		next = NULL;
	}
};
template <class T>
class MyList
{
private:
	//������
	Node<T>* head;
	//�����
	Node<T>* tail;
	//������
	int ln;
public:
	MyList(){
		head = tail = NULL;
		ln = 0;
	}
	MyList(const T& x) {
		head = new Node<T>(x);
		tail = head;
		ln = 1;
	}
	//���������� � ������
	void addbegin(T inf) {
		if (head == NULL) {//�������� �� ������� ������
			head = tail = new Node<T>(inf);
			return;
		}
		Node<T>* buf = new Node<T>(inf);//������� ����� ����
		buf->next = head;
		head = buf;//������� ������ � ������
		ln++;
	}
	//���������� � �����
	void addend(T inf) {
		if (head == NULL) {//�������� �� ������� ������
			head = tail = new Node<T>(inf);
			return;
		}
		Node<T>* buf = new Node<T>(inf);//������� ����� ����
		tail->next = buf;
		tail = buf;//������� ����� � �����
		ln++;
	}
	int len() {
		return ln;
	}
	//��������� � ��������  ������ 
	T getdelstart() {
		if (head == NULL) {//�������� �� ������� ������
			cout << "������ ����" << endl;
			return NULL;
		}
		T out = head->info;
		head = head->next;//������� ������
		ln--;
		return out;
	}
	//��������� � ��������  �����
	T getdelend() {
		if (head == NULL) {//�������� �� ������� ������
			cout << "������ ����" << endl;
			return NULL;
		}
		Node<T>* buf = head;//�������� ������ ����� �� ������ ������
		for (; buf->next != tail; buf = buf->next);//���� �� ������
		T out = tail->info;
		tail = buf;
		tail->next = NULL;
		ln--;
		return out;
	}
	//���������� []
	T &operator [](int i) {	
		if (head == NULL) {//�������� �� ������� ������
			cout << "������ ����" << endl;
			return NULL;
		}
		Node<T>* list = head; //�������� ������ ����� �� ������ ������
		for (int j = 0; j < i; j++) {//���� �� ������ ������ ���������� ��������
			list = list.next;
		}
		return list.info;
	}
	//������������ ������ � ��������� �������
	void rands() {
		if (head == NULL) {//�������� �� ������� ������
			cout << "������ ����" << endl;
			return;
		}
		Node<T>* list = head;//�������� ������ ����� �� ������ ������
		srand(time(NULL));
		T* arr = new T[ln];//������� ������ ����� ���� �������
		for (int i = 0; list != NULL; list = list->next) {//���� �� ������ � ���������� ��� � ������
			arr[i] = list->info;
			i++;
		}
		for (int i = ln - 1; i > 0; i--) {//������������ ������ � ��������� �������
			swap(arr[i], arr[rand() % (i + 1)]);
		}
		list = head;
		for (int i = 0; list != NULL; list = list->next) {//���� �� ������ � ���������� � ������
			list->info = arr[i];
			i++;
		}

	}
	//���������� ������
	friend ostream& operator<<(ostream& os, const MyList& list) {
		Node<T>* buf = list.head;
		while (buf->next != NULL) {
			os << buf->info << " ";
			buf = buf->next;
		}
		os << buf->info ;
		return os;
	}
};


