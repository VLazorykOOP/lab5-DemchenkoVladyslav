
#include "Lab5Exmaple.h"
inline istream& operator>>(istream& is, Furniture& f)
{
	is >> f.width;
	is >> f.height;
	is >> f.length;
	return is;
}
inline ostream& operator<<(ostream& os, const Furniture& f)
{
	os << "Width: " << f.width << endl;
	os << "Height: " << f.height << endl;
	os << "Length: " << f.length << endl;
	return os;
}