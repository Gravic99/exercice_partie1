#ifndef carreH
#define carreH
#include "figure.h"

class Carre:public Figure
{
  protected:
    int cote;
  public:
	Carre();
	Carre(int x, int y, int cote);
	Carre(const Carre&);
	virtual ~Carre();
	virtual void setCote(int);
	virtual int getCote() const;
	virtual float calculerPerimetre() const;
	virtual float calculerAire() const;
	virtual void Selectionner(int, int);
};
#endif
