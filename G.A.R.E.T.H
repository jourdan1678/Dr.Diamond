G.A.R.E.T.H
===========

-hello my name is G.A.R.E.T.H, im here to assist you with whatever you need help with
+ how may I help you today?
on: [push]
env:
  # Customize the CMake build type here (Release, Debug, RelWithDebInfo, etc.)
  BUILD_TYPE: Release
jobs:
  build:
    # The CMake configure and build commands are platform agnostic and should work equally
    # well on Windows or Mac.  You can convert this to a matrix build if you need
    # cross-platform coverage.
    # See: https://docs.github.com/en/free-pro-team@latest/actions/learn-github-actions/managing-complex-workflows#using-a-build-matrix
    runs-on: ubuntu-latest
steps:
    - uses: actions/checkout@v2
    - name: Create Build Environment
      # Some projects don't allow in-source building, so create a separate build directory
      # We'll use this as our working directory for all subsequent commands
      run: cmake -E make_directory ${{github.
