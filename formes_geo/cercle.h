#ifndef cercleH
#define cercleH
#include "figure.h"
//---------------------------------------------------------------------------
class Cercle:public Figure
{
  protected:
    int rayon;
  public:
	Cercle();
	Cercle(int x, int y, int rayon);
	Cercle(const Cercle&);
	virtual ~Cercle();
   virtual void setRayon(int);
   virtual int getRayon() const;
   virtual float calculerPerimetre() const;
   virtual float calculerAire() const;
   virtual void Selectionner(int, int);
};
#endif
