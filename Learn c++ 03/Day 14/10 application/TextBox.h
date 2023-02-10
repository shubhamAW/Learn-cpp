#pragma once


#include "Rectangle.h"

class TextBox : public Rectangle {
public:
	TextBox(const Point &from, const Point &to, const char *ptext);
	TextBox(const TextBox &textbox);
	~TextBox();
public:
	const char * GetText() const;
	void SetText(const char *ptext);
public:
	void Draw();
public:
	TextBox& operator=(const TextBox &textbox);
private:
	char *m_ptext;
};