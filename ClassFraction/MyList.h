#pragma once
#include <ostream>
#include <iostream>
#include <cstdlib>
using namespace std;

template <class T>
//Структуа узел 
struct Node {
	T info;
	Node* next;
	//два конструктора
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
	//голова
	Node<T>* head;
	//хвост
	Node<T>* tail;
	//длинна
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
	//добавление в начало
	void addbegin(T inf) {
		if (head == NULL) {//проверка на пустоту списка
			head = tail = new Node<T>(inf);
			return;
		}
		Node<T>* buf = new Node<T>(inf);//создаем новый узел
		buf->next = head;
		head = buf;//двигаем голову в начало
		ln++;
	}
	//добавление в конец
	void addend(T inf) {
		if (head == NULL) {//проверка на пустоту списка
			head = tail = new Node<T>(inf);
			return;
		}
		Node<T>* buf = new Node<T>(inf);//создаем новый узел
		tail->next = buf;
		tail = buf;//двигаем хвост в конец
		ln++;
	}
	int len() {
		return ln;
	}
	//получение и удаление  начала 
	T getdelstart() {
		if (head == NULL) {//проверка на пустоту списка
			cout << "Список пуст" << endl;
			return NULL;
		}
		T out = head->info;
		head = head->next;//перенос головы
		ln--;
		return out;
	}
	//получение и удаление  конца
	T getdelend() {
		if (head == NULL) {//проверка на пустоту списка
			cout << "Список пуст" << endl;
			return NULL;
		}
		Node<T>* buf = head;//копируем список чтобы не менять голову
		for (; buf->next != tail; buf = buf->next);//идем по списку
		T out = tail->info;
		tail = buf;
		tail->next = NULL;
		ln--;
		return out;
	}
	//перегрузка []
	T &operator [](int i) {	
		if (head == NULL) {//проверка на пустоту списка
			cout << "Список пуст" << endl;
			return NULL;
		}
		Node<T>* list = head; //копируем список чтобы не менять голову
		for (int j = 0; j < i; j++) {//идем по списку нужное количество итераций
			list = list.next;
		}
		return list.info;
	}
	//Перемешиваем список в рандомном порядке
	void rands() {
		if (head == NULL) {//проверка на пустоту списка
			cout << "Список пуст" << endl;
			return;
		}
		Node<T>* list = head;//копируем список чтобы не менять голову
		srand(time(NULL));
		T* arr = new T[ln];//создаем массив чтобы было удобней
		for (int i = 0; list != NULL; list = list->next) {//Идем по списку и записываем его в массив
			arr[i] = list->info;
			i++;
		}
		for (int i = ln - 1; i > 0; i--) {//перемешиваем массив в рандомном порядке
			swap(arr[i], arr[rand() % (i + 1)]);
		}
		list = head;
		for (int i = 0; list != NULL; list = list->next) {//идем по списку и записываем в массив
			list->info = arr[i];
			i++;
		}

	}
	//перегрузка вывода
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


