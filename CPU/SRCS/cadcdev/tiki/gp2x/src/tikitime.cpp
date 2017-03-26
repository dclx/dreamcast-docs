/*
   Tiki

   tikitime.cpp

   Copyright (C)2005 Cryptic Allusion, LLC
*/

#include "pch.h"
#include "Tiki/tikitime.h"

#include <sys/time.h>
#include <unistd.h>

namespace Tiki::Time {

uint64 gettime() {
	timeval tv;
	gettimeofday(&tv, NULL);
	
	uint64 rv = tv.tv_sec; rv *= 1000000;
	rv += tv.tv_usec;
	
	return rv;
}

void sleep(uint64 us) {
	usleep((unsigned int)us);
}

}








