enum class Color {
	Black,
	Red,
	Green,
	Blue = 2,
	White
};

class Rectangle {
public:
	void Fill(Color colorcode) {

	}
};

int main() {
	Rectangle r;
	r.Fill(Color::White);
	r.Fill(1); // note int cannot be passed as an argument
}

/*
- The underneath data type of enum is int.
- Specific value can be assigned to enum constants.
- When no value is assigned to first enum constant, it start with 0.
- The value of enum constant is calculated as 1 + value of previous enum constant.
- Function parameter can be enum type.
- In such case, only enum permitted constants can be passed as argument to it.
- Though int is underlying data type of enum, it cannot be passed as an argument.
*/