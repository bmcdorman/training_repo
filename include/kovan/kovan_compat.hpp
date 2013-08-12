#ifndef _KOVAN_COMPAT_HPP_
#define _KOVAN_COMPAT_HPP_

#ifdef _MSC_VER
#include <basetsd.h>
typedef SSIZE_T ssize_t;
#define PRETTYFUNC __FUNCSIG__
#else
#define PRETTYFUNC __PRETTY_FUNCTION__
#endif

#endif