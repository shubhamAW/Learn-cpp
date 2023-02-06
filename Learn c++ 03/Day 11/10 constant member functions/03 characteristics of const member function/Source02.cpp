int g_data;

class Dummy {
public:
	void F() const;
private:
	int m_data;
};

void Dummy::F() const {
	int data = 0;
	data = 1;
	g_data = 1;
	m_data = 1;
}

int main() {}

/*
- local variables can be modified within const function.
- global variables can be modified within const function.
- data members cannot be modified within const function.
*/
