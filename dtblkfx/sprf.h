//DO NOT MODIFY! this file generated by preprocess.pl from sprf_.h
/*
 run through preprocess.pl to generate actual code
 perl preprocess.pl sprf_.h >sprf.h


generate lots of functions that take variable arguments so that you can do things
like this:

	CharArray<2048> my_string;
	my_string << sprf("%.3f %d", 12.3456, 13);
	// my_string now contains "12.346 13"

*/

#ifndef _DT_MISC_STUFF_H_
#include "misc_stuff.h"
#else
#ifndef _DT_SPRF_H_
#define _DT_SPRF_H_

//-------------------------------------------------------------------------------------------------

template <class ARG1> struct RngSprintf1
{
	const char* fmt;
	ARG1 arg1;
};

template <class ARG1> inline CharRng operator << (CharRng dst, RngSprintf1<ARG1> s)
{
	return rng_sprf(dst, s.fmt, s.arg1);
}

template <class ARG1> inline RngSprintf1<ARG1> sprf(const char* fmt, ARG1 arg1)
{
	RngSprintf1<ARG1> r = { fmt, arg1 };
	return r;
}
//-------------------------------------------------------------------------------------------------

template <class ARG1, class ARG2> struct RngSprintf2
{
	const char* fmt;
	ARG1 arg1;
	ARG2 arg2;
};

template <class ARG1, class ARG2> inline CharRng operator << (CharRng dst, RngSprintf2<ARG1, ARG2> s)
{
	return rng_sprf(dst, s.fmt, s.arg1, s.arg2);
}

template <class ARG1, class ARG2> inline RngSprintf2<ARG1, ARG2> sprf(const char* fmt, ARG1 arg1, ARG2 arg2)
{
	RngSprintf2<ARG1, ARG2> r = { fmt, arg1, arg2 };
	return r;
}
//-------------------------------------------------------------------------------------------------

template <class ARG1, class ARG2, class ARG3> struct RngSprintf3
{
	const char* fmt;
	ARG1 arg1;
	ARG2 arg2;
	ARG3 arg3;
};

template <class ARG1, class ARG2, class ARG3> inline CharRng operator << (CharRng dst, RngSprintf3<ARG1, ARG2, ARG3> s)
{
	return rng_sprf(dst, s.fmt, s.arg1, s.arg2, s.arg3);
}

template <class ARG1, class ARG2, class ARG3> inline RngSprintf3<ARG1, ARG2, ARG3> sprf(const char* fmt, ARG1 arg1, ARG2 arg2, ARG3 arg3)
{
	RngSprintf3<ARG1, ARG2, ARG3> r = { fmt, arg1, arg2, arg3 };
	return r;
}
//-------------------------------------------------------------------------------------------------

template <class ARG1, class ARG2, class ARG3, class ARG4> struct RngSprintf4
{
	const char* fmt;
	ARG1 arg1;
	ARG2 arg2;
	ARG3 arg3;
	ARG4 arg4;
};

template <class ARG1, class ARG2, class ARG3, class ARG4> inline CharRng operator << (CharRng dst, RngSprintf4<ARG1, ARG2, ARG3, ARG4> s)
{
	return rng_sprf(dst, s.fmt, s.arg1, s.arg2, s.arg3, s.arg4);
}

template <class ARG1, class ARG2, class ARG3, class ARG4> inline RngSprintf4<ARG1, ARG2, ARG3, ARG4> sprf(const char* fmt, ARG1 arg1, ARG2 arg2, ARG3 arg3, ARG4 arg4)
{
	RngSprintf4<ARG1, ARG2, ARG3, ARG4> r = { fmt, arg1, arg2, arg3, arg4 };
	return r;
}
//-------------------------------------------------------------------------------------------------

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5> struct RngSprintf5
{
	const char* fmt;
	ARG1 arg1;
	ARG2 arg2;
	ARG3 arg3;
	ARG4 arg4;
	ARG5 arg5;
};

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5> inline CharRng operator << (CharRng dst, RngSprintf5<ARG1, ARG2, ARG3, ARG4, ARG5> s)
{
	return rng_sprf(dst, s.fmt, s.arg1, s.arg2, s.arg3, s.arg4, s.arg5);
}

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5> inline RngSprintf5<ARG1, ARG2, ARG3, ARG4, ARG5> sprf(const char* fmt, ARG1 arg1, ARG2 arg2, ARG3 arg3, ARG4 arg4, ARG5 arg5)
{
	RngSprintf5<ARG1, ARG2, ARG3, ARG4, ARG5> r = { fmt, arg1, arg2, arg3, arg4, arg5 };
	return r;
}
//-------------------------------------------------------------------------------------------------

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6> struct RngSprintf6
{
	const char* fmt;
	ARG1 arg1;
	ARG2 arg2;
	ARG3 arg3;
	ARG4 arg4;
	ARG5 arg5;
	ARG6 arg6;
};

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6> inline CharRng operator << (CharRng dst, RngSprintf6<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6> s)
{
	return rng_sprf(dst, s.fmt, s.arg1, s.arg2, s.arg3, s.arg4, s.arg5, s.arg6);
}

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6> inline RngSprintf6<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6> sprf(const char* fmt, ARG1 arg1, ARG2 arg2, ARG3 arg3, ARG4 arg4, ARG5 arg5, ARG6 arg6)
{
	RngSprintf6<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6> r = { fmt, arg1, arg2, arg3, arg4, arg5, arg6 };
	return r;
}
//-------------------------------------------------------------------------------------------------

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7> struct RngSprintf7
{
	const char* fmt;
	ARG1 arg1;
	ARG2 arg2;
	ARG3 arg3;
	ARG4 arg4;
	ARG5 arg5;
	ARG6 arg6;
	ARG7 arg7;
};

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7> inline CharRng operator << (CharRng dst, RngSprintf7<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7> s)
{
	return rng_sprf(dst, s.fmt, s.arg1, s.arg2, s.arg3, s.arg4, s.arg5, s.arg6, s.arg7);
}

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7> inline RngSprintf7<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7> sprf(const char* fmt, ARG1 arg1, ARG2 arg2, ARG3 arg3, ARG4 arg4, ARG5 arg5, ARG6 arg6, ARG7 arg7)
{
	RngSprintf7<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7> r = { fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7 };
	return r;
}
//-------------------------------------------------------------------------------------------------

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7, class ARG8> struct RngSprintf8
{
	const char* fmt;
	ARG1 arg1;
	ARG2 arg2;
	ARG3 arg3;
	ARG4 arg4;
	ARG5 arg5;
	ARG6 arg6;
	ARG7 arg7;
	ARG8 arg8;
};

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7, class ARG8> inline CharRng operator << (CharRng dst, RngSprintf8<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8> s)
{
	return rng_sprf(dst, s.fmt, s.arg1, s.arg2, s.arg3, s.arg4, s.arg5, s.arg6, s.arg7, s.arg8);
}

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7, class ARG8> inline RngSprintf8<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8> sprf(const char* fmt, ARG1 arg1, ARG2 arg2, ARG3 arg3, ARG4 arg4, ARG5 arg5, ARG6 arg6, ARG7 arg7, ARG8 arg8)
{
	RngSprintf8<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8> r = { fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8 };
	return r;
}
//-------------------------------------------------------------------------------------------------

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7, class ARG8, class ARG9> struct RngSprintf9
{
	const char* fmt;
	ARG1 arg1;
	ARG2 arg2;
	ARG3 arg3;
	ARG4 arg4;
	ARG5 arg5;
	ARG6 arg6;
	ARG7 arg7;
	ARG8 arg8;
	ARG9 arg9;
};

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7, class ARG8, class ARG9> inline CharRng operator << (CharRng dst, RngSprintf9<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9> s)
{
	return rng_sprf(dst, s.fmt, s.arg1, s.arg2, s.arg3, s.arg4, s.arg5, s.arg6, s.arg7, s.arg8, s.arg9);
}

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7, class ARG8, class ARG9> inline RngSprintf9<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9> sprf(const char* fmt, ARG1 arg1, ARG2 arg2, ARG3 arg3, ARG4 arg4, ARG5 arg5, ARG6 arg6, ARG7 arg7, ARG8 arg8, ARG9 arg9)
{
	RngSprintf9<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9> r = { fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9 };
	return r;
}
//-------------------------------------------------------------------------------------------------

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7, class ARG8, class ARG9, class ARG10> struct RngSprintf10
{
	const char* fmt;
	ARG1 arg1;
	ARG2 arg2;
	ARG3 arg3;
	ARG4 arg4;
	ARG5 arg5;
	ARG6 arg6;
	ARG7 arg7;
	ARG8 arg8;
	ARG9 arg9;
	ARG10 arg10;
};

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7, class ARG8, class ARG9, class ARG10> inline CharRng operator << (CharRng dst, RngSprintf10<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10> s)
{
	return rng_sprf(dst, s.fmt, s.arg1, s.arg2, s.arg3, s.arg4, s.arg5, s.arg6, s.arg7, s.arg8, s.arg9, s.arg10);
}

template <class ARG1, class ARG2, class ARG3, class ARG4, class ARG5, class ARG6, class ARG7, class ARG8, class ARG9, class ARG10> inline RngSprintf10<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10> sprf(const char* fmt, ARG1 arg1, ARG2 arg2, ARG3 arg3, ARG4 arg4, ARG5 arg5, ARG6 arg6, ARG7 arg7, ARG8 arg8, ARG9 arg9, ARG10 arg10)
{
	RngSprintf10<ARG1, ARG2, ARG3, ARG4, ARG5, ARG6, ARG7, ARG8, ARG9, ARG10> r = { fmt, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10 };
	return r;
}

#endif
#endif