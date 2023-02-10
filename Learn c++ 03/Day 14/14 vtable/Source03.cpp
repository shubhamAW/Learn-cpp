class I1 {
public:
	virtual void f() = 0;
};

class I2 {
public:
	virtual void g() = 0;
};

class X : public I1, public I2 {
public:
	void f() {}
	void g() {}
};

int main() {
	X u;
	I1 *p = &u;
	I2 *q = &u;
	q->g();
}