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

// OsirixLib Logic includes
#include <vtkSlicerOsirixLibLogic.h>

// OsirixLib includes
#include "qSlicerOsirixLibModule.h"
#include "qSlicerOsirixLibModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerOsirixLibModulePrivate
{
public:
  qSlicerOsirixLibModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerOsirixLibModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerOsirixLibModulePrivate::qSlicerOsirixLibModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerOsirixLibModule methods

//-----------------------------------------------------------------------------
qSlicerOsirixLibModule::qSlicerOsirixLibModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerOsirixLibModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerOsirixLibModule::~qSlicerOsirixLibModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerOsirixLibModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerOsirixLibModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerOsirixLibModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerOsirixLibModule::icon() const
{
  return QIcon(":/Icons/OsirixLib.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerOsirixLibModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerOsirixLibModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerOsirixLibModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerOsirixLibModule
::createWidgetRepresentation()
{
  return new qSlicerOsirixLibModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerOsirixLibModule::createLogic()
{
  return vtkSlicerOsirixLibLogic::New();
}
