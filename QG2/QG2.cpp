#include<iostream>
#include"unname.h"
using namespace std;
Status initStack(SqStack* s, int sizes);//初始化
Status isEmptyStack(SqStack* s);//判断栈是否为空
Status getTopStack(SqStack* s, ElemType* e); //得到栈顶元素
Status clearStack(SqStack* s);//清空栈
Status destroyStack(SqStack* s);//销毁栈
Status stackLength(SqStack* s, int* length);//检测栈长度
Status pushStack(SqStack* s, ElemType data);//入栈
Status popStack(SqStack* s, ElemType* data);//出栈

int main()
{
	SqStack *Sqlist=nullptr;
	int e;
	char caozuo;
	cout << "请输入您的数字：" << endl;
	cin >> e;
	pushStack(Sqlist,e);//将读取的数字压入栈顶

	cout << "请选择您想要的操作：" << endl;
	cout << "a.初始化;" << endl;
	cout << "b.判断栈是否为空;" << endl;
	cout << "c.得到栈顶元素;" << endl;
	cout << "d.清空栈;" << endl;
	cout << "e.销毁栈;" << endl;
	cout << "f.检测栈长度;" << endl;
	cout << "g.入栈;" << endl;
	cout << "h.出栈;" << endl;
	/*Status (*ptr_func1)(SqStack * s,int sizes);
	Status (*ptr_func2)(SqStack * s);
	Status (*ptr_func3)(SqStack * s, ElemType * e);
	Status (*ptr_func4)(SqStack * s, ElemType data);
	Status(*ptr_func4)(SqStack * s, ElemType data)用指针的方法似乎不是很方便*/
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

