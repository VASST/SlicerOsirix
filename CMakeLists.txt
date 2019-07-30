cmake_minimum_required(VERSION 3.13.4)

project(SlicerOsirix)

#-----------------------------------------------------------------------------
# Extension meta-information
set(EXTENSION_HOMEPAGE "http://slicer.org/slicerWiki/index.php/Documentation/Nightly/Extensions/SlicerOsirix")
set(EXTENSION_CATEGORY "Examples")
set(EXTENSION_CONTRIBUTORS "Adam Rankin (Robarts Research Institute)")
set(EXTENSION_DESCRIPTION "This extension facilities data transfer from Osirix into Slicer")
set(EXTENSION_ICONURL "http://www.example.com/Slicer/Extensions/SlicerOsirix.png")
set(EXTENSION_SCREENSHOTURLS "http://www.example.com/Slicer/Extensions/SlicerOsirix/Screenshots/1.png")
set(EXTENSION_DEPENDS "SlicerRT") # Specified as a space separated string, a list or 'NA' if any

#-----------------------------------------------------------------------------
# Extension dependencies
find_package(Slicer REQUIRED)
include(${Slicer_USE_FILE})

#-----------------------------------------------------------------------------
# Extension modules
add_subdirectory(OsirixROIImporter)
## NEXT_MODULE

#-----------------------------------------------------------------------------
include(${Slicer_EXTENSION_GENERATE_CONFIG})
include(${Slicer_EXTENSION_CPACK})
