#ifndef CLIB_LOWLEVEL_PROTOS_H
#define CLIB_LOWLEVEL_PROTOS_H

/*
    *** Automatically generated from 'lowlevel.conf'. Edits will be lost. ***
    Copyright � 1995-2005, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>
#include <libraries/lowlevel.h>
#include <devices/timer.h>

AROS_LP1(ULONG, ReadJoyPort,
        AROS_LPA(ULONG, port, D0),
        struct Library *, LowLevelBase, 10, LowLevel)

AROS_LP0(ULONG, GetLanguageSelection,
        struct Library *, LowLevelBase, 11, LowLevel)

AROS_LP0(ULONG, GetKey,
        struct Library *, LowLevelBase, 13, LowLevel)

AROS_LP2(void, QueryKeys,
        AROS_LPA(struct KeyQuery *, queryArray, A0),
        AROS_LPA(UBYTE, arraySize, D1),
        struct Library *, LowLevelBase, 14, LowLevel)

AROS_LP2(APTR, AddKBInt,
        AROS_LPA(APTR, intRoutine, A0),
        AROS_LPA(APTR, intData, A1),
        struct Library *, LowLevelBase, 15, LowLevel)

AROS_LP1(void, RemKBInt,
        AROS_LPA(APTR, intHandle, A1),
        struct Library *, LowLevelBase, 16, LowLevel)

AROS_LP2(APTR, AddTimerInt,
        AROS_LPA(APTR, intRoutine, A0),
        AROS_LPA(APTR, intData, A1),
        struct Library *, LowLevelBase, 18, LowLevel)

AROS_LP1(void, RemTimerInt,
        AROS_LPA(APTR, intHandle, A1),
        struct Library *, LowLevelBase, 19, LowLevel)

AROS_LP1(void, StopTimerInt,
        AROS_LPA(APTR, intHandle, A1),
        struct Library *, LowLevelBase, 20, LowLevel)

AROS_LP3(void, StartTimerInt,
        AROS_LPA(APTR, intHandle, A1),
        AROS_LPA(ULONG, timeInterval, D0),
        AROS_LPA(BOOL, continuous, D1),
        struct Library *, LowLevelBase, 21, LowLevel)

AROS_LP1(ULONG, ElapsedTime,
        AROS_LPA(struct EClockVal *, context, A0),
        struct Library *, LowLevelBase, 22, LowLevel)

AROS_LP2(APTR, AddVBlankInt,
        AROS_LPA(APTR, intRoutine, A0),
        AROS_LPA(APTR, intData, A1),
        struct Library *, LowLevelBase, 23, LowLevel)

AROS_LP1(void, RemVBlankInt,
        AROS_LPA(APTR, intHandle, A1),
        struct Library *, LowLevelBase, 24, LowLevel)

#endif /* CLIB_LOWLEVEL_PROTOS_H */
