class Y {
public:
	void Process();
};

void Y::Process() {

}

class X {
public:
	X(Y &y);
public:
	void LoadData();
private:
	Y &m_y;
};

X::X(Y &y) : m_y(y) {}

void X::LoadData() {
	// try to load data
	// and after data loading is over
	// call processs on Y object
	m_y.Process();
}

int main() {
	Y v;
	X u(v);
	u.LoadData();
}