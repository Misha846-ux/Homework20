#include <iostream>
using namespace std;


class String {
private:
	int size;
	char* str;
public:
	String(){
		size = 80;
		str = new char[size+1];
		str[size] = '\0';
	}

	String(int new_size) {
		size = new_size;
		str = new char[size + 1];
		str[size] = '\0';
	}

	String(const char* new_str) {
		if (new_str != nullptr) {
			size = strlen(new_str);
			str = new char[size + 1];
			for (int i = 0; i <= size; i++) {
				str[i] = new_str[i];
			}
			str[size] = '\0';
		}
		else {
			str = nullptr;
		}
	}

	int getSize() {
		return size;
	}

	char* getStr() {
		return str;
	}

	void setSize(int new_size) {
		size = new_size;
	}

	void setStr(const char* new_str) {
		if (new_str != nullptr) {
			size = strlen(new_str);
			str = new char[size + 1];
			for (int i = 0; i <= size; i++) {
				str[i] = new_str[i];
			}
			str[size] = '\0';
		}
		else {
			str = nullptr;
		}
	}

	~String() {
		if (str != nullptr) {
			delete[] str;
		}
	}
};


int main()
{
	String str;
	cout << "Str: " << str.getStr()<<endl;
	cout << "Size: " << str.getSize() << endl;
	String str2{ 10 };
	cout << "Str2: " << str2.getStr() << endl;
	cout << "Size: " << str2.getSize() << endl;
	String str3{ "Hello" };
	cout << "Str3: " << str3.getStr() << endl;
	cout << "Size: " << str3.getSize() << endl;

	return 0;
}