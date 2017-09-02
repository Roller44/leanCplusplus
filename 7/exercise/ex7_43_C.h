#ifndef CH
#define CH
#include "ex7_43_NoDefault.h"

class C
{
public:
//	C() = default;
	C(): ndef(0) { };

private:
	NoDefault ndef;
};
#endif
