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

	typedef struct SqStack//建立栈
	{
		ElemType* elem;
		int top ;
		int base;
		int sizes;
		int x[Length];
		int *a = &base;
	};

	//基于数组的顺序栈
	Status initStack(SqStack * s, int sizes);//初始化
	Status isEmptyStack(SqStack * s);//判断栈是否为空
	Status getTopStack(SqStack * s, ElemType * e); //得到栈顶元素
	Status clearStack(SqStack * s);//清空栈
	Status destroyStack(SqStack * s);//销毁栈
	Status stackLength(SqStack * s, int* length);//检测栈长度
	Status pushStack(SqStack * s, ElemType data);//入栈
	Status popStack(SqStack * s, ElemType * data);//出栈

	Status initStack(SqStack * s, int sizes)//初始化栈
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
	Status isEmptyStack(SqStack * s)//判断栈是否为空
	{
		if (s->top == -1)
			return SUCCESS;
		else
			return ERROR;

	}
	Status getTopStack(SqStack * s, ElemType * e)//得到栈顶元素
	{
		int a;
		a = s->top;
		return SUCCESS;
	}
	Status clearStack(SqStack * s)//清空栈
	{
		s->top = s->base;
		return SUCCESS;
	}
	Status destroyStack(SqStack * s)//销毁栈
	{
		delete s->a ;
		s->base = NULL;
		s->top = NULL;
		s->sizes = 0;
		return SUCCESS;

	}
	Status stackLength(SqStack* s, int* length)//检测栈长度
	{
		for (int length = -1; length< s->top; length++);
		cout << length << endl;
		return SUCCESS;
	}
	Status pushStack(SqStack* s, ElemType data)//入栈
	{
		if (s->top > Length - 1)//如果超出栈的容量，数字已经进不去了……
		{
			return ERROR;
		}
		else{
		s->top++;//栈顶加1
		s->x[s->top] = e;//这个时候，最顶端的数字等于新赋的数
		}
		   return SUCCESS;
	}
	Status popStack(SqStack* s, ElemType* data)//出栈
	{
		if (s->top == s->base)//top与base重合时，栈为空，没有东西可以取出来
		{
			return ERROR;
		}
		s->top--;//top先减1
		e = s->top;//然后把数取出来
		return SUCCESS;
	}

#endif 