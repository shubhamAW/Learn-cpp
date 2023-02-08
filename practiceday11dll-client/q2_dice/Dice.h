#pragma once

class  Dice {
public:
	void Roll();
	int GetFaceValue()const;

private:
	int m_faceValue;
};