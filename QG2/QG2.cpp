#include<iostream>
#include"unname.h"
using namespace std;
Status initStack(SqStack* s, int sizes);//��ʼ��
Status isEmptyStack(SqStack* s);//�ж�ջ�Ƿ�Ϊ��
Status getTopStack(SqStack* s, ElemType* e); //�õ�ջ��Ԫ��
Status clearStack(SqStack* s);//���ջ
Status destroyStack(SqStack* s);//����ջ
Status stackLength(SqStack* s, int* length);//���ջ����
Status pushStack(SqStack* s, ElemType data);//��ջ
Status popStack(SqStack* s, ElemType* data);//��ջ

int main()
{
	SqStack *Sqlist=nullptr;
	int e;
	char caozuo;
	cout << "�������������֣�" << endl;
	cin >> e;
	pushStack(Sqlist,e);//����ȡ������ѹ��ջ��

	cout << "��ѡ������Ҫ�Ĳ�����" << endl;
	cout << "a.��ʼ��;" << endl;
	cout << "b.�ж�ջ�Ƿ�Ϊ��;" << endl;
	cout << "c.�õ�ջ��Ԫ��;" << endl;
	cout << "d.���ջ;" << endl;
	cout << "e.����ջ;" << endl;
	cout << "f.���ջ����;" << endl;
	cout << "g.��ջ;" << endl;
	cout << "h.��ջ;" << endl;
	/*Status (*ptr_func1)(SqStack * s,int sizes);
	Status (*ptr_func2)(SqStack * s);
	Status (*ptr_func3)(SqStack * s, ElemType * e);
	Status (*ptr_func4)(SqStack * s, ElemType data);
	Status(*ptr_func4)(SqStack * s, ElemType data)��ָ��ķ����ƺ����Ǻܷ���*/
	cin>>caozuo;
	switch (caozuo)
	{
	case'a':
		initStack;//(Sqlist,*length);
		break;
	case'b':
		isEmptyStack(Sqlist);
		break;
	case'c':
		getTopStack;//(Sqlist,e);
		break;
	case'd':
		 clearStack(Sqlist);
		break;
	case'e':
		 destroyStack(Sqlist);
		break;
	case'f':
		stackLength;//(Sqlist,);
		break;
	case'g':
		pushStack(Sqlist,e);
		break;
	case'h':
		popStack;// (Sqlist, *);
		break;
	}
	
	return 0;
}

