// INDENTING (emacs/vi): -*- mode:c++; tab-width:2; c-basic-offset:2; intent-tabs-mode:nil; -*- ex: set tabstop=2 expandtab:

/*
 * Qt Virtual Chart Table (QVCT)
 * Copyright (C) 2012 Cedric Dufour <http://cedric.dufour.name>
 * Author: Cedric Dufour <http://cedric.dufour.name>
 *
 * The Qt Virtual Chart Table (QVCT) is free software:
 * you can redistribute it and/or modify it under the terms of the GNU General
 * Public License as published by the Free Software Foundation, Version 3.
 *
 * The Qt Virtual Chart Table (QVCT) is distributed in the hope
 * that it will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 */

#ifndef QVCT_CDEVICESAMPLEEDITVIEW_HPP
#define QVCT_CDEVICESAMPLEEDITVIEW_HPP

// QT
#include <QLineEdit>
#include <QWidget>

// QVCT
#include "overlays/COverlayObjectEditView.hpp"
class CDeviceSample;


/// [UI] Route container's edit view
/**
 *  This class implements the user-interface that allows to edit route
 *  containers.
 *  @author Cedric Dufour <http://cedric.dufour.name>
 */
class CDeviceSampleEditView: public COverlayObjectEditView
{
  Q_OBJECT

  //------------------------------------------------------------------------------
  // FIELDS
  //------------------------------------------------------------------------------

private:
  /// [UI:LineEdit] Host
  QLineEdit* pqLineEditHost;
  /// [UI:LineEdit] Port
  QLineEdit* pqLineEditPort;


  //------------------------------------------------------------------------------
  // CONSTRUCTORS / DESTRUCTOR
  //------------------------------------------------------------------------------

public:
  CDeviceSampleEditView( CDeviceSample* _poDeviceSample );
  virtual ~CDeviceSampleEditView() {};

private:
  /// Constructs the layout of the user-interface
  void constructLayout();


  //------------------------------------------------------------------------------
  // METHODS: QDialog (override)
  //------------------------------------------------------------------------------

public slots:
  virtual void accept();

};

#endif // QVCT_CDEVICESAMPLEEDITVIEW_HPP
