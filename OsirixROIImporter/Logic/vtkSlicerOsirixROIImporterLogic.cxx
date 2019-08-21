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
#include "vtkSlicerOsirixROIImporterLogic.h"

// MRML includes
#include <vtkMRMLScene.h>

// VTK includes
#include <vtkIntArray.h>
#include <vtkNew.h>
#include <vtkObjectFactory.h>

// STD includes
#include <cassert>

// JsonCpp includes
#include <json/json.h>

//----------------------------------------------------------------------------
vtkStandardNewMacro(vtkSlicerOsirixROIImporterLogic);

//----------------------------------------------------------------------------
vtkSlicerOsirixROIImporterLogic::vtkSlicerOsirixROIImporterLogic()
  : vtkSlicerModuleLogic()
{
}

//----------------------------------------------------------------------------
vtkSlicerOsirixROIImporterLogic::~vtkSlicerOsirixROIImporterLogic()
{
}

//----------------------------------------------------------------------------
void vtkSlicerOsirixROIImporterLogic::PrintSelf(ostream& os, vtkIndent indent)
{
  this->Superclass::PrintSelf(os, indent);
}

//----------------------------------------------------------------------------
vtkPolyData* vtkSlicerOsirixROIImporterLogic::LoadContoursFromJSON(const std::string& filename)
{
  std::ifstream input(filename);
  if (!input.is_open())
  {
    return nullptr;
  }

  Json::Value root;
  Json::Reader reader;
  bool parsingSuccessful = reader.parse(input, root);
  if (!parsingSuccessful)
  {
    // Report the failure and their locations in the document.
    vtkErrorMacro("Failed to parse configuration: " << filename << "\n" << reader.getFormattedErrorMessages());
    return nullptr;
  }

  for (Json::Value::ArrayIndex i = 0; i != root.size(); ++i)
  {
    Json::Int val = root[i]["DataSummary"]["Max"].asInt();
    vtkDebugMacro("" << val);
  }

  vtkPolyData* polyData = vtkPolyData::New();

  return polyData;
}

//---------------------------------------------------------------------------
void vtkSlicerOsirixROIImporterLogic::SetMRMLSceneInternal(vtkMRMLScene* newScene)
{
  vtkNew<vtkIntArray> events;
  events->InsertNextValue(vtkMRMLScene::NodeAddedEvent);
  events->InsertNextValue(vtkMRMLScene::NodeRemovedEvent);
  events->InsertNextValue(vtkMRMLScene::EndBatchProcessEvent);
  this->SetAndObserveMRMLSceneEventsInternal(newScene, events.GetPointer());
}

//-----------------------------------------------------------------------------
void vtkSlicerOsirixROIImporterLogic::RegisterNodes()
{
  assert(this->GetMRMLScene() != 0);
}

//---------------------------------------------------------------------------
void vtkSlicerOsirixROIImporterLogic::UpdateFromMRMLScene()
{
  assert(this->GetMRMLScene() != 0);
}

//---------------------------------------------------------------------------
void vtkSlicerOsirixROIImporterLogic
::OnMRMLSceneNodeAdded(vtkMRMLNode* vtkNotUsed(node))
{
}

//---------------------------------------------------------------------------
void vtkSlicerOsirixROIImporterLogic
::OnMRMLSceneNodeRemoved(vtkMRMLNode* vtkNotUsed(node))
{
}
