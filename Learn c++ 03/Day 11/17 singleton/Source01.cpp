class X {
private:
	X() = default;
	X(const X &) = delete;
private:
	X& operator=(const X &) = delete;
public:
	void f();
	void Release();
public:
	static X* CreateInstance();
private:
	static X * m_px;
};

X* X::m_px = nullptr;

void X::f() {

}

X* X::CreateInstance() {
	if (m_px == nullptr)
		m_px = new X;
	return m_px;
}

void X::Release() {
	delete m_px;
	m_px = nullptr;
}

int main() {
	X *px = X::CreateInstance();
	px->f();

	px = X::CreateInstance();
	px->f();

	px->Release();
}

/*
- When there are no data members in class, the size of such class is 1 byte.
- If constructor is written with private access, then object cannot be
  instantiated using that constructor.
*/
