#ifndef WMCV_SINK_OUTPUTDEBUGSTRING_H_INCLUDED
#define WMCV_SINK_OUTPUTDEBUGSTRING_H_INCLUDED

namespace wmcv
{
	struct LogSinkOutputDebugString
	{
	};

	auto Log(LogSinkOutputDebugString& sink, const char* message) noexcept -> void;
} // namespace wmcv

#endif