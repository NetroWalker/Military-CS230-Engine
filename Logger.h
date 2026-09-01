/*
\file Logger.h
\par CS230 Engine
\author Junwoo Lee
\date 09-01-2026
\par Course: CS230
\copyright Copyright (C) 2026 Digipen Institute of Technology
*/
#pragma once
#include <string>
#include <fstream>
#include <raylib.h>
#include <iostream>

namespace CS230 {
    class Logger {
        enum class{
            Verbose,
            Debug,
            Event,
            Error
        }
    }
}