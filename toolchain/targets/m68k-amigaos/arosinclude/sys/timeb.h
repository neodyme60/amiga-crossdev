#ifndef _SYS_TIMEB_H_
#define _SYS_TIMEB_H_
/*
    Copyright � 1995-2002, The AROS Development Team. All rights reserved.
    $Id: timeb.h 14423 2002-05-04 04:49:32Z iaint $

    Header <sys/timeb.h>
*/

#include <aros/system.h>

struct timeb
{
    time_t	    time;
    unsigned short  millitm;
    short	    timezone;
    short	    dstflag;
};

__BEGIN_DECLS
int ftime(struct timeb *tp);
__END_DECLS

#endif /* _SYS_TIMEB_H_ */
