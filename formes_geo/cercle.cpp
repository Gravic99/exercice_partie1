#include "cercle.h"

Cercle::Cercle():Figure()
{
	rayon = 0;
}

Cercle::Cercle(int inX, int inY, int inRayon) : Figure(inX, inY)
{
	rayon = inRayon;
}

Cercle::Cercle(const Cercle& inCercle):Figure(inCercle)
{
	rayon = inCercle.rayon;
}
Cercle::~Cercle()
{

}

void Cercle::setRayon(int inRayon)
{
  rayon = inRayon;
}

int Cercle::getRayon() const
{
	return rayon;
}
float Cercle::calculerPerimetre()const
{
	return (2 * Pi*rayon);
}
float Cercle::calculerAire() const
{
	return (Pi *rayon*rayon);
}
void Cercle::Selectionner(int inX, int inY)
{
	float RayonFloat = (float)rayon;
	float XFloat = (float)inX;
	float Yfloat = (float)inY;
	float centreX  = (float)(x + rayon);
	float centreY = (float)(y + rayon);

	if (((pow((XFloat - centreX), 2) + pow((Yfloat - centreY), 2)) / pow(RayonFloat, 2)) <= 1)
	{
		
			estSelectionne = true;
		
	}

}