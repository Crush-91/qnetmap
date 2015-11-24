/*
* This file is part of QNetMap,
* an open-source cross-platform map widget
*
* Copyright (c) 2011-2014 JSC Sintels (sintels.ru) and/or its affiliates.
* Copyright (c) 2012-2014 OJSC T8 (t8.ru) and/or its affiliates.
* Based on QMapControl Curve code by Kai Winter
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with QNetMap. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QNETMAP_CURVE_H
#define QNETMAP_CURVE_H

#include "qnetmap_global.h"
#include "qnetmap_geometry.h"
#include "qnetmap_point.h"

namespace qnetmap
{
   //! \class TCurve
   //! \brief A Curve Geometry, implemented to fullfil OGC Spec
    class QNETMAP_EXPORT TCurve : public TGeometry
    {
        Q_OBJECT

    public:
       virtual ~TCurve() {};

       qreal Length;

    private:
       Q_DISABLE_COPY(TCurve)

    protected:
       TCurve(QString name = QString());
    };
}
#endif
