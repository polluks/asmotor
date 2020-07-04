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

#ifndef	XASM_RC8_ERRORS_H_INCLUDED_
#define	XASM_RC8_ERRORS_H_INCLUDED_

typedef enum {
	MERROR_ILLEGAL_ADDRMODE = 1000,
	MERROR_EXPECTED_CONDITION_CODE,
	MERROR_REQUIRES_SYNTHESIZED
} EMachineError;

extern const char*
rc8_GetError(size_t errorNumber);

#endif	/* LOCALASM_H */
