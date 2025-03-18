echo on

REM 0. Start clean
del /F /Q "asset.dat"
rmdir /S /Q "art"

REM 1. then copy vanilla version (replace existing files unless same bytesize):
robocopy "..\1.00\art\compiledtextures" "art\textures" /E /IS
robocopy "..\1.00\art\Textures" "art\textures" /E /IS
robocopy "..\1.00\art\terrain" "art\terrain" /E /XC /XN /XO
robocopy "..\1.00\art\w3d" "art\w3d" /E /IS
robocopy "..\1.00\data\editor\molds" "data\editor\molds" /E /XC /XN /XO

REM 2. then overwrite with 1.09v1 particularities if any byte difference:
robocopy "..\1.09v1\art\compiledtextures" "art\textures" /E /IS
robocopy "..\1.09v1\art\w3d" "art\w3d" /E /IS
robocopy "..\1.09v1\art\terrain" "art\terrain" /E /XC /XN /XO

REM 3. then overwrite with 1.09v2 particularities if any byte difference:
robocopy "..\1.09v2\art\compiledtextures" "art\textures" /E /IS
robocopy "..\1.09v2\art\w3d" "art\w3d" /E /IS
robocopy "..\1.09v2\art\terrain" "art\terrain" /E /XC /XN /XO

REM 4. then overwrite with 1.09v3 particularities if any byte difference:
robocopy "..\1.09v3\art\compiledtextures" "art\textures" /E /IS
robocopy "..\1.09v3\art\w3d" "art\w3d" /E /IS

REM 5. #opcional
REM robocopy "_ValsDisabledAssets\art\compiledtextures" "art\textures" /E /IS
REM robocopy "_ValsDisabledAssets\art\w3d" "art\w3d" /E /XC /XN /XO

REM 6. Finaly, run the compiler
@assetcachebuilder.exe

pause