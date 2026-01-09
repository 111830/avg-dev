#!/bin/bash

# Flamujt e nevojshem (nuk i shkurtojme dot se i do Clang, por i fshehim ketu)
F="-std=c++23 -stdlib=libc++ -Wno-deprecated-declarations -Wno-reserved-module-identifier -Wno-unused-command-line-argument -fmodule-file=std=std.pcm"

# 1. Bejme std.o (pa kontroll, thjesht e mbishkruajme cdo here)
clang++-18 $F -c std.pcm -o std.o

# 2. Employee (PCM -> Interface -> Implementation)
clang++-18 $F --precompile Employee.cppm -o Employee.pcm
clang++-18 $F -c Employee.pcm -o Employee_iface.o
clang++-18 $F -fmodule-file=employee=Employee.pcm -c Employee.cpp -o Employee_impl.o

# 3. Database (PCM -> Interface -> Implementation)
clang++-18 $F -fmodule-file=employee=Employee.pcm --precompile Database.cppm -o Database.pcm
clang++-18 $F -fmodule-file=employee=Employee.pcm -c Database.pcm -o Database_iface.o
clang++-18 $F -fmodule-file=employee=Employee.pcm -fmodule-file=database=Database.pcm -c Database.cpp -o Database_impl.o

# 4. Main & Lidhja (Linking)
clang++-18 $F -fmodule-file=employee=Employee.pcm -fmodule-file=database=Database.pcm -c UserInterface.cpp -o UserInterface.o
clang++-18 -stdlib=libc++ std.o Employee_iface.o Employee_impl.o Database_iface.o Database_impl.o UserInterface.o -o employee_app

echo "Gati: ./employee_app"