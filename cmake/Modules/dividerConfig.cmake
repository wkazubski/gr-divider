INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_DIVIDER divider)

FIND_PATH(
    DIVIDER_INCLUDE_DIRS
    NAMES divider/api.h
    HINTS $ENV{DIVIDER_DIR}/include
        ${PC_DIVIDER_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    DIVIDER_LIBRARIES
    NAMES gnuradio-divider
    HINTS $ENV{DIVIDER_DIR}/lib
        ${PC_DIVIDER_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
          )

include("${CMAKE_CURRENT_LIST_DIR}/dividerTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(DIVIDER DEFAULT_MSG DIVIDER_LIBRARIES DIVIDER_INCLUDE_DIRS)
MARK_AS_ADVANCED(DIVIDER_LIBRARIES DIVIDER_INCLUDE_DIRS)
