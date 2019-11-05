@echo off

set BUILD_DIR=_build

mkdir %BUILD_DIR%

pushd %BUILD_DIR%

cmake ../

popd

pause