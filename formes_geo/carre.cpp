#include "carre.h"

Carre::Carre():Figure()
{
	cote=0;
}

Carre::Carre(int inX, int inY, int inCote) : Figure(inX, inY)
{
	cote = inCote;
}

Carre::Carre(const Carre& inCarre):Figure(inCarre)
{
	cote=inCarre.cote;
}
Carre::~Carre() {

}
void Carre::setCote(int inCote)
{
  cote = inCote;
}

int Carre::getCote() const
{
	return cote;
}
float Carre::calculerPerimetre() const
{
	return (4 * cote);
}
float Carre::calculerAire() const
{
	return(cote*cote);

}
void Carre::Selectionner(int inX, int inY)
{
	int x2 = x + cote;
	int y2 = y + cote;
	if (inX >= x && inX <= x2 && inY >= y && inY <= y2)
	{
		estSelectionne = true;
	}
		
}
