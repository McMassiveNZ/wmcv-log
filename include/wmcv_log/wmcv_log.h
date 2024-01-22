#ifndef WMCV_LOG_H_INCLUDED
#define WMCV_LOG_H_INCLUDED

#include "wmcv_log_sink.h"
#include "wmcv_log_system.h"

namespace wmcv
{
    template< typename... Args >
    auto LogMessage( std::string_view fmt, Args&&... args ) -> void
    {
		const auto fmt_args = std::make_format_args(std::forward<Args>(args)...);
		std::string result = std::vformat(fmt, fmt_args);
		GetLogSystem().LogMessage(result);
    }
}

#endif
