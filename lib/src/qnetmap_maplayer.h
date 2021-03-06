/*
* This file is part of QNetMap,
* an open-source cross-platform map widget
*
* Copyright (c) 2011-2014 JSC Sintels (sintels.ru) and/or its affiliates.
* Copyright (c) 2012-2014 OJSC T8 (t8.ru) and/or its affiliates.
* Based on QMapControl MapLayer code by Kai Winter
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

#ifndef QNETMAP_MAPLAYER_H
#define QNETMAP_MAPLAYER_H

#include "qnetmap_global.h"
#include "qnetmap_layer.h"

namespace qnetmap
{
   //! \class TMapLayer
   //! \brief 
   class QNETMAP_EXPORT TMapLayer : public TLayer
   {
      Q_OBJECT

   public:
      //! MapLayer constructor
      TMapLayer(const QString& layername, TMapAdapter* mapadapter, bool takeevents=true);
      virtual ~TMapLayer() {};

   private:
      Q_DISABLE_COPY(TMapLayer)
   };
}
#endif
