/*
* This file is part of QNetMap,
* an open-source cross-platform map widget
*
* Copyright (c) 2011-2014 JSC Sintels (sintels.ru) and/or its affiliates.
* Copyright (c) 2012-2014 OJSC T8 (t8.ru) and/or its affiliates.
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU Lesser General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will `be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU Lesser General Public License for more details.
*
* You should have received a copy of the GNU Lesser General Public License
* along with QNetMap. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QNETMAP_COORDINATESDIALOG_H
#define QNETMAP_COORDINATESDIALOG_H


#include "qnetmap_global.h"

#ifdef QNETMAP_QT_4
   #include <QDialog>
   #include <QGridLayout>
   #include <QLabel>
   #include <QDialogButtonBox>
   #include <QList>
   #include <QComboBox>
   #include <QSpinBox>
   #include <QAbstractButton>
#endif
#include <QPointF>

namespace qnetmap
{
   //! \class Окно ввода координат
   class QNETMAP_EXPORT TCoordinatesDialog : public QDialog
   {
      Q_OBJECT

   public:
      explicit TCoordinatesDialog(QPointF* Point_, QWidget* Parent_ = NULL);
      virtual ~TCoordinatesDialog() {}

   private:
      Q_DISABLE_COPY(TCoordinatesDialog)

      //! \brief широта
      qreal latitude(void);
      //! \brief долгота
      qreal longitude(void);

      QPointF*        w_Point;
      //
      QSpinBox*       w_LatDegrees;
      QSpinBox*       w_LatMinutes;
      QDoubleSpinBox* w_LatSeconds;
      QComboBox*      w_NorthSouth;
      QSpinBox*       w_LonDegrees;
      QSpinBox*       w_LonMinutes;
      QDoubleSpinBox* w_LonSeconds;
      QComboBox*      w_EastWest;
      //
      QAbstractButton* w_ButtonOK;

   private slots:
      //! \brief
      void ok(void);
      //! \brief
      void buttonOK(void);
   };
}
#endif // #ifndef QNETMAP_COORDINATESDIALOG_H