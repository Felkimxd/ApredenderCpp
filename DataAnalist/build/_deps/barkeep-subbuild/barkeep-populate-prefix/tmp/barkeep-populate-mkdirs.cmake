# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/_deps/barkeep-src"
  "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/_deps/barkeep-build"
  "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/_deps/barkeep-subbuild/barkeep-populate-prefix"
  "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/_deps/barkeep-subbuild/barkeep-populate-prefix/tmp"
  "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/_deps/barkeep-subbuild/barkeep-populate-prefix/src/barkeep-populate-stamp"
  "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/_deps/barkeep-subbuild/barkeep-populate-prefix/src"
  "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/_deps/barkeep-subbuild/barkeep-populate-prefix/src/barkeep-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/_deps/barkeep-subbuild/barkeep-populate-prefix/src/barkeep-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/CARPETAS IMPORTANTES/Carpetas/ApredenderC++/DataAnalist/build/_deps/barkeep-subbuild/barkeep-populate-prefix/src/barkeep-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
