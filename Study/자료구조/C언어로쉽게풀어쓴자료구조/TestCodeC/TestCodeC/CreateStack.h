#pragma once


template<typename T>
class BaseStack
{
public:
	BaseStack() {}
	virtual ~BaseStack() {}

	virtual void Push(T data) = 0;
	virtual T Pop() = 0;
	virtual bool IsPull() = 0;
	virtual bool IsEmpty() = 0;
};

template<typename T>
class StackArray : BaseStack<T>
{
private:
	T* arrayList;
	int index;
	int length;
public:
	StackArray() 
	{
		index = -1;
		length = 0;
	}

	StackArray(int n)
	{
		index = -1;
		length = n;
		arrayList = new T[n];
	}

	virtual ~StackArray() {}

	virtual void Push(T data) override
	{
		if (IsPull())
		{
			printf("overFlow");
			return;
		}

		index++;

		arrayList[index] = data;

		printf("push / %d / %d\n", index, data);
	}

	virtual T Pop() override
	{
		if (index == -1)
		{
			printf("underFlow");
			return NULL;
		}

		T getData = arrayList[index];

		index--;

		return getData;
	}

	virtual bool IsPull() override
	{
		if (index < length)
			return false;

		return true;
	}

	virtual bool IsEmpty() override
	{
		if (index == -1)
			return true;

		return false;
	}
};

template<typename T>
class StackLinkedList : BaseStack<T>
{
private:
	T* top;
public:
	StackLinkedList()
	{

	}
	virtual ~StackLinkedList()
	{

	}

	virtual void Push(T data) override
	{

	}

	virtual T Pop() override
	{
		return *top;
	}

	virtual bool IsPull() override
	{
		return true;
	}

	virtual bool IsEmpty() override
	{
		return true;
	}
};

class CreateStack
{
private:

public:
	CreateStack();
	~CreateStack();

	template<typename T>
	static BaseStack<T>* CreateStackArray(int n)
	{
		return (BaseStack<T>*)new StackArray<T>(n);
	}

	template<typename T>
	static BaseStack<T>* CreateStackLinkedList()
	{
		return (BaseStack<T>*)new StackLinkedList<T>();
	}
};