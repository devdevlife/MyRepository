#pragma once

class Draw
{
private:

public:
	Draw();
	~Draw();

	template<typename T>
	void DrawLine(T drawData);
};