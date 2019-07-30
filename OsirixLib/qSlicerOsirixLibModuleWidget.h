/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

#ifndef __qSlicerOsirixLibModuleWidget_h
#define __qSlicerOsirixLibModuleWidget_h

// SlicerQt includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerOsirixLibModuleExport.h"

class qSlicerOsirixLibModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_OSIRIXLIB_EXPORT qSlicerOsirixLibModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerOsirixLibModuleWidget(QWidget *parent=0);
  virtual ~qSlicerOsirixLibModuleWidget();

public slots:


protected:
  QScopedPointer<qSlicerOsirixLibModuleWidgetPrivate> d_ptr;

  virtual void setup();

private:
  Q_DECLARE_PRIVATE(qSlicerOsirixLibModuleWidget);
  Q_DISABLE_COPY(qSlicerOsirixLibModuleWidget);
};

#endif
