#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define Length 100
#include<iostream>

using namespace std;  
int e;

 typedef enum Status
 {
	ERROR = 0,
	SUCCESS = 1
  };

	typedef int ElemType;

	typedef struct SqStack//����ջ
	{
		ElemType* elem;
		int top ;
		int base;
		int sizes;
		int x[Length];
		int *a = &base;
	};

	//���������˳��ջ
	Status initStack(SqStack * s, int sizes);//��ʼ��
	Status isEmptyStack(SqStack * s);//�ж�ջ�Ƿ�Ϊ��
	Status getTopStack(SqStack * s, ElemType * e); //�õ�ջ��Ԫ��
	Status clearStack(SqStack * s);//���ջ
	Status destroyStack(SqStack * s);//����ջ
	Status stackLength(SqStack * s, int* length);//���ջ����
	Status pushStack(SqStack * s, ElemType data);//��ջ
	Status popStack(SqStack * s, ElemType * data);//��ջ

	Status initStack(SqStack * s, int sizes)//��ʼ��ջ
	{
		s->a = new int[Length];
		if (!s->base) {
			exit(-1);
			s->top = s->base;
			s->sizes = Length;
			return SUCCESS;
		}
		else {
			return ERROR;
		}
	}
	Status isEmptyStack(SqStack * s)//�ж�ջ�Ƿ�Ϊ��
	{
		if (s->top == -1)
			return SUCCESS;
		else
			return ERROR;

	}
	Status getTopStack(SqStack * s, ElemType * e)//�õ�ջ��Ԫ��
	{
		int a;
		a = s->top;
		return SUCCESS;
	}
	Status clearStack(SqStack * s)//���ջ
	{
		s->top = s->base;
		return SUCCESS;
	}
	Status destroyStack(SqStack * s)//����ջ
	{
		delete s->a ;
		s->base = NULL;
		s->top = NULL;
		s->sizes = 0;
		return SUCCESS;

	}
	Status stackLength(SqStack* s, int* length)//���ջ����
	{
		for (int length = -1; length< s->top; length++);
		cout << length << endl;
		return SUCCESS;
	}
	Status pushStack(SqStack* s, ElemType data)//��ջ
	{
		if (s->top > Length - 1)//�������ջ�������������Ѿ�����ȥ�ˡ���
		{
			return ERROR;
		}
		else{
		s->top++;//ջ����1
		s->x[s->top] = e;//���ʱ����˵����ֵ����¸�����
		}
		   return SUCCESS;
	}
	Status popStack(SqStack* s, ElemType* data)//��ջ
	{
		if (s->top == s->base)//top��base�غ�ʱ��ջΪ�գ�û�ж�������ȡ����
		{
			return ERROR;
		}
		s->top--;//top�ȼ�1
		e = s->top;//Ȼ�����ȡ����
		return SUCCESS;
	}

#endif 