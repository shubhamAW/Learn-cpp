class X {
private:
	X() {
	}
	X(const X &x) {
	}
public:
	void f() {

	}
	void Release() {
		delete m_px;
		m_px = nullptr;
	}
public:
	static X* CreateObject() {
		if (m_px == nullptr)
			m_px = new X;
		return m_px;
	}
private:
	static X *m_px;
};

X *X::m_px = nullptr;

int main() {
	//X a, b, c, d;
	X *px = X::CreateObject();
	px->f();

	X::CreateObject()->f();

	X::CreateObject()->Release();
}