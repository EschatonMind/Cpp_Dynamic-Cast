#include <iostream>
using namespace std;

class Parent {

	virtual void speak() {
		cout << "Parent" << endl;
	}
};

class Child : public Parent {

};

template<typename T, typename K>
bool Cast(T*Tvalue, K*Kvalue) {
	bool valid;
	T* value = dynamic_cast<T*>(Kvalue);
	if (value) {
		valid = true;
	}
	else {
		valid = false;
	}
	return valid;
}

int main() {

	Parent* parent = new Parent;
	Child* child = new Child;
	

	cout << Cast(parent,child);

	
	
	return 0;
}