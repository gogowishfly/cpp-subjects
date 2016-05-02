#include "ColorMatch.h"
#include "Filter.h"
#include "RedEye.h"
#include "Scale.h"


using namespace CHAINOFRESPONSIBILITY;

int main()
{
	Photo *p = new Photo("Y2013 Photo");
	//processPhoto(*p);

	ColorMatch match;
	RedEye eye;
	Filter filter;
	Scale scale(2);
	scale.setNextProcessor(&eye);
	eye.setNextProcessor(&match);
	match.setNextProcessor(&filter);
	scale.process(*p);

	return 0;
}

//void processPhoto(Photo &photo)
//{
//	ColorMatch match;
//	RedEye eye;
//	Filter filter;
//	Scale scale(Scale::S200);
//	scale.setNextProcessor(&eye);
//	eye.setNextProcessor(&match);
//	match.setNextProcessor(&filter);
//	scale.process(photo);
//}