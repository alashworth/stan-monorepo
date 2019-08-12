#[[
Provides the following imported targets:

    Sundials::Cvodes
    Sundials::Idas
#]]

include(FindPackageHandleStandardArgs)
find_package(PkgConfig QUIET)
pkg_check_modules(PC_Sundials QUIET Sundials)

find_path(base_INCLUDE_DIR sundials_config.h
		PATHS ${PC_Sundials_INCLUDE_DIRS}
		PATH_SUFFIXES sundials)
find_path(cvodes_INCLUDE_DIR cvodes.h PATH_SUFFIXES cvodes)
find_path(nvector_INCLUDE_DIR nvector_serial.h PATH_SUFFIXES nvector)
find_path(sunlinsol_INCLUDE_DIR sunlinsol_dense.h PATH_SUFFIXES sunlinsol)
find_path(sunmatrix_INCLUDE_DIR sunmatrix_dense.h PATH_SUFFIXES sunmatrix)
find_path(sunnonlinsol_INCLUDE_DIR sunnonlinsol_fixedpoint.h PATH_SUFFIXES sunnonlinsol)
find_path(idas_INCLUDE_DIR idas.h PATH_SUFFIXES idas)

get_filename_component(Sundials_INCLUDE_DIR ${base_INCLUDE_DIR} DIRECTORY)

find_library(nvecserial_LIBRARY sundials_nvecserial)
find_library(sunlinsolband_LIBRARY sundials_sunlinsolband)
find_library(sunlinsoldense_LIBRARY sundials_sunlinsoldense)
find_library(sunlinsolpcg_LIBRARY sundials_sunlinsolpcg)
find_library(sunlinsolspbcgs_LIBRARY sundials_sunlinsolspbcgs)
find_library(sunlinsolspfgmr_LIBRARY sundials_sunlinsolspfgmr)
find_library(sunlinsolspgmr_LIBRARY sundials_sunlinsolspgmr)
find_library(sunlinsolsptfqmr_LIBRARY sundials_sunlinsolsptfqmr)
find_library(sunmatrixband_LIBRARY sundials_sunmatrixband)
find_library(sunmatrixdense_LIBRARY sundials_sunmatrixdense)
find_library(sunmatrixsparse_LIBRARY sundials_sunmatrixsparse)
find_library(sunnonlinsolfixedpoint_LIBRARY sundials_sunnonlinsolfixedpoint)
find_library(sunnonlinsolnewton_LIBRARY sundials_sunnonlinsolnewton)
find_library(cvodes_LIBRARY sundials_cvodes)
set(sundials_cvodes_FOUND True)
find_library(idas_LIBRARY sundials_idas)

if(sundials_INCLUDE_DIR)
	file(STRINGS ${sundials_INCLUDE_DIR}/sundials_config.h sdver REGEX "\#define SUNDIALS_VERSION.*")
	string(REGEX MATCHALL "[0-9|\\.]+" sdver ${sdver})
	list(GET sdver 0 Sundials_VERSION)
	list(GET sdver 1 Sundials_VERSION_MAJOR)
	list(GET sdver 2 Sundials_VERSION_MINOR)
	list(GET sdver 3 Sundials_VERSION_PATCH)
endif()

find_package_handle_standard_args(Sundials
		VERSION_VAR Sundials_VERSION
		REQUIRED_VARS
		nvecserial_LIBRARY
		sunlinsolband_LIBRARY
		sunlinsoldense_LIBRARY
		sunlinsolpcg_LIBRARY
		sunlinsolpcg_LIBRARY
		sunlinsolspbcgs_LIBRARY
		sunlinsolspfgmr_LIBRARY
		sunlinsolspgmr_LIBRARY
		sunlinsolsptfqmr_LIBRARY
		sunmatrixband_LIBRARY
		sunmatrixdense_LIBRARY
		sunmatrixdense_LIBRARY
		sunmatrixsparse_LIBRARY
		sunnonlinsolfixedpoint_LIBRARY
		sunnonlinsolnewton_LIBRARY
		cvodes_LIBRARY
		idas_LIBRARY
		base_INCLUDE_DIR
		cvodes_INCLUDE_DIR
		nvector_INCLUDE_DIR
		sunlinsol_INCLUDE_DIR
		Sundials_INCLUDE_DIR
		sunmatrix_INCLUDE_DIR
		sunnonlinsol_INCLUDE_DIR)

# Add imported targets
if (Sundials_FOUND)
	set(Sundials_INCLUDE_DIRS ${Sundials_INCLUDE_DIR})
endif ()

if (Sundials_FOUND AND NOT TARGET Sundials::Cvodes)
	add_library(Sundials::Cvodes UNKNOWN IMPORTED GLOBAL)
	set_target_properties(Sundials::Cvodes PROPERTIES
			IMPORTED_LOCATION ${cvodes_LIBRARY}
			INTERFACE_INCLUDE_DIRECTORIES ${Sundials_INCLUDE_DIRS}
			INTERFACE_COMPILE_DEFINITIONS NO_FPRINTF_OUTPUT
			)
	target_link_libraries(Sundials::Cvodes INTERFACE
			${nvecserial_LIBRARY}
			${sunlinsolband_LIBRARY}
			${sunlinsoldense_LIBRARY}
			${sunlinsolpcg_LIBRARY}
			${sunlinsolpcg_LIBRARY}
			${sunlinsolspbcgs_LIBRARY}
			${sunlinsolspfgmr_LIBRARY}
			${sunlinsolspgmr_LIBRARY}
			${sunlinsolsptfqmr_LIBRARY}
			${sunmatrixband_LIBRARY}
			${sunmatrixdense_LIBRARY}
			${sunmatrixdense_LIBRARY}
			${sunmatrixsparse_LIBRARY}
			${sunnonlinsolfixedpoint_LIBRARY}
			${sunnonlinsolnewton_LIBRARY}
			)
endif ()

if (Sundials_FOUND AND NOT TARGET Sundials::Idas)
	add_library(Sundials::Idas UNKNOWN IMPORTED GLOBAL)
	set_target_properties(Sundials::Idas PROPERTIES
			IMPORTED_LOCATION ${idas_LIBRARY}
			INTERFACE_INCLUDE_DIRECTORIES ${Sundials_INCLUDE_DIRS}
			INTERFACE_COMPILE_DEFINITIONS NO_FPRINTF_OUTPUT
			)
	target_link_libraries(Sundials::Idas INTERFACE
			${nvecserial_LIBRARY}
			${sunlinsolband_LIBRARY}
			${sunlinsoldense_LIBRARY}
			${sunlinsolpcg_LIBRARY}
			${sunlinsolpcg_LIBRARY}
			${sunlinsolspbcgs_LIBRARY}
			${sunlinsolspfgmr_LIBRARY}
			${sunlinsolspgmr_LIBRARY}
			${sunlinsolsptfqmr_LIBRARY}
			${sunmatrixband_LIBRARY}
			${sunmatrixdense_LIBRARY}
			${sunmatrixdense_LIBRARY}
			${sunmatrixsparse_LIBRARY}
			${sunnonlinsolfixedpoint_LIBRARY}
			${sunnonlinsolnewton_LIBRARY}
			)
endif ()

mark_as_advanced(
		nvecserial_LIBRARY
		sunlinsolband_LIBRARY
		sunlinsoldense_LIBRARY
		sunlinsolpcg_LIBRARY
		sunlinsolpcg_LIBRARY
		sunlinsolspbcgs_LIBRARY
		sunlinsolspfgmr_LIBRARY
		sunlinsolspgmr_LIBRARY
		sunlinsolsptfqmr_LIBRARY
		sunmatrixband_LIBRARY
		sunmatrixdense_LIBRARY
		sunmatrixdense_LIBRARY
		sunmatrixsparse_LIBRARY
		sunnonlinsolfixedpoint_LIBRARY
		sunnonlinsolnewton_LIBRARY
		cvodes_LIBRARY
		idas_LIBRARY
		base_INCLUDE_DIR
		cvodes_INCLUDE_DIR
		nvector_INCLUDE_DIR
		sunlinsol_INCLUDE_DIR
		Sundials_INCLUDE_DIR
		sunmatrix_INCLUDE_DIR
		sunnonlinsol_INCLUDE_DIR
)