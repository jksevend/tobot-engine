:: Formats specific parts of the library.

:: .clang-format is automatically picked up by the npm package. 
:: We should maybe check first if the clang-format npm package is installed at all.

@ECHO OFF
IF NOT EXIST ..\packages\tobot_core\src (
    ECHO Can not find source directory
    EXIT
)

IF NOT EXIST ..\.clang-format (
    ECHO Can not find source directory
    EXIT
)

cd ..\packages\

ECHO Formatting all the source file's in our package directory

for /r %%t in (*.cpp *.h) do clang-format -i --style=file "%%t"

cd ..\scripts\