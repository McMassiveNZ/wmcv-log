#include "pch.h"
#include "wmcv_log/sinks/wmcv_sink_outputdbgstring.h"

namespace wmcv
{
	auto Log(LogSinkOutputDebugString&, const char* message) noexcept -> void
	{
#ifdef _WIN32
		OutputDebugStringA(message);
#else
		printf(message);
#endif
	}
}