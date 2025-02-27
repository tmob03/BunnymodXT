#pragma once

#include <deque>
#include "../sptlib-wrapper.hpp"
#include <SPTLib/IHookableDirFilter.hpp>
#include "taslogger/writer.hpp"

class ServerDLL : public IHookableDirFilter
{
	HOOK_DECL(void, __cdecl, PM_Jump)
	HOOK_DECL(void, __cdecl, PM_PreventMegaBunnyJumping)
	HOOK_DECL(void, __cdecl, PM_PlayerMove, qboolean server)
	HOOK_DECL(int, __cdecl, PM_ClipVelocity, float in[3], float normal[3], float out[3], float overbounce)
	HOOK_DECL(void, __cdecl, PM_WaterMove)
	HOOK_DECL(void, __cdecl, PM_WalkMove)
	HOOK_DECL(void, __cdecl, PM_FlyMove)
	HOOK_DECL(bool, __cdecl, PM_AddToTouched, pmtrace_t tr, float* impactvelocity)
	HOOK_DECL(void, __cdecl, PM_Move, struct playermove_s* ppmove, int server)
	HOOK_DECL(void, __cdecl, CmdStart, const edict_t* player, const usercmd_t* cmd, unsigned int random_seed)
	HOOK_DECL(void, __fastcall, CNihilanth__DyingThink, void* thisptr, int edx)
	HOOK_DECL(void, __cdecl, CNihilanth__DyingThink_Linux, void* thisptr)
	HOOK_DECL(void, __fastcall, COFGeneWorm__DyingThink, void* thisptr, int edx)
	HOOK_DECL(void, __cdecl, COFGeneWorm__DyingThink_Linux, void* thisptr)
	HOOK_DECL(void, __fastcall, CApache__DyingThink, void* thisptr)
	HOOK_DECL(void, __fastcall, CBreakable__Die, void* thisptr, int edx)
	HOOK_DECL(void, __cdecl, CBreakable__Die_Linux, void* thisptr)
	HOOK_DECL(int, __fastcall, CBaseDoor__DoorActivate, void* thisptr, int edx)
	HOOK_DECL(void, __fastcall, CBaseDoor__DoorGoUp, void* thisptr)
	HOOK_DECL(void, __fastcall, CBaseDoor__DoorHitTop, void* thisptr)
	HOOK_DECL(void, __fastcall, CBaseMonster__Killed, void* thisptr, int edx, entvars_t* pevAttacker, int iGib)
	HOOK_DECL(void, __fastcall, CMultiManager__ManagerThink, void* thisptr, int edx)
	HOOK_DECL(void, __cdecl, FireTargets_Linux, char* targetName, void* pActivator, void* pCaller, int useType, float value)
	HOOK_DECL(int, __cdecl, AddToFullPack, struct entity_state_s* state, int e, edict_t* ent, edict_t* host, int hostflags, int player, unsigned char* pSet)
	HOOK_DECL(void, __fastcall, CTriggerVolume__Spawn, void* thisptr)
	HOOK_DECL(void, __cdecl, CTriggerVolume__Spawn_Linux, void* thisptr)
	HOOK_DECL(void, __cdecl, ClientCommand, edict_t* pEntity)
	HOOK_DECL(void, __fastcall, CPushable__Move, void* thisptr, int edx, void* pOther, int push)
	HOOK_DECL(void, __cdecl, CPushable__Move_Linux, void* thisptr, void* pOther, int push)
	HOOK_DECL(int, __fastcall, CBasePlayer__TakeDamage, void* thisptr, int edx, entvars_t* pevInflictor, entvars_t* pevAttacker, float flDamage, int bitsDamageType)
	HOOK_DECL(int, __cdecl, CBasePlayer__TakeDamage_Linux, void* thisptr, entvars_t* pevInflictor, entvars_t* pevAttacker, float flDamage, int bitsDamageType)
	HOOK_DECL(void, __fastcall, CGraph__InitGraph, void* thisptr)
	HOOK_DECL(void, __cdecl, CGraph__InitGraph_Linux, void* thisptr)
	HOOK_DECL(void, __fastcall, CBasePlayer__CheatImpulseCommands, void* thisptr, int edx, int iImpulse)
	HOOK_DECL(void, __cdecl, CBasePlayer__CheatImpulseCommands_Linux, void* thisptr, int iImpulse)
	HOOK_DECL(void, __fastcall, CTriggerSave__SaveTouch, void* thisptr, int edx, void* pOther)
	HOOK_DECL(void, __cdecl, CTriggerSave__SaveTouch_Linux, void* thisptr, void* pOther)
	HOOK_DECL(void, __fastcall, CChangeLevel__UseChangeLevel, void* thisptr, int edx, void* pActivator, void* pCaller, int useType, float value)
	HOOK_DECL(void, __fastcall, CChangeLevel__TouchChangeLevel, void* thisptr, int edx, void* pOther)
	HOOK_DECL(void, __fastcall, CBaseEntity__FireBullets, void* thisptr, int param1, unsigned long cShots, Vector vecSrc, Vector vecDirShooting, Vector vecSpread, float flDistance, int iBulletType, int iTracerFreq, int iDamage, entvars_t* pevAttacker)
	HOOK_DECL(void, __cdecl, CBaseEntity__FireBullets_Linux, void* thisptr, unsigned long cShots, Vector vecSrc, Vector vecDirShooting, Vector vecSpread, float flDistance, int iBulletType, int iTracerFreq, int iDamage, entvars_t* pevAttacker)
	HOOK_DECL(void, __fastcall, CBaseEntity__FireBulletsPlayer, void* thisptr, int edx, float param1, unsigned long cShots, Vector vecSrc, Vector vecDirShooting, Vector vecSpread, float flDistance, int iBulletType, int iTracerFreq, int iDamage, entvars_t* pevAttacker, int shared_rand)
	HOOK_DECL(Vector, __cdecl, CBaseEntity__FireBulletsPlayer_Linux, void* thisptr, unsigned long cShots, Vector vecSrc, Vector vecDirShooting, Vector vecSpread, float flDistance, int iBulletType, int iTracerFreq, int iDamage, entvars_t* pevAttacker, int shared_rand)
	HOOK_DECL(void, __fastcall, CBaseButton__ButtonUse, void* thisptr, int edx, void* pActivator, void* pCaller, int useType, float value)
	HOOK_DECL(void, __fastcall, CBaseButton__ButtonTriggerAndWait, void* thisptr, int edx)
	HOOK_DECL(void, __fastcall, CTriggerEndSection__EndSectionUse, void* thisptr, int edx, void* pActivator, void* pCaller, int useType, float value)
	HOOK_DECL(void, __fastcall, CTriggerEndSection__EndSectionTouch, void* thisptr, int edx, void* pOther)
	HOOK_DECL(void, __cdecl, PM_Duck)
	HOOK_DECL(void, __cdecl, PM_UnDuck)
	HOOK_DECL(void, __cdecl, ShiftMonsters, Vector origin)
	HOOK_DECL(void, __fastcall, CBasePlayer__ViewPunch, void* thisptr, int edx, float p, float y, float r)
	HOOK_DECL(void, __fastcall, CBasePlayer__Jump, void* thisptr)
	HOOK_DECL(void, __fastcall, CTriggerCamera__FollowTarget, void* thisptr)
	HOOK_DECL(int, __fastcall, CBaseEntity__IsInWorld, void* thisptr)
	HOOK_DECL(int, __cdecl, CBaseEntity__IsInWorld_Linux, void* thisptr)

public:
	static ServerDLL& GetInstance()
	{
		static ServerDLL instance;
		return instance;
	}

	virtual void Hook(const std::wstring& moduleName, void* moduleHandle, void* moduleBase, size_t moduleLength, bool needToIntercept);
	virtual void Unhook();
	virtual void Clear();
	virtual bool CanHook(const std::wstring& moduleFullName);

	bool GetGlobalState(const std::string& name, int& state);
	float GetTime();

	std::vector<const edict_t *> GetUseableEntities(const Vector &origin, float radius) const;
	std::vector<const Vector *> GetNodePositions() const;
	std::vector<const Vector *> GetDisplacerTargets() const;
	bool GetNihilanthInfo(float &health, int &level, int &irritation, bool &recharger, int &nspheres, int &sequence, float &frame) const;

	bool GetGonarchInfo(float& health, int& sequence, float& frame) const;

	static void OnMultiManagerFired(const char *classname);

	static void DoAutoStopTasks();

	static void GetTriggerColor(const char *classname, float &r, float &g, float &b);
	static void GetTriggerAlpha(const char *classname, bool inactive, bool additive, float &a);

	TraceResult TraceLine(const float v1[3], const float v2[3], int fNoMonsters, edict_t *pentToSkip) const;

	enginefuncs_t *pEngfuncs;

	entvars_t *obboPushable = nullptr;

	const std::deque<std::array<Vector, 2>>& GetBulletsEnemyTrace() const;
	const std::deque<bool>& GetBulletsEnemyTraceHit() const;
	const std::deque<std::array<Vector, 2>>& GetBulletsPlayerTrace() const;
	const std::deque<bool>& GetBulletsPlayerTraceHit() const;
	void ClearBulletsTrace();
	void ClearBulletsEnemyTrace();
	void TraceLineWrap(const Vector* vecStart, const Vector* vecEnd, int igmon, edict_t* pentIgnore, TraceResult* ptr);

	void SetStamina(bool makeItZero);

	int IsInWorld(Vector origin, Vector velocity, int map_size, int map_max_velocity);

	bool is_cof = false; // Cry of Fear-specific
	ptrdiff_t offm_fStamina; // Cry of Fear-specific

	void GiveNamedItem(entvars_t *pev, int istr);

private:
	ServerDLL() : IHookableDirFilter({ L"dlls", L"cl_dlls"}) {};
	ServerDLL(const ServerDLL&);
	void operator=(const ServerDLL&);

protected:
	typedef int(__cdecl *_GetEntityAPI)(DLL_FUNCTIONS* pFunctionTable, int interfaceVersion);
	_GetEntityAPI ORIG_GetEntityAPI;

	typedef void(__fastcall *_CBasePlayer__ForceClientDllUpdate)(void *thisptr);
	_CBasePlayer__ForceClientDllUpdate ORIG_CBasePlayer__ForceClientDllUpdate;
	typedef void(__cdecl *_CBasePlayer__ForceClientDllUpdate_Linux)(void *thisptr);
	_CBasePlayer__ForceClientDllUpdate_Linux ORIG_CBasePlayer__ForceClientDllUpdate_Linux;
	typedef int(__cdecl* _PM_CheckStuck)();
	_PM_CheckStuck ORIG_PM_CheckStuck;
	typedef void*(__cdecl *_PM_Ladder)();
	_PM_Ladder ORIG_PM_Ladder;
	typedef int(__cdecl *_CChangeLevel__InTransitionVolume)(void *pEntity, char *pVolumeName);
	_CChangeLevel__InTransitionVolume ORIG_CChangeLevel__InTransitionVolume;

	typedef int(__cdecl *_DispatchSpawn)(edict_t *pent);
	_DispatchSpawn ORIG_DispatchSpawn;
	typedef void(__cdecl *_DispatchTouch)(edict_t *pentTouched, edict_t *pentOther);
	_DispatchTouch ORIG_DispatchTouch;

	typedef bool (__fastcall *_IsPlayer)(void *thisptr);
	typedef void (__fastcall *_Center)(void *thisptr, int edx, Vector *center);

#ifdef _WIN32
	typedef int (__fastcall *_ObjectCaps)(void *thisptr);
#else
	typedef int (__cdecl *_ObjectCaps)(void *thisptr);
#endif

	void FindStuff();
	void RegisterCVarsAndCommands();
	void LogPlayerMove(bool pre, uintptr_t pmove) const;
	bool IsPlayerMovingPushable(const entvars_t *pevPushable, const entvars_t *pevToucher, int push) const;

	void DoWouldCrashMessage();
	void CoFChanges();

	void **ppmove;
	ptrdiff_t offPlayerIndex;
	ptrdiff_t offOldbuttons;
	ptrdiff_t offOnground;
	ptrdiff_t offVelocity;
	ptrdiff_t offOrigin;
	ptrdiff_t offAngles;
	ptrdiff_t offCmd;
	ptrdiff_t offEntFriction;
	ptrdiff_t offEntGravity;
	ptrdiff_t offPunchangles;
	ptrdiff_t offWaterlevel;
	ptrdiff_t offInDuck;
	ptrdiff_t offFlags;
	ptrdiff_t offBasevelocity;

	void *pGlobalState;

	ptrdiff_t offFuncIsPlayer = 0x9C;
	ptrdiff_t offFuncCenter = 0xC8;
	ptrdiff_t offFuncObjectCaps = 0x14;

	ptrdiff_t offNihilanthLevel;
	ptrdiff_t offNihilanthIrritation;
	ptrdiff_t offNihilanthRecharger;
	ptrdiff_t offNihilanthSpheres;

	ptrdiff_t offm_iClientFOV;
	ptrdiff_t offm_rgAmmoLast;
	int maxAmmoSlots = MAX_AMMO_SLOTS;

	void *WorldGraph = nullptr;
	size_t size_CNode;
	ptrdiff_t offm_pNodes;
	ptrdiff_t offm_cNodes;
	ptrdiff_t offm_vecOrigin;

	ptrdiff_t offBhopcap;
	ptrdiff_t pCZDS_Velocity_Byte;
	ptrdiff_t pAddToFullPack_PVS_Byte;
	ptrdiff_t pBhopcapWindows;
	byte originalBhopcapInsn[6];

	ptrdiff_t pCS_Stamina_Value;
	ptrdiff_t pCS_Bhopcap;
	ptrdiff_t pCS_Bhopcap_Windows;

	ptrdiff_t pCBasePlayer__Jump_OldButtons_Check_Byte;

	ptrdiff_t pCoF_Noclip_Preventing_Check_Byte; // Cry of Fear-specific
	ptrdiff_t offm_bInfiniteStamina; // Cry of Fear-specific
	ptrdiff_t offm_old_iAmmo; // Cry of Fear-specific
	ptrdiff_t offm_iPlayerSaveLock; // Cry of Fear-specific

	ptrdiff_t offm_pClientActiveItem;
	ptrdiff_t offm_CMultiManager_index;

	bool spirit_sdk = false;
	bool is_czeror = false;

	bool callerIsWalkMove;
	bool callerIsFlyMove;
	bool firstFlyMoveEnded;
	float firstFlyMoveEndVelocity[3];
	float firstFlyMoveEndOrigin[3];

	std::deque<TASLogger::Collision> firstFlyMoveTouchQueue;
	std::deque<TASLogger::Collision> secondFlyMoveTouchQueue;

	std::unordered_map<int, bool> cantJumpNextTime;

	unsigned long fireBulletsPlayer_count = 0;
	unsigned long fireBullets_count = 0;
	std::deque<std::array<Vector, 2>> traceLineFireBulletsPlayer;
	std::deque<bool> traceLineFireBulletsPlayerHit;
	std::deque<std::array<Vector, 2>> traceLineFireBullets;
	std::deque<bool> traceLineFireBulletsHit;

	bool insideCBasePlayerJump = false;
};
