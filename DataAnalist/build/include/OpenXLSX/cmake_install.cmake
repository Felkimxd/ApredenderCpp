# Install script for directory: C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/DataAnalyst")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "C:/mingw64/bin/objdump.exe")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenXLSX/headers" TYPE FILE FILES "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/include/OpenXLSX/OpenXLSX-Exports.hpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenXLSX/headers" TYPE FILE FILES
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/IZipArchive.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLCell.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLCellIterator.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLCellRange.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLCellReference.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLCellValue.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLColor.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLColumn.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLCommandQuery.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLComments.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLConstants.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLContentTypes.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLDateTime.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLDocument.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLDrawing.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLException.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLFormula.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLIterator.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLMergeCells.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLProperties.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLRelationships.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLRow.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLRowData.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLSharedStrings.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLSheet.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLStyles.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLTables.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLWorkbook.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLXmlData.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLXmlFile.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLXmlParser.hpp"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/headers/XLZipArchive.hpp"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OpenXLSX" TYPE FILE FILES "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/OpenXLSX.hpp")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "lib" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/include/OpenXLSX/libOpenXLSX.a")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX" TYPE FILE FILES
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/include/OpenXLSX/OpenXLSXConfig.cmake"
    "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/include/OpenXLSX/OpenXLSX/OpenXLSXConfigVersion.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets.cmake"
         "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/include/OpenXLSX/CMakeFiles/Export/c72cc94553a1a0c9b05f75dae42fb1d7/OpenXLSXTargets.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX/OpenXLSXTargets.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX" TYPE FILE FILES "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/include/OpenXLSX/CMakeFiles/Export/c72cc94553a1a0c9b05f75dae42fb1d7/OpenXLSXTargets.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/OpenXLSX" TYPE FILE FILES "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/include/OpenXLSX/CMakeFiles/Export/c72cc94553a1a0c9b05f75dae42fb1d7/OpenXLSXTargets-noconfig.cmake")
  endif()
endif()

