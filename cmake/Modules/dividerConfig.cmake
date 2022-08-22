find_package(PkgConfig)

PKG_CHECK_MODULES(PC_GR_DIVIDER gnuradio-divider)

FIND_PATH(
    GR_DIVIDER_INCLUDE_DIRS
    NAMES gnuradio/divider/api.h
    HINTS $ENV{DIVIDER_DIR}/include
        ${PC_DIVIDER_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    GR_DIVIDER_LIBRARIES
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

include("${CMAKE_CURRENT_LIST_DIR}/gnuradio-dividerTarget.cmake")

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(GR_DIVIDER DEFAULT_MSG GR_DIVIDER_LIBRARIES GR_DIVIDER_INCLUDE_DIRS)
MARK_AS_ADVANCED(GR_DIVIDER_LIBRARIES GR_DIVIDER_INCLUDE_DIRS)
