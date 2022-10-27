project(VisualStudioARM64RethrowBugCandidate)
set(CMAKE_SUPPRESS_REGENERATION ON)

add_compile_options(
			$<$<CONFIG:>:/MT> # ---------|
			$<$<CONFIG:Debug>:/MTd> # ---|-- Statically link the runtime libraries
			$<$<CONFIG:Release>:/MT> # --|
		)

add_executable(${PROJECT_NAME} main.cpp)