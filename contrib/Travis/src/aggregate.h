/*****************************************************************************
    TRAVIS - Trajectory Analyzer and Visualizer
    http://www.travis-analyzer.de/

    Copyright (c) 2009-2016 Martin Brehm
                  2012-2016 Martin Thomas

    This file written by Martin Brehm.

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*****************************************************************************/

#ifndef AGGREGATE_H
#define AGGREGATE_H

#include "xobject.h"
#include "xvector3.h"
#include "xintarray.h"


class CAggregate : public CxObject  
{
public:
	CxIntArray m_laLifeIntervals;
	CAggregate() { }
	~CAggregate() { }

	int m_iSingleMol2;

	CxVector3 m_vStart;
	CxVector3 m_vFirstStart;

	CxFloatArray m_faTempTrace;

	unsigned long m_iStart;
	unsigned long m_iFirstStart;

	CxVector3 m_vEnd;
	signed long m_iEnd;

	bool m_bStillAlive;

};

#endif