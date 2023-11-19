/************************************************************************
* @Copyright: 2021-2024
* @FileName:
* @Description: Open source mediasoup room client library
* @Version: 1.0.0
* @Author: Jackie Ou
* @CreateTime: 2021-10-1
*************************************************************************/

#pragma once

#include <string>

namespace vi {
	class StringUtils
	{
	public:
		// Helper method to create random identifiers (e.g., transaction)
		static std::string randomString(int32_t len);
	};
}
