/*
* ***** BEGIN GPL LICENSE BLOCK *****
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 2
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; if not, write to the Free Software Foundation,
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
*
* Contributor(s): Benoit Bolsee
*
* ***** END GPL LICENSE BLOCK *****
*/

/** \file decklink/DeckLinkAPI.cpp
*  \ingroup decklink
*/

#ifdef WIN32
#include <windows.h>
#include <objbase.h>
#include <comutil.h>
#endif

#include "DeckLinkAPI.h"

#ifdef WIN32
IDeckLinkIterator* BMD_CreateDeckLinkIterator(void)
{
	HRESULT result;
	IDeckLinkIterator* pDLIterator = NULL;

	result = CoCreateInstance(CLSID_CDeckLinkIterator, NULL, CLSCTX_ALL, IID_IDeckLinkIterator, (void**)&pDLIterator);
	if (FAILED(result))
		return NULL;
	return pDLIterator;
}
#endif
