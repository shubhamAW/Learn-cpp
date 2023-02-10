#include <cstring>
#include <iostream>

#include "TextBox.h"
#include "ConsoleIO.h"

TextBox::TextBox(const Point &from, const Point &to, const char *ptext)
	: Rectangle(from, to), m_ptext(nullptr) {
	SetText(ptext);
}

TextBox::TextBox(const TextBox &textbox)
	: Rectangle(textbox), m_ptext(nullptr) {
	SetText(textbox.GetText());
}

TextBox::~TextBox() {
	delete m_ptext;
	m_ptext = nullptr;
}

const char* TextBox::GetText() const {
	return m_ptext;
}

void TextBox::SetText(const char *ptext) {
	delete m_ptext;
	int len = strlen(ptext);
	m_ptext = new char[len + 1];
	strcpy_s(m_ptext, len + 1, ptext);
}

void TextBox::Draw() {
	int x1 = GetFrom().GetX();
	int y1 = GetFrom().GetY();
	int x2 = GetTo().GetX();
	int y2 = GetTo().GetY();
	int x = x1 + (x2 - x1 - strlen(m_ptext)) / 2;
	int y = (y1 + y2) / 2;
	Rectangle::Draw();
	ConsoleIO::GotoXY(x, y);
	std::cout << m_ptext;
}

TextBox& TextBox::operator=(const TextBox &textbox) {
	Rectangle::operator=(textbox);
	SetText(textbox.GetText());
	return *this;
}