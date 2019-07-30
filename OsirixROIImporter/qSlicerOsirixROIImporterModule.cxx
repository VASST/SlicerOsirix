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

// OsirixROIImporter Logic includes
#include <vtkSlicerOsirixROIImporterLogic.h>

// OsirixROIImporter includes
#include "qSlicerOsirixROIImporterModule.h"
#include "qSlicerOsirixROIImporterModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerOsirixROIImporterModulePrivate
{
public:
  qSlicerOsirixROIImporterModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerOsirixROIImporterModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerOsirixROIImporterModulePrivate::qSlicerOsirixROIImporterModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerOsirixROIImporterModule methods

//-----------------------------------------------------------------------------
qSlicerOsirixROIImporterModule::qSlicerOsirixROIImporterModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerOsirixROIImporterModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerOsirixROIImporterModule::~qSlicerOsirixROIImporterModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerOsirixROIImporterModule::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerOsirixROIImporterModule::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerOsirixROIImporterModule::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerOsirixROIImporterModule::icon() const
{
  return QIcon(":/Icons/OsirixROIImporter.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerOsirixROIImporterModule::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerOsirixROIImporterModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerOsirixROIImporterModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerOsirixROIImporterModule
::createWidgetRepresentation()
{
  return new qSlicerOsirixROIImporterModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerOsirixROIImporterModule::createLogic()
{
  return vtkSlicerOsirixROIImporterLogic::New();
}
