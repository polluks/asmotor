/*  Copyright 2008-2017 Carsten Elton Sorensen

    This file is part of ASMotor.

    ASMotor is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    ASMotor is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with ASMotor.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef XASM_COMMON_XASM_H_INCLUDED_
#define XASM_COMMON_XASM_H_INCLUDED_

#include "types.h"

#define MAX_SYMBOL_NAME_LENGTH 256
#define MAX_STRING_SYMBOL_SIZE 256
#define ASM_CRLF 10
#define ASM_TAB 9

#define MAX_TOKEN_LENGTH 256

#if defined(__GNUC__) && !defined(__DJGPP__)
extern void
strupr(char* s);

extern void
strlwr(char* s);
#endif

extern uint32_t g_nTotalLines;
extern uint32_t g_nTotalErrors;
extern uint32_t g_nTotalWarnings;

typedef enum {
    ASM_LITTLE_ENDIAN,
    ASM_BIG_ENDIAN
} EEndianness;

typedef enum {
    MINSIZE_8BIT = 1,
    MINSIZE_16BIT = 2,
    MINSIZE_32BIT = 4,
} EMinimumWordSize;

typedef struct Configuration {
    const char* executableName;
    const char* backendVersion;

    uint32_t maxSectionSize;
    EEndianness defaultEndianness;

    bool supportBanks;
    bool supportAmiga;

    EMinimumWordSize minimumWordSize;

    uint32_t sectionAlignment;

    char* reserveByteName;
    char* reserveWordName;
    char* reserveLongName;

    char* defineByteName;
    char* defineWordName;
    char* defineLongName;

    char* defineByteSpaceName;
    char* defineWordSpaceName;
    char* defineLongSpaceName;
} SConfiguration;

extern const SConfiguration*
xasm_Configuration;

extern int
xasm_Main(const SConfiguration* configuration, int argc, char* argv[]);

extern void
loclexer_Init(void);

extern void
locopt_PrintOptions(void);

extern struct MachineOptions*
locopt_Alloc(void);

extern void
locopt_Free(struct MachineOptions* pOptions);

extern void
locopt_Copy(struct MachineOptions* pDest, struct MachineOptions* pSrc);


#endif // XASM_COMMON_XASM_H_INCLUDED_
