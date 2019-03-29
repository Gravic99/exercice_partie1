#ifndef FigureH
#define FigureH

#include <string>
using namespace std;

const float Pi=(float)3.1416;

class Figure
{
protected:
	int x;	//coin supérieur gauche
	int y;
	bool estSelectionne;

public:
	Figure();
	Figure(int x, int y);
	Figure(const Figure&);
	int getX() const;
	int getY() const;

	virtual int getCote() const;
	virtual int getRayon() const;
	virtual float calculerPerimetre() const;
	virtual float calculerAire() const;
	virtual void setPoint(int X, int Y);
	virtual void setX(int);
	virtual void setY(int);
	virtual void setRayon(int);
	virtual void setCote(int);
	virtual bool EstSelectionne();
	virtual void Deselectionner();
};

#endif