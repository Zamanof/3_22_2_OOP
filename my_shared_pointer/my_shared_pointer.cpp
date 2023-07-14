#include<iostream>

using namespace std;



template<class T>
class Shared_pointer
{
private:
	T* ptr;
	size_t* count;
public:
	Shared_pointer() :ptr(nullptr), count(nullptr) {};

	Shared_pointer(T* ptr) :ptr(ptr), count(new size_t(1)) {};

	Shared_pointer(Shared_pointer<T>& other) 
		:ptr(other.ptr), count(other.count) 
	{
		(*count)++;
	};
	Shared_pointer<T>& operator=(Shared_pointer<T>& other) {
		if (count != nullptr) 
		{
			(*count)--;
			if (*count == 0) 
			{
				delete ptr;
				delete count;
			}
		}
		count = other.count;
		ptr = other.ptr;
		(*count)++;
		return this;
	}

	Shared_pointer<T>& operator=(T* ptr) 
	{
		if (count != nullptr)
		{
			(*count)--;
			if (*count == 0)
			{
				delete ptr;
				delete count;
			}
		}
		count = new size_t(1);
		this.ptr = ptr;
		(*count)++;
		return this;
	}
	
	int use_count() {
		return *count;
	}

	T& operator*() const 
	{
		return *ptr;
	}

	T* operator->() const
	{
		return ptr;
	}

	T& get() const
	{
		return ptr;
	}

	
	~Shared_pointer() 
	{
		if (count != nullptr)
		{
			(*count)--;
			if (*count == 0)
			{
				delete ptr;
				delete count;
			}
		}
	}
	


};


class ForShared {
	string name;
	int* array;
public:
	ForShared(string name) : name(name)
	{
		array = new int[100000];
		cout << "Object " << name << " constructed" << endl;
	}
	~ForShared()
	{
		delete[] array;
		cout << "Object " << name << " destructed" << endl;
	}
	void Foo() {
		cout << name << " Fooooo" << endl;
	}

};

void foo(Shared_pointer<ForShared> sp) 
{
	cout <<"In function" << sp.use_count() << endl;
}

int main() {
	ForShared* shared = new ForShared("first");
	//Shared_pointer<ForShared> sp1(shared);
	//cout << sp1.use_count() << endl;
	//Shared_pointer<ForShared> sp2 = sp1;
	//cout << sp1.use_count() << endl;
	//cout << sp2.use_count() << endl;
	///*sp2->Foo();
	//sp1->Foo();*/
	//{
	//	Shared_pointer<ForShared> sp3 = sp1;
	//	cout << sp3.use_count() << endl;
	//}
	//cout << sp2.use_count() << endl;

	//foo(sp2);

	shared_ptr<ForShared> sp1 (shared);
	weak_ptr<ForShared> wp(sp1);
	cout << wp.use_count() << endl;
	weak_ptr<ForShared> wp1;
	cout << wp1.use_count() << endl;
	((shared_ptr<ForShared>)wp1)->Foo();

}