
#include <iostream>

class Engine {
public:
	Engine& operator=(Engine& e) {
		this->cc_ = new double(e + 0);
		return *this;
	}
	Engine(Engine& e) {
		this->cc_ = new double(e + 0);
	}
	double operator+(double a) {
		return *cc_ + a;
	}
	Engine(int cc, int cl, double rpm)
	{
		this->cc_ = new double(cc);
		this->cl_ = cl;
		this->rpm_ = rpm;
		std::cout << "������ 2 ȣ��" << std::endl;
	}
	Engine() { 
		std::cout << "������ȣ��" << std::endl;
	}
	~Engine() {
		delete cc_;
		std::cout << "�Ҹ���ȣ��" << std::endl;
	}
	void start() {
		rpm_ = 1000;
	}

private:
	double* cc_;
	double hp_;
	int cl_;
	double rpm_;
};

int main() {
	int n(10);
	int a(n);

	Engine e1(2000, 4, 0);
	{
		Engine e3, e4(e1);
		e3 = e1;
	}

	
	e1.start();
	std::cout << e1 + 1000 << std::endl;
	return 0;
}