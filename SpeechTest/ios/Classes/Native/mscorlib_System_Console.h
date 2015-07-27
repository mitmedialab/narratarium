#pragma once
#include <stdint.h>
// System.IO.TextWriter
struct TextWriter_t790;
// System.IO.TextReader
struct TextReader_t1118;
// System.Text.Encoding
struct Encoding_t30;
// System.Object
#include "mscorlib_System_Object.h"
// System.Console
struct  Console_t789  : public Object_t
{
};
struct Console_t789_StaticFields{
	// System.IO.TextWriter System.Console::stdout
	TextWriter_t790 * ___stdout_0;
	// System.IO.TextWriter System.Console::stderr
	TextWriter_t790 * ___stderr_1;
	// System.IO.TextReader System.Console::stdin
	TextReader_t1118 * ___stdin_2;
	// System.Text.Encoding System.Console::inputEncoding
	Encoding_t30 * ___inputEncoding_3;
	// System.Text.Encoding System.Console::outputEncoding
	Encoding_t30 * ___outputEncoding_4;
};
