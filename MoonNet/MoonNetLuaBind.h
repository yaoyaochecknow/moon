#pragma once
#include <string>
namespace sol
{
	class state;
}

class MoonNetLuaBind
{
public:
	MoonNetLuaBind(sol::state& lua);
	~MoonNetLuaBind();

	MoonNetLuaBind& BindTime();

	MoonNetLuaBind& BindUtil();

	MoonNetLuaBind& BindPath();

	MoonNetLuaBind& BindLog();

	MoonNetLuaBind& BindThreadSleep();

	MoonNetLuaBind& BindMemoryStream();

	MoonNetLuaBind& BindBinaryWriter();

	MoonNetLuaBind& BindBinaryReader();

	MoonNetLuaBind& BindEMessageType();

	MoonNetLuaBind& BindMessage();

	MoonNetLuaBind& BindNetworkComponent();

	MoonNetLuaBind& BindModule();

	MoonNetLuaBind& BindModuleManager();
private:
	sol::state& lua;
};

struct lua_State;

std::string Traceback(lua_State* _state);
