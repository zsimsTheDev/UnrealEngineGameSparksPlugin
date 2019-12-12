// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSAuthenticationResponse;
struct FGSWithdrawChallengeResponse;
struct FGSBuyVirtualGoodResponse;
struct FGSUpdateMessageResponse;
struct FGSSocialStatusResponse;
struct FGSLeaderboardDataResponse;
struct FGSSocialDisconnectResponse;
struct FGSSendTeamChatMessageResponse;
struct FGSSendFriendMessageResponse;
struct FGSScheduleBulkJobAdminResponse;
struct FGSRevokePurchaseGoodsResponse;
struct FGSRegistrationResponse;
struct FGSPushRegistrationResponse;
struct FGSMatchmakingResponse;
struct FGSMatchDetailsResponse;
struct FGSLogEventResponse;
struct FGSLogChallengeEventResponse;
struct FGSListVirtualGoodsResponse;
struct FGSListTransactionsResponse;
struct FGSListTeamsResponse;
struct FGSListTeamChatResponse;
struct FGSListMessageSummaryResponse;
struct FGSListMessageResponse;
struct FGSListMessageDetailResponse;
struct FGSListLeaderboardsResponse;
struct FGSListInviteFriendsResponse;
struct FGSListGameFriendsResponse;
struct FGSListChallengeTypeResponse;
struct FGSListChallengeResponse;
struct FGSListBulkJobsAdminResponse;
struct FGSListAchievementsResponse;
struct FGSLeaveTeamResponse;
struct FGSLeaderboardsEntriesResponse;
struct FGSJoinTeamResponse;
struct FGSJoinPendingMatchResponse;
struct FGSJoinChallengeResponse;
struct FGSGetUploadedResponse;
struct FGSGetUploadUrlResponse;
struct FGSGetTeamResponse;
struct FGSGetPropertySetResponse;
struct FGSGetPropertyResponse;
struct FGSGetMyTeamsResponse;
struct FGSGetMessageResponse;
struct FGSGetLeaderboardEntriesResponse;
struct FGSGetDownloadableResponse;
struct FGSGetChallengeResponse;
struct FGSFindPendingMatchesResponse;
struct FGSFindMatchResponse;
struct FGSFindChallengeResponse;
struct FGSEndSessionResponse;
struct FGSDropTeamResponse;
struct FGSDismissMultipleMessagesResponse;
struct FGSDismissMessageResponse;
struct FGSDeclineChallengeResponse;
struct FGSCreateTeamResponse;
struct FGSCreateChallengeResponse;
struct FGSConsumeVirtualGoodResponse;
struct FGSChatOnChallengeResponse;
struct FGSChangeUserDetailsResponse;
struct FGSCancelBulkJobAdminResponse;
struct FGSBatchAdminResponse;
struct FGSAroundMeLeaderboardResponse;
struct FGSAnalyticsResponse;
struct FGSAccountDetailsResponse;
struct FGSAcceptChallengeResponse;
class UGameSparksScriptData;
class UGSAcceptChallengeRequest;
class UGSAccountDetailsRequest;
class UGSAmazonBuyGoodsRequest;
class UGSAmazonConnectRequest;
class UGSAnalyticsRequest;
class UGameSparksRequestArray;
class UGSAroundMeLeaderboardRequest;
class UGSAuthenticationRequest;
class UGSBatchAdminRequest;
class UGSBuyVirtualGoodsRequest;
class UGSCancelBulkJobAdminRequest;
class UGSChangeUserDetailsRequest;
class UGSChatOnChallengeRequest;
class UGSConsumeVirtualGoodRequest;
class UGSCreateChallengeRequest;
class UGSCreateTeamRequest;
class UGSDeclineChallengeRequest;
class UGSDeviceAuthenticationRequest;
class UGSDismissMessageRequest;
class UGSDismissMultipleMessagesRequest;
class UGSDropTeamRequest;
class UGSEndSessionRequest;
class UGSFacebookConnectRequest;
class UGSFindChallengeRequest;
class UGSFindMatchRequest;
class UGSFindPendingMatchesRequest;
class UGSGameCenterConnectRequest;
class UGSGetChallengeRequest;
class UGSGetDownloadableRequest;
class UGSGetLeaderboardEntriesRequest;
class UGSGetMessageRequest;
class UGSGetMyTeamsRequest;
class UGSGetPropertyRequest;
class UGSGetPropertySetRequest;
class UGSGetTeamRequest;
class UGSGetUploadUrlRequest;
class UGSGetUploadedRequest;
class UGSGooglePlayBuyGoodsRequest;
class UGSGooglePlayConnectRequest;
class UGSGooglePlusConnectRequest;
class UGSIOSBuyGoodsRequest;
class UGSJoinChallengeRequest;
class UGSJoinPendingMatchRequest;
class UGSJoinTeamRequest;
class UGSKongregateConnectRequest;
class UGSLeaderboardDataRequest;
class UGSLeaderboardsEntriesRequest;
class UGSLeaveTeamRequest;
class UGSListAchievementsRequest;
class UGSListBulkJobsAdminRequest;
class UGSListChallengeRequest;
class UGSListChallengeTypeRequest;
class UGSListGameFriendsRequest;
class UGSListInviteFriendsRequest;
class UGSListLeaderboardsRequest;
class UGSListMessageDetailRequest;
class UGSListMessageRequest;
class UGSListMessageSummaryRequest;
class UGSListTeamChatRequest;
class UGSListTeamsRequest;
class UGSListTransactionsRequest;
class UGSListVirtualGoodsRequest;
class UGameSparksLogEventData;
class UGSLogChallengeEventRequest;
class UGSLogEventRequest;
class UGSMatchDetailsRequest;
class UGSMatchmakingRequest;
class UGSNXConnectRequest;
class UGSPSNAccountConnectRequest;
class UGSPSNConnectRequest;
class UGSPsnBuyGoodsRequest;
class UGSPushRegistrationRequest;
class UGSQQConnectRequest;
class UGSRegistrationRequest;
class UGSRevokePurchaseGoodsRequest;
class UGSScheduleBulkJobAdminRequest;
class UGSSendFriendMessageRequest;
class UGSSendTeamChatMessageRequest;
class UGSSocialDisconnectRequest;
class UGSSocialLeaderboardDataRequest;
class UGSSocialStatusRequest;
class UGSSteamBuyGoodsRequest;
class UGSSteamConnectRequest;
class UGSTwitchConnectRequest;
class UGSTwitterConnectRequest;
class UGSUpdateMessageRequest;
class UGSViberConnectRequest;
class UGSWeChatConnectRequest;
class UGSWindowsBuyGoodsRequest;
class UGSWithdrawChallengeRequest;
class UGSXBOXLiveConnectRequest;
class UGSXboxOneConnectRequest;
#ifdef GAMESPARKS_GSApi_generated_h
#error "GSApi.generated.h already included, missing '#pragma once' in GSApi.h"
#endif
#define GAMESPARKS_GSApi_generated_h

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6099_DELEGATE \
struct _Script_GameSparks_eventOnXboxOneConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnXboxOneConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnXboxOneConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnXboxOneConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnXboxOneConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6002_DELEGATE \
struct _Script_GameSparks_eventOnXBOXLiveConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnXBOXLiveConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnXBOXLiveConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnXBOXLiveConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnXBOXLiveConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5943_DELEGATE \
struct _Script_GameSparks_eventOnWithdrawChallengeRequest_Response_Parms \
{ \
	FGSWithdrawChallengeResponse WithdrawChallengeResponse; \
	bool hasErrors; \
}; \
static inline void FOnWithdrawChallengeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnWithdrawChallengeRequest_Response, FGSWithdrawChallengeResponse WithdrawChallengeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnWithdrawChallengeRequest_Response_Parms Parms; \
	Parms.WithdrawChallengeResponse=WithdrawChallengeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnWithdrawChallengeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5871_DELEGATE \
struct _Script_GameSparks_eventOnWindowsBuyGoodsRequest_Response_Parms \
{ \
	FGSBuyVirtualGoodResponse BuyVirtualGoodResponse; \
	bool hasErrors; \
}; \
static inline void FOnWindowsBuyGoodsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnWindowsBuyGoodsRequest_Response, FGSBuyVirtualGoodResponse BuyVirtualGoodResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnWindowsBuyGoodsRequest_Response_Parms Parms; \
	Parms.BuyVirtualGoodResponse=BuyVirtualGoodResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnWindowsBuyGoodsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5778_DELEGATE \
struct _Script_GameSparks_eventOnWeChatConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnWeChatConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnWeChatConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnWeChatConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnWeChatConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5677_DELEGATE \
struct _Script_GameSparks_eventOnViberConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnViberConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnViberConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnViberConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnViberConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5622_DELEGATE \
struct _Script_GameSparks_eventOnUpdateMessageRequest_Response_Parms \
{ \
	FGSUpdateMessageResponse UpdateMessageResponse; \
	bool hasErrors; \
}; \
static inline void FOnUpdateMessageRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnUpdateMessageRequest_Response, FGSUpdateMessageResponse UpdateMessageResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnUpdateMessageRequest_Response_Parms Parms; \
	Parms.UpdateMessageResponse=UpdateMessageResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnUpdateMessageRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5525_DELEGATE \
struct _Script_GameSparks_eventOnTwitterConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnTwitterConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnTwitterConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnTwitterConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnTwitterConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5435_DELEGATE \
struct _Script_GameSparks_eventOnTwitchConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnTwitchConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnTwitchConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnTwitchConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnTwitchConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5341_DELEGATE \
struct _Script_GameSparks_eventOnSteamConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnSteamConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnSteamConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnSteamConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnSteamConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5272_DELEGATE \
struct _Script_GameSparks_eventOnSteamBuyGoodsRequest_Response_Parms \
{ \
	FGSBuyVirtualGoodResponse BuyVirtualGoodResponse; \
	bool hasErrors; \
}; \
static inline void FOnSteamBuyGoodsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnSteamBuyGoodsRequest_Response, FGSBuyVirtualGoodResponse BuyVirtualGoodResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnSteamBuyGoodsRequest_Response_Parms Parms; \
	Parms.BuyVirtualGoodResponse=BuyVirtualGoodResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnSteamBuyGoodsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5223_DELEGATE \
struct _Script_GameSparks_eventOnSocialStatusRequest_Response_Parms \
{ \
	FGSSocialStatusResponse SocialStatusResponse; \
	bool hasErrors; \
}; \
static inline void FOnSocialStatusRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnSocialStatusRequest_Response, FGSSocialStatusResponse SocialStatusResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnSocialStatusRequest_Response_Parms Parms; \
	Parms.SocialStatusResponse=SocialStatusResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnSocialStatusRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5130_DELEGATE \
struct _Script_GameSparks_eventOnSocialLeaderboardDataRequest_Response_Parms \
{ \
	FGSLeaderboardDataResponse LeaderboardDataResponse; \
	bool hasErrors; \
}; \
static inline void FOnSocialLeaderboardDataRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnSocialLeaderboardDataRequest_Response, FGSLeaderboardDataResponse LeaderboardDataResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnSocialLeaderboardDataRequest_Response_Parms Parms; \
	Parms.LeaderboardDataResponse=LeaderboardDataResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnSocialLeaderboardDataRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5078_DELEGATE \
struct _Script_GameSparks_eventOnSocialDisconnectRequest_Response_Parms \
{ \
	FGSSocialDisconnectResponse SocialDisconnectResponse; \
	bool hasErrors; \
}; \
static inline void FOnSocialDisconnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnSocialDisconnectRequest_Response, FGSSocialDisconnectResponse SocialDisconnectResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnSocialDisconnectRequest_Response_Parms Parms; \
	Parms.SocialDisconnectResponse=SocialDisconnectResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnSocialDisconnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5017_DELEGATE \
struct _Script_GameSparks_eventOnSendTeamChatMessageRequest_Response_Parms \
{ \
	FGSSendTeamChatMessageResponse SendTeamChatMessageResponse; \
	bool hasErrors; \
}; \
static inline void FOnSendTeamChatMessageRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnSendTeamChatMessageRequest_Response, FGSSendTeamChatMessageResponse SendTeamChatMessageResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnSendTeamChatMessageRequest_Response_Parms Parms; \
	Parms.SendTeamChatMessageResponse=SendTeamChatMessageResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnSendTeamChatMessageRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4962_DELEGATE \
struct _Script_GameSparks_eventOnSendFriendMessageRequest_Response_Parms \
{ \
	FGSSendFriendMessageResponse SendFriendMessageResponse; \
	bool hasErrors; \
}; \
static inline void FOnSendFriendMessageRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnSendFriendMessageRequest_Response, FGSSendFriendMessageResponse SendFriendMessageResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnSendFriendMessageRequest_Response_Parms Parms; \
	Parms.SendFriendMessageResponse=SendFriendMessageResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnSendFriendMessageRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4907_DELEGATE \
struct _Script_GameSparks_eventOnScheduleBulkJobAdminRequest_Response_Parms \
{ \
	FGSScheduleBulkJobAdminResponse ScheduleBulkJobAdminResponse; \
	bool hasErrors; \
}; \
static inline void FOnScheduleBulkJobAdminRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnScheduleBulkJobAdminRequest_Response, FGSScheduleBulkJobAdminResponse ScheduleBulkJobAdminResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnScheduleBulkJobAdminRequest_Response_Parms Parms; \
	Parms.ScheduleBulkJobAdminResponse=ScheduleBulkJobAdminResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnScheduleBulkJobAdminRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4858_DELEGATE \
struct _Script_GameSparks_eventOnRevokePurchaseGoodsRequest_Response_Parms \
{ \
	FGSRevokePurchaseGoodsResponse RevokePurchaseGoodsResponse; \
	bool hasErrors; \
}; \
static inline void FOnRevokePurchaseGoodsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnRevokePurchaseGoodsRequest_Response, FGSRevokePurchaseGoodsResponse RevokePurchaseGoodsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnRevokePurchaseGoodsRequest_Response_Parms Parms; \
	Parms.RevokePurchaseGoodsResponse=RevokePurchaseGoodsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnRevokePurchaseGoodsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4797_DELEGATE \
struct _Script_GameSparks_eventOnRegistrationRequest_Response_Parms \
{ \
	FGSRegistrationResponse RegistrationResponse; \
	bool hasErrors; \
}; \
static inline void FOnRegistrationRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnRegistrationRequest_Response, FGSRegistrationResponse RegistrationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnRegistrationRequest_Response_Parms Parms; \
	Parms.RegistrationResponse=RegistrationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnRegistrationRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4707_DELEGATE \
struct _Script_GameSparks_eventOnQQConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnQQConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnQQConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnQQConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnQQConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4648_DELEGATE \
struct _Script_GameSparks_eventOnPushRegistrationRequest_Response_Parms \
{ \
	FGSPushRegistrationResponse PushRegistrationResponse; \
	bool hasErrors; \
}; \
static inline void FOnPushRegistrationRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnPushRegistrationRequest_Response, FGSPushRegistrationResponse PushRegistrationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnPushRegistrationRequest_Response_Parms Parms; \
	Parms.PushRegistrationResponse=PushRegistrationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnPushRegistrationRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4566_DELEGATE \
struct _Script_GameSparks_eventOnPsnBuyGoodsRequest_Response_Parms \
{ \
	FGSBuyVirtualGoodResponse BuyVirtualGoodResponse; \
	bool hasErrors; \
}; \
static inline void FOnPsnBuyGoodsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnPsnBuyGoodsRequest_Response, FGSBuyVirtualGoodResponse BuyVirtualGoodResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnPsnBuyGoodsRequest_Response_Parms Parms; \
	Parms.BuyVirtualGoodResponse=BuyVirtualGoodResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnPsnBuyGoodsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4465_DELEGATE \
struct _Script_GameSparks_eventOnPSNConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnPSNConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnPSNConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnPSNConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnPSNConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4368_DELEGATE \
struct _Script_GameSparks_eventOnPSNAccountConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnPSNAccountConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnPSNAccountConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnPSNAccountConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnPSNAccountConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4268_DELEGATE \
struct _Script_GameSparks_eventOnNXConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnNXConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnNXConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnNXConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnNXConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4186_DELEGATE \
struct _Script_GameSparks_eventOnMatchmakingRequest_Response_Parms \
{ \
	FGSMatchmakingResponse MatchmakingResponse; \
	bool hasErrors; \
}; \
static inline void FOnMatchmakingRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnMatchmakingRequest_Response, FGSMatchmakingResponse MatchmakingResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnMatchmakingRequest_Response_Parms Parms; \
	Parms.MatchmakingResponse=MatchmakingResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnMatchmakingRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4131_DELEGATE \
struct _Script_GameSparks_eventOnMatchDetailsRequest_Response_Parms \
{ \
	FGSMatchDetailsResponse MatchDetailsResponse; \
	bool hasErrors; \
}; \
static inline void FOnMatchDetailsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnMatchDetailsRequest_Response, FGSMatchDetailsResponse MatchDetailsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnMatchDetailsRequest_Response_Parms Parms; \
	Parms.MatchDetailsResponse=MatchDetailsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnMatchDetailsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4072_DELEGATE \
struct _Script_GameSparks_eventOnLogEventRequest_Response_Parms \
{ \
	FGSLogEventResponse LogEventResponse; \
	bool hasErrors; \
}; \
static inline void FOnLogEventRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnLogEventRequest_Response, FGSLogEventResponse LogEventResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnLogEventRequest_Response_Parms Parms; \
	Parms.LogEventResponse=LogEventResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnLogEventRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4010_DELEGATE \
struct _Script_GameSparks_eventOnLogChallengeEventRequest_Response_Parms \
{ \
	FGSLogChallengeEventResponse LogChallengeEventResponse; \
	bool hasErrors; \
}; \
static inline void FOnLogChallengeEventRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnLogChallengeEventRequest_Response, FGSLogChallengeEventResponse LogChallengeEventResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnLogChallengeEventRequest_Response_Parms Parms; \
	Parms.LogChallengeEventResponse=LogChallengeEventResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnLogChallengeEventRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3955_DELEGATE \
struct _Script_GameSparks_eventOnListVirtualGoodsRequest_Response_Parms \
{ \
	FGSListVirtualGoodsResponse ListVirtualGoodsResponse; \
	bool hasErrors; \
}; \
static inline void FOnListVirtualGoodsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListVirtualGoodsRequest_Response, FGSListVirtualGoodsResponse ListVirtualGoodsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListVirtualGoodsRequest_Response_Parms Parms; \
	Parms.ListVirtualGoodsResponse=ListVirtualGoodsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListVirtualGoodsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3891_DELEGATE \
struct _Script_GameSparks_eventOnListTransactionsRequest_Response_Parms \
{ \
	FGSListTransactionsResponse ListTransactionsResponse; \
	bool hasErrors; \
}; \
static inline void FOnListTransactionsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListTransactionsRequest_Response, FGSListTransactionsResponse ListTransactionsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListTransactionsRequest_Response_Parms Parms; \
	Parms.ListTransactionsResponse=ListTransactionsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListTransactionsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3830_DELEGATE \
struct _Script_GameSparks_eventOnListTeamsRequest_Response_Parms \
{ \
	FGSListTeamsResponse ListTeamsResponse; \
	bool hasErrors; \
}; \
static inline void FOnListTeamsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListTeamsRequest_Response, FGSListTeamsResponse ListTeamsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListTeamsRequest_Response_Parms Parms; \
	Parms.ListTeamsResponse=ListTeamsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListTeamsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3766_DELEGATE \
struct _Script_GameSparks_eventOnListTeamChatRequest_Response_Parms \
{ \
	FGSListTeamChatResponse ListTeamChatResponse; \
	bool hasErrors; \
}; \
static inline void FOnListTeamChatRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListTeamChatRequest_Response, FGSListTeamChatResponse ListTeamChatResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListTeamChatRequest_Response_Parms Parms; \
	Parms.ListTeamChatResponse=ListTeamChatResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListTeamChatRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3703_DELEGATE \
struct _Script_GameSparks_eventOnListMessageSummaryRequest_Response_Parms \
{ \
	FGSListMessageSummaryResponse ListMessageSummaryResponse; \
	bool hasErrors; \
}; \
static inline void FOnListMessageSummaryRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListMessageSummaryRequest_Response, FGSListMessageSummaryResponse ListMessageSummaryResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListMessageSummaryRequest_Response_Parms Parms; \
	Parms.ListMessageSummaryResponse=ListMessageSummaryResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListMessageSummaryRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3641_DELEGATE \
struct _Script_GameSparks_eventOnListMessageRequest_Response_Parms \
{ \
	FGSListMessageResponse ListMessageResponse; \
	bool hasErrors; \
}; \
static inline void FOnListMessageRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListMessageRequest_Response, FGSListMessageResponse ListMessageResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListMessageRequest_Response_Parms Parms; \
	Parms.ListMessageResponse=ListMessageResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListMessageRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3576_DELEGATE \
struct _Script_GameSparks_eventOnListMessageDetailRequest_Response_Parms \
{ \
	FGSListMessageDetailResponse ListMessageDetailResponse; \
	bool hasErrors; \
}; \
static inline void FOnListMessageDetailRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListMessageDetailRequest_Response, FGSListMessageDetailResponse ListMessageDetailResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListMessageDetailRequest_Response_Parms Parms; \
	Parms.ListMessageDetailResponse=ListMessageDetailResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListMessageDetailRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3527_DELEGATE \
struct _Script_GameSparks_eventOnListLeaderboardsRequest_Response_Parms \
{ \
	FGSListLeaderboardsResponse ListLeaderboardsResponse; \
	bool hasErrors; \
}; \
static inline void FOnListLeaderboardsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListLeaderboardsRequest_Response, FGSListLeaderboardsResponse ListLeaderboardsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListLeaderboardsRequest_Response_Parms Parms; \
	Parms.ListLeaderboardsResponse=ListLeaderboardsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListLeaderboardsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3470_DELEGATE \
struct _Script_GameSparks_eventOnListInviteFriendsRequest_Response_Parms \
{ \
	FGSListInviteFriendsResponse ListInviteFriendsResponse; \
	bool hasErrors; \
}; \
static inline void FOnListInviteFriendsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListInviteFriendsRequest_Response, FGSListInviteFriendsResponse ListInviteFriendsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListInviteFriendsRequest_Response_Parms Parms; \
	Parms.ListInviteFriendsResponse=ListInviteFriendsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListInviteFriendsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3413_DELEGATE \
struct _Script_GameSparks_eventOnListGameFriendsRequest_Response_Parms \
{ \
	FGSListGameFriendsResponse ListGameFriendsResponse; \
	bool hasErrors; \
}; \
static inline void FOnListGameFriendsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListGameFriendsRequest_Response, FGSListGameFriendsResponse ListGameFriendsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListGameFriendsRequest_Response_Parms Parms; \
	Parms.ListGameFriendsResponse=ListGameFriendsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListGameFriendsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3364_DELEGATE \
struct _Script_GameSparks_eventOnListChallengeTypeRequest_Response_Parms \
{ \
	FGSListChallengeTypeResponse ListChallengeTypeResponse; \
	bool hasErrors; \
}; \
static inline void FOnListChallengeTypeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListChallengeTypeRequest_Response, FGSListChallengeTypeResponse ListChallengeTypeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListChallengeTypeRequest_Response_Parms Parms; \
	Parms.ListChallengeTypeResponse=ListChallengeTypeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListChallengeTypeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3268_DELEGATE \
struct _Script_GameSparks_eventOnListChallengeRequest_Response_Parms \
{ \
	FGSListChallengeResponse ListChallengeResponse; \
	bool hasErrors; \
}; \
static inline void FOnListChallengeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListChallengeRequest_Response, FGSListChallengeResponse ListChallengeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListChallengeRequest_Response_Parms Parms; \
	Parms.ListChallengeResponse=ListChallengeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListChallengeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3225_DELEGATE \
struct _Script_GameSparks_eventOnListBulkJobsAdminRequest_Response_Parms \
{ \
	FGSListBulkJobsAdminResponse ListBulkJobsAdminResponse; \
	bool hasErrors; \
}; \
static inline void FOnListBulkJobsAdminRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListBulkJobsAdminRequest_Response, FGSListBulkJobsAdminResponse ListBulkJobsAdminResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListBulkJobsAdminRequest_Response_Parms Parms; \
	Parms.ListBulkJobsAdminResponse=ListBulkJobsAdminResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListBulkJobsAdminRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3176_DELEGATE \
struct _Script_GameSparks_eventOnListAchievementsRequest_Response_Parms \
{ \
	FGSListAchievementsResponse ListAchievementsResponse; \
	bool hasErrors; \
}; \
static inline void FOnListAchievementsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnListAchievementsRequest_Response, FGSListAchievementsResponse ListAchievementsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnListAchievementsRequest_Response_Parms Parms; \
	Parms.ListAchievementsResponse=ListAchievementsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnListAchievementsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3118_DELEGATE \
struct _Script_GameSparks_eventOnLeaveTeamRequest_Response_Parms \
{ \
	FGSLeaveTeamResponse LeaveTeamResponse; \
	bool hasErrors; \
}; \
static inline void FOnLeaveTeamRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnLeaveTeamRequest_Response, FGSLeaveTeamResponse LeaveTeamResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnLeaveTeamRequest_Response_Parms Parms; \
	Parms.LeaveTeamResponse=LeaveTeamResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnLeaveTeamRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3047_DELEGATE \
struct _Script_GameSparks_eventOnLeaderboardsEntriesRequest_Response_Parms \
{ \
	FGSLeaderboardsEntriesResponse LeaderboardsEntriesResponse; \
	bool hasErrors; \
}; \
static inline void FOnLeaderboardsEntriesRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardsEntriesRequest_Response, FGSLeaderboardsEntriesResponse LeaderboardsEntriesResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnLeaderboardsEntriesRequest_Response_Parms Parms; \
	Parms.LeaderboardsEntriesResponse=LeaderboardsEntriesResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnLeaderboardsEntriesRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2954_DELEGATE \
struct _Script_GameSparks_eventOnLeaderboardDataRequest_Response_Parms \
{ \
	FGSLeaderboardDataResponse LeaderboardDataResponse; \
	bool hasErrors; \
}; \
static inline void FOnLeaderboardDataRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnLeaderboardDataRequest_Response, FGSLeaderboardDataResponse LeaderboardDataResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnLeaderboardDataRequest_Response_Parms Parms; \
	Parms.LeaderboardDataResponse=LeaderboardDataResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnLeaderboardDataRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2861_DELEGATE \
struct _Script_GameSparks_eventOnKongregateConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnKongregateConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnKongregateConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnKongregateConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnKongregateConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2803_DELEGATE \
struct _Script_GameSparks_eventOnJoinTeamRequest_Response_Parms \
{ \
	FGSJoinTeamResponse JoinTeamResponse; \
	bool hasErrors; \
}; \
static inline void FOnJoinTeamRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnJoinTeamRequest_Response, FGSJoinTeamResponse JoinTeamResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnJoinTeamRequest_Response_Parms Parms; \
	Parms.JoinTeamResponse=JoinTeamResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnJoinTeamRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2745_DELEGATE \
struct _Script_GameSparks_eventOnJoinPendingMatchRequest_Response_Parms \
{ \
	FGSJoinPendingMatchResponse JoinPendingMatchResponse; \
	bool hasErrors; \
}; \
static inline void FOnJoinPendingMatchRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnJoinPendingMatchRequest_Response, FGSJoinPendingMatchResponse JoinPendingMatchResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnJoinPendingMatchRequest_Response_Parms Parms; \
	Parms.JoinPendingMatchResponse=JoinPendingMatchResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnJoinPendingMatchRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2687_DELEGATE \
struct _Script_GameSparks_eventOnJoinChallengeRequest_Response_Parms \
{ \
	FGSJoinChallengeResponse JoinChallengeResponse; \
	bool hasErrors; \
}; \
static inline void FOnJoinChallengeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnJoinChallengeRequest_Response, FGSJoinChallengeResponse JoinChallengeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnJoinChallengeRequest_Response_Parms Parms; \
	Parms.JoinChallengeResponse=JoinChallengeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnJoinChallengeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2615_DELEGATE \
struct _Script_GameSparks_eventOnIOSBuyGoodsRequest_Response_Parms \
{ \
	FGSBuyVirtualGoodResponse BuyVirtualGoodResponse; \
	bool hasErrors; \
}; \
static inline void FOnIOSBuyGoodsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnIOSBuyGoodsRequest_Response, FGSBuyVirtualGoodResponse BuyVirtualGoodResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnIOSBuyGoodsRequest_Response_Parms Parms; \
	Parms.BuyVirtualGoodResponse=BuyVirtualGoodResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnIOSBuyGoodsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2515_DELEGATE \
struct _Script_GameSparks_eventOnGooglePlusConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnGooglePlusConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGooglePlusConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGooglePlusConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGooglePlusConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2406_DELEGATE \
struct _Script_GameSparks_eventOnGooglePlayConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnGooglePlayConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGooglePlayConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGooglePlayConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGooglePlayConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2326_DELEGATE \
struct _Script_GameSparks_eventOnGooglePlayBuyGoodsRequest_Response_Parms \
{ \
	FGSBuyVirtualGoodResponse BuyVirtualGoodResponse; \
	bool hasErrors; \
}; \
static inline void FOnGooglePlayBuyGoodsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGooglePlayBuyGoodsRequest_Response, FGSBuyVirtualGoodResponse BuyVirtualGoodResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGooglePlayBuyGoodsRequest_Response_Parms Parms; \
	Parms.BuyVirtualGoodResponse=BuyVirtualGoodResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGooglePlayBuyGoodsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2274_DELEGATE \
struct _Script_GameSparks_eventOnGetUploadedRequest_Response_Parms \
{ \
	FGSGetUploadedResponse GetUploadedResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetUploadedRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetUploadedRequest_Response, FGSGetUploadedResponse GetUploadedResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetUploadedRequest_Response_Parms Parms; \
	Parms.GetUploadedResponse=GetUploadedResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetUploadedRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2222_DELEGATE \
struct _Script_GameSparks_eventOnGetUploadUrlRequest_Response_Parms \
{ \
	FGSGetUploadUrlResponse GetUploadUrlResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetUploadUrlRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetUploadUrlRequest_Response, FGSGetUploadUrlResponse GetUploadUrlResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetUploadUrlRequest_Response_Parms Parms; \
	Parms.GetUploadUrlResponse=GetUploadUrlResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetUploadUrlRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2164_DELEGATE \
struct _Script_GameSparks_eventOnGetTeamRequest_Response_Parms \
{ \
	FGSGetTeamResponse GetTeamResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetTeamRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetTeamRequest_Response, FGSGetTeamResponse GetTeamResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetTeamRequest_Response_Parms Parms; \
	Parms.GetTeamResponse=GetTeamResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetTeamRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2112_DELEGATE \
struct _Script_GameSparks_eventOnGetPropertySetRequest_Response_Parms \
{ \
	FGSGetPropertySetResponse GetPropertySetResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetPropertySetRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetPropertySetRequest_Response, FGSGetPropertySetResponse GetPropertySetResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetPropertySetRequest_Response_Parms Parms; \
	Parms.GetPropertySetResponse=GetPropertySetResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetPropertySetRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2060_DELEGATE \
struct _Script_GameSparks_eventOnGetPropertyRequest_Response_Parms \
{ \
	FGSGetPropertyResponse GetPropertyResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetPropertyRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetPropertyRequest_Response, FGSGetPropertyResponse GetPropertyResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetPropertyRequest_Response_Parms Parms; \
	Parms.GetPropertyResponse=GetPropertyResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetPropertyRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2005_DELEGATE \
struct _Script_GameSparks_eventOnGetMyTeamsRequest_Response_Parms \
{ \
	FGSGetMyTeamsResponse GetMyTeamsResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetMyTeamsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetMyTeamsRequest_Response, FGSGetMyTeamsResponse GetMyTeamsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetMyTeamsRequest_Response_Parms Parms; \
	Parms.GetMyTeamsResponse=GetMyTeamsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetMyTeamsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1953_DELEGATE \
struct _Script_GameSparks_eventOnGetMessageRequest_Response_Parms \
{ \
	FGSGetMessageResponse GetMessageResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetMessageRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetMessageRequest_Response, FGSGetMessageResponse GetMessageResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetMessageRequest_Response_Parms Parms; \
	Parms.GetMessageResponse=GetMessageResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetMessageRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1882_DELEGATE \
struct _Script_GameSparks_eventOnGetLeaderboardEntriesRequest_Response_Parms \
{ \
	FGSGetLeaderboardEntriesResponse GetLeaderboardEntriesResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetLeaderboardEntriesRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetLeaderboardEntriesRequest_Response, FGSGetLeaderboardEntriesResponse GetLeaderboardEntriesResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetLeaderboardEntriesRequest_Response_Parms Parms; \
	Parms.GetLeaderboardEntriesResponse=GetLeaderboardEntriesResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetLeaderboardEntriesRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1830_DELEGATE \
struct _Script_GameSparks_eventOnGetDownloadableRequest_Response_Parms \
{ \
	FGSGetDownloadableResponse GetDownloadableResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetDownloadableRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetDownloadableRequest_Response, FGSGetDownloadableResponse GetDownloadableResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetDownloadableRequest_Response_Parms Parms; \
	Parms.GetDownloadableResponse=GetDownloadableResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetDownloadableRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1775_DELEGATE \
struct _Script_GameSparks_eventOnGetChallengeRequest_Response_Parms \
{ \
	FGSGetChallengeResponse GetChallengeResponse; \
	bool hasErrors; \
}; \
static inline void FOnGetChallengeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGetChallengeRequest_Response, FGSGetChallengeResponse GetChallengeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGetChallengeRequest_Response_Parms Parms; \
	Parms.GetChallengeResponse=GetChallengeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGetChallengeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1666_DELEGATE \
struct _Script_GameSparks_eventOnGameCenterConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnGameCenterConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnGameCenterConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnGameCenterConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnGameCenterConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1600_DELEGATE \
struct _Script_GameSparks_eventOnFindPendingMatchesRequest_Response_Parms \
{ \
	FGSFindPendingMatchesResponse FindPendingMatchesResponse; \
	bool hasErrors; \
}; \
static inline void FOnFindPendingMatchesRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnFindPendingMatchesRequest_Response, FGSFindPendingMatchesResponse FindPendingMatchesResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnFindPendingMatchesRequest_Response_Parms Parms; \
	Parms.FindPendingMatchesResponse=FindPendingMatchesResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnFindPendingMatchesRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1527_DELEGATE \
struct _Script_GameSparks_eventOnFindMatchRequest_Response_Parms \
{ \
	FGSFindMatchResponse FindMatchResponse; \
	bool hasErrors; \
}; \
static inline void FOnFindMatchRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnFindMatchRequest_Response, FGSFindMatchResponse FindMatchResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnFindMatchRequest_Response_Parms Parms; \
	Parms.FindMatchResponse=FindMatchResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnFindMatchRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1463_DELEGATE \
struct _Script_GameSparks_eventOnFindChallengeRequest_Response_Parms \
{ \
	FGSFindChallengeResponse FindChallengeResponse; \
	bool hasErrors; \
}; \
static inline void FOnFindChallengeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnFindChallengeRequest_Response, FGSFindChallengeResponse FindChallengeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnFindChallengeRequest_Response_Parms Parms; \
	Parms.FindChallengeResponse=FindChallengeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnFindChallengeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1366_DELEGATE \
struct _Script_GameSparks_eventOnFacebookConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnFacebookConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnFacebookConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnFacebookConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnFacebookConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1313_DELEGATE \
struct _Script_GameSparks_eventOnEndSessionRequest_Response_Parms \
{ \
	FGSEndSessionResponse EndSessionResponse; \
	bool hasErrors; \
}; \
static inline void FOnEndSessionRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnEndSessionRequest_Response, FGSEndSessionResponse EndSessionResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnEndSessionRequest_Response_Parms Parms; \
	Parms.EndSessionResponse=EndSessionResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnEndSessionRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1255_DELEGATE \
struct _Script_GameSparks_eventOnDropTeamRequest_Response_Parms \
{ \
	FGSDropTeamResponse DropTeamResponse; \
	bool hasErrors; \
}; \
static inline void FOnDropTeamRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnDropTeamRequest_Response, FGSDropTeamResponse DropTeamResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnDropTeamRequest_Response_Parms Parms; \
	Parms.DropTeamResponse=DropTeamResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnDropTeamRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1203_DELEGATE \
struct _Script_GameSparks_eventOnDismissMultipleMessagesRequest_Response_Parms \
{ \
	FGSDismissMultipleMessagesResponse DismissMultipleMessagesResponse; \
	bool hasErrors; \
}; \
static inline void FOnDismissMultipleMessagesRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnDismissMultipleMessagesRequest_Response, FGSDismissMultipleMessagesResponse DismissMultipleMessagesResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnDismissMultipleMessagesRequest_Response_Parms Parms; \
	Parms.DismissMultipleMessagesResponse=DismissMultipleMessagesResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnDismissMultipleMessagesRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1151_DELEGATE \
struct _Script_GameSparks_eventOnDismissMessageRequest_Response_Parms \
{ \
	FGSDismissMessageResponse DismissMessageResponse; \
	bool hasErrors; \
}; \
static inline void FOnDismissMessageRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnDismissMessageRequest_Response, FGSDismissMessageResponse DismissMessageResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnDismissMessageRequest_Response_Parms Parms; \
	Parms.DismissMessageResponse=DismissMessageResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnDismissMessageRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1070_DELEGATE \
struct _Script_GameSparks_eventOnDeviceAuthenticationRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnDeviceAuthenticationRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnDeviceAuthenticationRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnDeviceAuthenticationRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnDeviceAuthenticationRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1015_DELEGATE \
struct _Script_GameSparks_eventOnDeclineChallengeRequest_Response_Parms \
{ \
	FGSDeclineChallengeResponse DeclineChallengeResponse; \
	bool hasErrors; \
}; \
static inline void FOnDeclineChallengeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnDeclineChallengeRequest_Response, FGSDeclineChallengeResponse DeclineChallengeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnDeclineChallengeRequest_Response_Parms Parms; \
	Parms.DeclineChallengeResponse=DeclineChallengeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnDeclineChallengeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_957_DELEGATE \
struct _Script_GameSparks_eventOnCreateTeamRequest_Response_Parms \
{ \
	FGSCreateTeamResponse CreateTeamResponse; \
	bool hasErrors; \
}; \
static inline void FOnCreateTeamRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnCreateTeamRequest_Response, FGSCreateTeamResponse CreateTeamResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnCreateTeamRequest_Response_Parms Parms; \
	Parms.CreateTeamResponse=CreateTeamResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnCreateTeamRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_840_DELEGATE \
struct _Script_GameSparks_eventOnCreateChallengeRequest_Response_Parms \
{ \
	FGSCreateChallengeResponse CreateChallengeResponse; \
	bool hasErrors; \
}; \
static inline void FOnCreateChallengeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnCreateChallengeRequest_Response, FGSCreateChallengeResponse CreateChallengeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnCreateChallengeRequest_Response_Parms Parms; \
	Parms.CreateChallengeResponse=CreateChallengeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnCreateChallengeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_785_DELEGATE \
struct _Script_GameSparks_eventOnConsumeVirtualGoodRequest_Response_Parms \
{ \
	FGSConsumeVirtualGoodResponse ConsumeVirtualGoodResponse; \
	bool hasErrors; \
}; \
static inline void FOnConsumeVirtualGoodRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnConsumeVirtualGoodRequest_Response, FGSConsumeVirtualGoodResponse ConsumeVirtualGoodResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnConsumeVirtualGoodRequest_Response_Parms Parms; \
	Parms.ConsumeVirtualGoodResponse=ConsumeVirtualGoodResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnConsumeVirtualGoodRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_726_DELEGATE \
struct _Script_GameSparks_eventOnChatOnChallengeRequest_Response_Parms \
{ \
	FGSChatOnChallengeResponse ChatOnChallengeResponse; \
	bool hasErrors; \
}; \
static inline void FOnChatOnChallengeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnChatOnChallengeRequest_Response, FGSChatOnChallengeResponse ChatOnChallengeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnChatOnChallengeRequest_Response_Parms Parms; \
	Parms.ChatOnChallengeResponse=ChatOnChallengeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnChatOnChallengeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_662_DELEGATE \
struct _Script_GameSparks_eventOnChangeUserDetailsRequest_Response_Parms \
{ \
	FGSChangeUserDetailsResponse ChangeUserDetailsResponse; \
	bool hasErrors; \
}; \
static inline void FOnChangeUserDetailsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnChangeUserDetailsRequest_Response, FGSChangeUserDetailsResponse ChangeUserDetailsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnChangeUserDetailsRequest_Response_Parms Parms; \
	Parms.ChangeUserDetailsResponse=ChangeUserDetailsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnChangeUserDetailsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_619_DELEGATE \
struct _Script_GameSparks_eventOnCancelBulkJobAdminRequest_Response_Parms \
{ \
	FGSCancelBulkJobAdminResponse CancelBulkJobAdminResponse; \
	bool hasErrors; \
}; \
static inline void FOnCancelBulkJobAdminRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnCancelBulkJobAdminRequest_Response, FGSCancelBulkJobAdminResponse CancelBulkJobAdminResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnCancelBulkJobAdminRequest_Response_Parms Parms; \
	Parms.CancelBulkJobAdminResponse=CancelBulkJobAdminResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnCancelBulkJobAdminRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_558_DELEGATE \
struct _Script_GameSparks_eventOnBuyVirtualGoodsRequest_Response_Parms \
{ \
	FGSBuyVirtualGoodResponse BuyVirtualGoodResponse; \
	bool hasErrors; \
}; \
static inline void FOnBuyVirtualGoodsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnBuyVirtualGoodsRequest_Response, FGSBuyVirtualGoodResponse BuyVirtualGoodResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnBuyVirtualGoodsRequest_Response_Parms Parms; \
	Parms.BuyVirtualGoodResponse=BuyVirtualGoodResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnBuyVirtualGoodsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_512_DELEGATE \
struct _Script_GameSparks_eventOnBatchAdminRequest_Response_Parms \
{ \
	FGSBatchAdminResponse BatchAdminResponse; \
	bool hasErrors; \
}; \
static inline void FOnBatchAdminRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnBatchAdminRequest_Response, FGSBatchAdminResponse BatchAdminResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnBatchAdminRequest_Response_Parms Parms; \
	Parms.BatchAdminResponse=BatchAdminResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnBatchAdminRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_453_DELEGATE \
struct _Script_GameSparks_eventOnAuthenticationRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnAuthenticationRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnAuthenticationRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnAuthenticationRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnAuthenticationRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_368_DELEGATE \
struct _Script_GameSparks_eventOnAroundMeLeaderboardRequest_Response_Parms \
{ \
	FGSAroundMeLeaderboardResponse AroundMeLeaderboardResponse; \
	bool hasErrors; \
}; \
static inline void FOnAroundMeLeaderboardRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnAroundMeLeaderboardRequest_Response, FGSAroundMeLeaderboardResponse AroundMeLeaderboardResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnAroundMeLeaderboardRequest_Response_Parms Parms; \
	Parms.AroundMeLeaderboardResponse=AroundMeLeaderboardResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnAroundMeLeaderboardRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_283_DELEGATE \
struct _Script_GameSparks_eventOnAnalyticsRequest_Response_Parms \
{ \
	FGSAnalyticsResponse AnalyticsResponse; \
	bool hasErrors; \
}; \
static inline void FOnAnalyticsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnAnalyticsRequest_Response, FGSAnalyticsResponse AnalyticsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnAnalyticsRequest_Response_Parms Parms; \
	Parms.AnalyticsResponse=AnalyticsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnAnalyticsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_193_DELEGATE \
struct _Script_GameSparks_eventOnAmazonConnectRequest_Response_Parms \
{ \
	FGSAuthenticationResponse AuthenticationResponse; \
	bool hasErrors; \
}; \
static inline void FOnAmazonConnectRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnAmazonConnectRequest_Response, FGSAuthenticationResponse AuthenticationResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnAmazonConnectRequest_Response_Parms Parms; \
	Parms.AuthenticationResponse=AuthenticationResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnAmazonConnectRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_117_DELEGATE \
struct _Script_GameSparks_eventOnAmazonBuyGoodsRequest_Response_Parms \
{ \
	FGSBuyVirtualGoodResponse BuyVirtualGoodResponse; \
	bool hasErrors; \
}; \
static inline void FOnAmazonBuyGoodsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnAmazonBuyGoodsRequest_Response, FGSBuyVirtualGoodResponse BuyVirtualGoodResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnAmazonBuyGoodsRequest_Response_Parms Parms; \
	Parms.BuyVirtualGoodResponse=BuyVirtualGoodResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnAmazonBuyGoodsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_68_DELEGATE \
struct _Script_GameSparks_eventOnAccountDetailsRequest_Response_Parms \
{ \
	FGSAccountDetailsResponse AccountDetailsResponse; \
	bool hasErrors; \
}; \
static inline void FOnAccountDetailsRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnAccountDetailsRequest_Response, FGSAccountDetailsResponse AccountDetailsResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnAccountDetailsRequest_Response_Parms Parms; \
	Parms.AccountDetailsResponse=AccountDetailsResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnAccountDetailsRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_13_DELEGATE \
struct _Script_GameSparks_eventOnAcceptChallengeRequest_Response_Parms \
{ \
	FGSAcceptChallengeResponse AcceptChallengeResponse; \
	bool hasErrors; \
}; \
static inline void FOnAcceptChallengeRequest_Response_DelegateWrapper(const FMulticastScriptDelegate& OnAcceptChallengeRequest_Response, FGSAcceptChallengeResponse AcceptChallengeResponse, bool hasErrors) \
{ \
	_Script_GameSparks_eventOnAcceptChallengeRequest_Response_Parms Parms; \
	Parms.AcceptChallengeResponse=AcceptChallengeResponse; \
	Parms.hasErrors=hasErrors ? true : false; \
	OnAcceptChallengeRequest_Response.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendAcceptChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAcceptChallengeRequest**)Z_Param__Result=UGSAcceptChallengeRequest::SendAcceptChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAcceptChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAcceptChallengeRequest**)Z_Param__Result=UGSAcceptChallengeRequest::SendAcceptChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendAcceptChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAcceptChallengeRequest**)Z_Param__Result=UGSAcceptChallengeRequest::SendAcceptChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAcceptChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAcceptChallengeRequest**)Z_Param__Result=UGSAcceptChallengeRequest::SendAcceptChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSAcceptChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSAcceptChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAcceptChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAcceptChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGSAcceptChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSAcceptChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAcceptChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAcceptChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAcceptChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAcceptChallengeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAcceptChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAcceptChallengeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAcceptChallengeRequest(UGSAcceptChallengeRequest&&); \
	NO_API UGSAcceptChallengeRequest(const UGSAcceptChallengeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAcceptChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAcceptChallengeRequest(UGSAcceptChallengeRequest&&); \
	NO_API UGSAcceptChallengeRequest(const UGSAcceptChallengeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAcceptChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAcceptChallengeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAcceptChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSAcceptChallengeRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__message() { return STRUCT_OFFSET(UGSAcceptChallengeRequest, message); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSAcceptChallengeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSAcceptChallengeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSAcceptChallengeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSAcceptChallengeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_15_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSAcceptChallengeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendAccountDetailsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAccountDetailsRequest**)Z_Param__Result=UGSAccountDetailsRequest::SendAccountDetailsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAccountDetailsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAccountDetailsRequest**)Z_Param__Result=UGSAccountDetailsRequest::SendAccountDetailsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendAccountDetailsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAccountDetailsRequest**)Z_Param__Result=UGSAccountDetailsRequest::SendAccountDetailsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAccountDetailsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAccountDetailsRequest**)Z_Param__Result=UGSAccountDetailsRequest::SendAccountDetailsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSAccountDetailsRequest(); \
	friend struct Z_Construct_UClass_UGSAccountDetailsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAccountDetailsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAccountDetailsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_INCLASS \
private: \
	static void StaticRegisterNativesUGSAccountDetailsRequest(); \
	friend struct Z_Construct_UClass_UGSAccountDetailsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAccountDetailsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAccountDetailsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAccountDetailsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAccountDetailsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAccountDetailsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAccountDetailsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAccountDetailsRequest(UGSAccountDetailsRequest&&); \
	NO_API UGSAccountDetailsRequest(const UGSAccountDetailsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAccountDetailsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAccountDetailsRequest(UGSAccountDetailsRequest&&); \
	NO_API UGSAccountDetailsRequest(const UGSAccountDetailsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAccountDetailsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAccountDetailsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAccountDetailsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSAccountDetailsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSAccountDetailsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSAccountDetailsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSAccountDetailsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_70_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_73_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSAccountDetailsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendAmazonBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AmazonUserId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReceiptId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAmazonBuyGoodsRequest**)Z_Param__Result=UGSAmazonBuyGoodsRequest::SendAmazonBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AmazonUserId,Z_Param_CurrencyCode,Z_Param_ReceiptId,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAmazonBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AmazonUserId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReceiptId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAmazonBuyGoodsRequest**)Z_Param__Result=UGSAmazonBuyGoodsRequest::SendAmazonBuyGoodsRequest(Z_Param_AmazonUserId,Z_Param_CurrencyCode,Z_Param_ReceiptId,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendAmazonBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AmazonUserId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReceiptId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAmazonBuyGoodsRequest**)Z_Param__Result=UGSAmazonBuyGoodsRequest::SendAmazonBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AmazonUserId,Z_Param_CurrencyCode,Z_Param_ReceiptId,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAmazonBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AmazonUserId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ReceiptId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAmazonBuyGoodsRequest**)Z_Param__Result=UGSAmazonBuyGoodsRequest::SendAmazonBuyGoodsRequest(Z_Param_AmazonUserId,Z_Param_CurrencyCode,Z_Param_ReceiptId,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSAmazonBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSAmazonBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAmazonBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAmazonBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_INCLASS \
private: \
	static void StaticRegisterNativesUGSAmazonBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSAmazonBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAmazonBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAmazonBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAmazonBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAmazonBuyGoodsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAmazonBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAmazonBuyGoodsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAmazonBuyGoodsRequest(UGSAmazonBuyGoodsRequest&&); \
	NO_API UGSAmazonBuyGoodsRequest(const UGSAmazonBuyGoodsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAmazonBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAmazonBuyGoodsRequest(UGSAmazonBuyGoodsRequest&&); \
	NO_API UGSAmazonBuyGoodsRequest(const UGSAmazonBuyGoodsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAmazonBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAmazonBuyGoodsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAmazonBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__amazonUserId() { return STRUCT_OFFSET(UGSAmazonBuyGoodsRequest, amazonUserId); } \
	FORCEINLINE static uint32 __PPO__currencyCode() { return STRUCT_OFFSET(UGSAmazonBuyGoodsRequest, currencyCode); } \
	FORCEINLINE static uint32 __PPO__receiptId() { return STRUCT_OFFSET(UGSAmazonBuyGoodsRequest, receiptId); } \
	FORCEINLINE static uint32 __PPO__subUnitPrice() { return STRUCT_OFFSET(UGSAmazonBuyGoodsRequest, subUnitPrice); } \
	FORCEINLINE static uint32 __PPO__uniqueTransactionByPlayer() { return STRUCT_OFFSET(UGSAmazonBuyGoodsRequest, uniqueTransactionByPlayer); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSAmazonBuyGoodsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSAmazonBuyGoodsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSAmazonBuyGoodsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSAmazonBuyGoodsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_119_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_122_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSAmazonBuyGoodsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendAmazonConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAmazonConnectRequest**)Z_Param__Result=UGSAmazonConnectRequest::SendAmazonConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAmazonConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAmazonConnectRequest**)Z_Param__Result=UGSAmazonConnectRequest::SendAmazonConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendAmazonConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAmazonConnectRequest**)Z_Param__Result=UGSAmazonConnectRequest::SendAmazonConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAmazonConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAmazonConnectRequest**)Z_Param__Result=UGSAmazonConnectRequest::SendAmazonConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSAmazonConnectRequest(); \
	friend struct Z_Construct_UClass_UGSAmazonConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAmazonConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAmazonConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_INCLASS \
private: \
	static void StaticRegisterNativesUGSAmazonConnectRequest(); \
	friend struct Z_Construct_UClass_UGSAmazonConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAmazonConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAmazonConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAmazonConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAmazonConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAmazonConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAmazonConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAmazonConnectRequest(UGSAmazonConnectRequest&&); \
	NO_API UGSAmazonConnectRequest(const UGSAmazonConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAmazonConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAmazonConnectRequest(UGSAmazonConnectRequest&&); \
	NO_API UGSAmazonConnectRequest(const UGSAmazonConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAmazonConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAmazonConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAmazonConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessToken() { return STRUCT_OFFSET(UGSAmazonConnectRequest, accessToken); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSAmazonConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSAmazonConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSAmazonConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSAmazonConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSAmazonConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSAmazonConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSAmazonConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSAmazonConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSAmazonConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSAmazonConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_195_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_198_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSAmazonConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendAnalyticsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Data); \
		P_GET_UBOOL(Z_Param_End); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Start); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAnalyticsRequest**)Z_Param__Result=UGSAnalyticsRequest::SendAnalyticsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Data,Z_Param_End,Z_Param_Key,Z_Param_Start,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAnalyticsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Data); \
		P_GET_UBOOL(Z_Param_End); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Start); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAnalyticsRequest**)Z_Param__Result=UGSAnalyticsRequest::SendAnalyticsRequest(Z_Param_Data,Z_Param_End,Z_Param_Key,Z_Param_Start,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendAnalyticsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Data); \
		P_GET_UBOOL(Z_Param_End); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Start); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAnalyticsRequest**)Z_Param__Result=UGSAnalyticsRequest::SendAnalyticsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Data,Z_Param_End,Z_Param_Key,Z_Param_Start,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAnalyticsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Data); \
		P_GET_UBOOL(Z_Param_End); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Key); \
		P_GET_UBOOL(Z_Param_Start); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAnalyticsRequest**)Z_Param__Result=UGSAnalyticsRequest::SendAnalyticsRequest(Z_Param_Data,Z_Param_End,Z_Param_Key,Z_Param_Start,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSAnalyticsRequest(); \
	friend struct Z_Construct_UClass_UGSAnalyticsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAnalyticsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAnalyticsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_INCLASS \
private: \
	static void StaticRegisterNativesUGSAnalyticsRequest(); \
	friend struct Z_Construct_UClass_UGSAnalyticsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAnalyticsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAnalyticsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAnalyticsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAnalyticsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAnalyticsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAnalyticsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAnalyticsRequest(UGSAnalyticsRequest&&); \
	NO_API UGSAnalyticsRequest(const UGSAnalyticsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAnalyticsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAnalyticsRequest(UGSAnalyticsRequest&&); \
	NO_API UGSAnalyticsRequest(const UGSAnalyticsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAnalyticsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAnalyticsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAnalyticsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__data() { return STRUCT_OFFSET(UGSAnalyticsRequest, data); } \
	FORCEINLINE static uint32 __PPO__end() { return STRUCT_OFFSET(UGSAnalyticsRequest, end); } \
	FORCEINLINE static uint32 __PPO__key() { return STRUCT_OFFSET(UGSAnalyticsRequest, key); } \
	FORCEINLINE static uint32 __PPO__start() { return STRUCT_OFFSET(UGSAnalyticsRequest, start); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSAnalyticsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSAnalyticsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSAnalyticsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSAnalyticsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_285_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_288_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSAnalyticsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendAroundMeLeaderboardRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CustomIdFilter); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAroundMeLeaderboardRequest**)Z_Param__Result=UGSAroundMeLeaderboardRequest::SendAroundMeLeaderboardRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_CustomIdFilter,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAroundMeLeaderboardRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CustomIdFilter); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAroundMeLeaderboardRequest**)Z_Param__Result=UGSAroundMeLeaderboardRequest::SendAroundMeLeaderboardRequest(Z_Param_ChallengeInstanceId,Z_Param_CustomIdFilter,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendAroundMeLeaderboardRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CustomIdFilter); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAroundMeLeaderboardRequest**)Z_Param__Result=UGSAroundMeLeaderboardRequest::SendAroundMeLeaderboardRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_CustomIdFilter,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAroundMeLeaderboardRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CustomIdFilter); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAroundMeLeaderboardRequest**)Z_Param__Result=UGSAroundMeLeaderboardRequest::SendAroundMeLeaderboardRequest(Z_Param_ChallengeInstanceId,Z_Param_CustomIdFilter,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSAroundMeLeaderboardRequest(); \
	friend struct Z_Construct_UClass_UGSAroundMeLeaderboardRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAroundMeLeaderboardRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAroundMeLeaderboardRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_INCLASS \
private: \
	static void StaticRegisterNativesUGSAroundMeLeaderboardRequest(); \
	friend struct Z_Construct_UClass_UGSAroundMeLeaderboardRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAroundMeLeaderboardRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAroundMeLeaderboardRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAroundMeLeaderboardRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAroundMeLeaderboardRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAroundMeLeaderboardRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAroundMeLeaderboardRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAroundMeLeaderboardRequest(UGSAroundMeLeaderboardRequest&&); \
	NO_API UGSAroundMeLeaderboardRequest(const UGSAroundMeLeaderboardRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAroundMeLeaderboardRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAroundMeLeaderboardRequest(UGSAroundMeLeaderboardRequest&&); \
	NO_API UGSAroundMeLeaderboardRequest(const UGSAroundMeLeaderboardRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAroundMeLeaderboardRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAroundMeLeaderboardRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAroundMeLeaderboardRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__customIdFilter() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, customIdFilter); } \
	FORCEINLINE static uint32 __PPO__dontErrorOnNotSocial() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, dontErrorOnNotSocial); } \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__friendIds() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, friendIds); } \
	FORCEINLINE static uint32 __PPO__includeFirst() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, includeFirst); } \
	FORCEINLINE static uint32 __PPO__includeLast() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, includeLast); } \
	FORCEINLINE static uint32 __PPO__inverseSocial() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, inverseSocial); } \
	FORCEINLINE static uint32 __PPO__leaderboardShortCode() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, leaderboardShortCode); } \
	FORCEINLINE static uint32 __PPO__social() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, social); } \
	FORCEINLINE static uint32 __PPO__teamIds() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, teamIds); } \
	FORCEINLINE static uint32 __PPO__teamTypes() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, teamTypes); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSAroundMeLeaderboardRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_370_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_373_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSAroundMeLeaderboardRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendAuthenticationRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAuthenticationRequest**)Z_Param__Result=UGSAuthenticationRequest::SendAuthenticationRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Password,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAuthenticationRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAuthenticationRequest**)Z_Param__Result=UGSAuthenticationRequest::SendAuthenticationRequest(Z_Param_Password,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendAuthenticationRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAuthenticationRequest**)Z_Param__Result=UGSAuthenticationRequest::SendAuthenticationRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Password,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendAuthenticationRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSAuthenticationRequest**)Z_Param__Result=UGSAuthenticationRequest::SendAuthenticationRequest(Z_Param_Password,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSAuthenticationRequest(); \
	friend struct Z_Construct_UClass_UGSAuthenticationRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAuthenticationRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAuthenticationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_INCLASS \
private: \
	static void StaticRegisterNativesUGSAuthenticationRequest(); \
	friend struct Z_Construct_UClass_UGSAuthenticationRequest_Statics; \
public: \
	DECLARE_CLASS(UGSAuthenticationRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSAuthenticationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAuthenticationRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAuthenticationRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAuthenticationRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAuthenticationRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAuthenticationRequest(UGSAuthenticationRequest&&); \
	NO_API UGSAuthenticationRequest(const UGSAuthenticationRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSAuthenticationRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSAuthenticationRequest(UGSAuthenticationRequest&&); \
	NO_API UGSAuthenticationRequest(const UGSAuthenticationRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSAuthenticationRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSAuthenticationRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSAuthenticationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__password() { return STRUCT_OFFSET(UGSAuthenticationRequest, password); } \
	FORCEINLINE static uint32 __PPO__userName() { return STRUCT_OFFSET(UGSAuthenticationRequest, userName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSAuthenticationRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSAuthenticationRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSAuthenticationRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSAuthenticationRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_455_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_458_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSAuthenticationRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendBatchAdminRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_PlayerIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Request); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSBatchAdminRequest**)Z_Param__Result=UGSBatchAdminRequest::SendBatchAdminRequest(Z_Param_PlayerIds,Z_Param_Request,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendBatchAdminRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_PlayerIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Request); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSBatchAdminRequest**)Z_Param__Result=UGSBatchAdminRequest::SendBatchAdminRequest(Z_Param_PlayerIds,Z_Param_Request,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSBatchAdminRequest(); \
	friend struct Z_Construct_UClass_UGSBatchAdminRequest_Statics; \
public: \
	DECLARE_CLASS(UGSBatchAdminRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSBatchAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_INCLASS \
private: \
	static void StaticRegisterNativesUGSBatchAdminRequest(); \
	friend struct Z_Construct_UClass_UGSBatchAdminRequest_Statics; \
public: \
	DECLARE_CLASS(UGSBatchAdminRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSBatchAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSBatchAdminRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSBatchAdminRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSBatchAdminRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSBatchAdminRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSBatchAdminRequest(UGSBatchAdminRequest&&); \
	NO_API UGSBatchAdminRequest(const UGSBatchAdminRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSBatchAdminRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSBatchAdminRequest(UGSBatchAdminRequest&&); \
	NO_API UGSBatchAdminRequest(const UGSBatchAdminRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSBatchAdminRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSBatchAdminRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSBatchAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerIds() { return STRUCT_OFFSET(UGSBatchAdminRequest, playerIds); } \
	FORCEINLINE static uint32 __PPO__request() { return STRUCT_OFFSET(UGSBatchAdminRequest, request); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSBatchAdminRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSBatchAdminRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSBatchAdminRequest, requestTimeoutSeconds); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_514_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_517_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSBatchAdminRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendBuyVirtualGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrencyType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSBuyVirtualGoodsRequest**)Z_Param__Result=UGSBuyVirtualGoodsRequest::SendBuyVirtualGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyShortCode,Z_Param_CurrencyType,Z_Param_Quantity,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendBuyVirtualGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrencyType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSBuyVirtualGoodsRequest**)Z_Param__Result=UGSBuyVirtualGoodsRequest::SendBuyVirtualGoodsRequest(Z_Param_CurrencyShortCode,Z_Param_CurrencyType,Z_Param_Quantity,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendBuyVirtualGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrencyType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSBuyVirtualGoodsRequest**)Z_Param__Result=UGSBuyVirtualGoodsRequest::SendBuyVirtualGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyShortCode,Z_Param_CurrencyType,Z_Param_Quantity,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendBuyVirtualGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CurrencyType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSBuyVirtualGoodsRequest**)Z_Param__Result=UGSBuyVirtualGoodsRequest::SendBuyVirtualGoodsRequest(Z_Param_CurrencyShortCode,Z_Param_CurrencyType,Z_Param_Quantity,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSBuyVirtualGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSBuyVirtualGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSBuyVirtualGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSBuyVirtualGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_INCLASS \
private: \
	static void StaticRegisterNativesUGSBuyVirtualGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSBuyVirtualGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSBuyVirtualGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSBuyVirtualGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSBuyVirtualGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSBuyVirtualGoodsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSBuyVirtualGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSBuyVirtualGoodsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSBuyVirtualGoodsRequest(UGSBuyVirtualGoodsRequest&&); \
	NO_API UGSBuyVirtualGoodsRequest(const UGSBuyVirtualGoodsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSBuyVirtualGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSBuyVirtualGoodsRequest(UGSBuyVirtualGoodsRequest&&); \
	NO_API UGSBuyVirtualGoodsRequest(const UGSBuyVirtualGoodsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSBuyVirtualGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSBuyVirtualGoodsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSBuyVirtualGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__currencyShortCode() { return STRUCT_OFFSET(UGSBuyVirtualGoodsRequest, currencyShortCode); } \
	FORCEINLINE static uint32 __PPO__currencyType() { return STRUCT_OFFSET(UGSBuyVirtualGoodsRequest, currencyType); } \
	FORCEINLINE static uint32 __PPO__quantity() { return STRUCT_OFFSET(UGSBuyVirtualGoodsRequest, quantity); } \
	FORCEINLINE static uint32 __PPO__shortCode() { return STRUCT_OFFSET(UGSBuyVirtualGoodsRequest, shortCode); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSBuyVirtualGoodsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSBuyVirtualGoodsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSBuyVirtualGoodsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSBuyVirtualGoodsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_560_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_563_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSBuyVirtualGoodsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendCancelBulkJobAdminRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_BulkJobIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCancelBulkJobAdminRequest**)Z_Param__Result=UGSCancelBulkJobAdminRequest::SendCancelBulkJobAdminRequest(Z_Param_BulkJobIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendCancelBulkJobAdminRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_BulkJobIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCancelBulkJobAdminRequest**)Z_Param__Result=UGSCancelBulkJobAdminRequest::SendCancelBulkJobAdminRequest(Z_Param_BulkJobIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCancelBulkJobAdminRequest(); \
	friend struct Z_Construct_UClass_UGSCancelBulkJobAdminRequest_Statics; \
public: \
	DECLARE_CLASS(UGSCancelBulkJobAdminRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSCancelBulkJobAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_INCLASS \
private: \
	static void StaticRegisterNativesUGSCancelBulkJobAdminRequest(); \
	friend struct Z_Construct_UClass_UGSCancelBulkJobAdminRequest_Statics; \
public: \
	DECLARE_CLASS(UGSCancelBulkJobAdminRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSCancelBulkJobAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCancelBulkJobAdminRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCancelBulkJobAdminRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCancelBulkJobAdminRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCancelBulkJobAdminRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCancelBulkJobAdminRequest(UGSCancelBulkJobAdminRequest&&); \
	NO_API UGSCancelBulkJobAdminRequest(const UGSCancelBulkJobAdminRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCancelBulkJobAdminRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCancelBulkJobAdminRequest(UGSCancelBulkJobAdminRequest&&); \
	NO_API UGSCancelBulkJobAdminRequest(const UGSCancelBulkJobAdminRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCancelBulkJobAdminRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCancelBulkJobAdminRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCancelBulkJobAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bulkJobIds() { return STRUCT_OFFSET(UGSCancelBulkJobAdminRequest, bulkJobIds); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSCancelBulkJobAdminRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSCancelBulkJobAdminRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSCancelBulkJobAdminRequest, requestTimeoutSeconds); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_621_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_624_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSCancelBulkJobAdminRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendChangeUserDetailsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Language); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OldPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSChangeUserDetailsRequest**)Z_Param__Result=UGSChangeUserDetailsRequest::SendChangeUserDetailsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DisplayName,Z_Param_Language,Z_Param_NewPassword,Z_Param_OldPassword,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendChangeUserDetailsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Language); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OldPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSChangeUserDetailsRequest**)Z_Param__Result=UGSChangeUserDetailsRequest::SendChangeUserDetailsRequest(Z_Param_DisplayName,Z_Param_Language,Z_Param_NewPassword,Z_Param_OldPassword,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendChangeUserDetailsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Language); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OldPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSChangeUserDetailsRequest**)Z_Param__Result=UGSChangeUserDetailsRequest::SendChangeUserDetailsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DisplayName,Z_Param_Language,Z_Param_NewPassword,Z_Param_OldPassword,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendChangeUserDetailsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Language); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OldPassword); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSChangeUserDetailsRequest**)Z_Param__Result=UGSChangeUserDetailsRequest::SendChangeUserDetailsRequest(Z_Param_DisplayName,Z_Param_Language,Z_Param_NewPassword,Z_Param_OldPassword,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSChangeUserDetailsRequest(); \
	friend struct Z_Construct_UClass_UGSChangeUserDetailsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSChangeUserDetailsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSChangeUserDetailsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_INCLASS \
private: \
	static void StaticRegisterNativesUGSChangeUserDetailsRequest(); \
	friend struct Z_Construct_UClass_UGSChangeUserDetailsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSChangeUserDetailsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSChangeUserDetailsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSChangeUserDetailsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSChangeUserDetailsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSChangeUserDetailsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSChangeUserDetailsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSChangeUserDetailsRequest(UGSChangeUserDetailsRequest&&); \
	NO_API UGSChangeUserDetailsRequest(const UGSChangeUserDetailsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSChangeUserDetailsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSChangeUserDetailsRequest(UGSChangeUserDetailsRequest&&); \
	NO_API UGSChangeUserDetailsRequest(const UGSChangeUserDetailsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSChangeUserDetailsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSChangeUserDetailsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSChangeUserDetailsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__displayName() { return STRUCT_OFFSET(UGSChangeUserDetailsRequest, displayName); } \
	FORCEINLINE static uint32 __PPO__language() { return STRUCT_OFFSET(UGSChangeUserDetailsRequest, language); } \
	FORCEINLINE static uint32 __PPO__newPassword() { return STRUCT_OFFSET(UGSChangeUserDetailsRequest, newPassword); } \
	FORCEINLINE static uint32 __PPO__oldPassword() { return STRUCT_OFFSET(UGSChangeUserDetailsRequest, oldPassword); } \
	FORCEINLINE static uint32 __PPO__userName() { return STRUCT_OFFSET(UGSChangeUserDetailsRequest, userName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSChangeUserDetailsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSChangeUserDetailsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSChangeUserDetailsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSChangeUserDetailsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_664_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_667_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSChangeUserDetailsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendChatOnChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSChatOnChallengeRequest**)Z_Param__Result=UGSChatOnChallengeRequest::SendChatOnChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendChatOnChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSChatOnChallengeRequest**)Z_Param__Result=UGSChatOnChallengeRequest::SendChatOnChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendChatOnChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSChatOnChallengeRequest**)Z_Param__Result=UGSChatOnChallengeRequest::SendChatOnChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendChatOnChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSChatOnChallengeRequest**)Z_Param__Result=UGSChatOnChallengeRequest::SendChatOnChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSChatOnChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSChatOnChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSChatOnChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSChatOnChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_INCLASS \
private: \
	static void StaticRegisterNativesUGSChatOnChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSChatOnChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSChatOnChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSChatOnChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSChatOnChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSChatOnChallengeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSChatOnChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSChatOnChallengeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSChatOnChallengeRequest(UGSChatOnChallengeRequest&&); \
	NO_API UGSChatOnChallengeRequest(const UGSChatOnChallengeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSChatOnChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSChatOnChallengeRequest(UGSChatOnChallengeRequest&&); \
	NO_API UGSChatOnChallengeRequest(const UGSChatOnChallengeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSChatOnChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSChatOnChallengeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSChatOnChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSChatOnChallengeRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__message() { return STRUCT_OFFSET(UGSChatOnChallengeRequest, message); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSChatOnChallengeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSChatOnChallengeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSChatOnChallengeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSChatOnChallengeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_728_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_731_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSChatOnChallengeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendConsumeVirtualGoodRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSConsumeVirtualGoodRequest**)Z_Param__Result=UGSConsumeVirtualGoodRequest::SendConsumeVirtualGoodRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Quantity,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendConsumeVirtualGoodRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSConsumeVirtualGoodRequest**)Z_Param__Result=UGSConsumeVirtualGoodRequest::SendConsumeVirtualGoodRequest(Z_Param_Quantity,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendConsumeVirtualGoodRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSConsumeVirtualGoodRequest**)Z_Param__Result=UGSConsumeVirtualGoodRequest::SendConsumeVirtualGoodRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Quantity,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendConsumeVirtualGoodRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Quantity); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSConsumeVirtualGoodRequest**)Z_Param__Result=UGSConsumeVirtualGoodRequest::SendConsumeVirtualGoodRequest(Z_Param_Quantity,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSConsumeVirtualGoodRequest(); \
	friend struct Z_Construct_UClass_UGSConsumeVirtualGoodRequest_Statics; \
public: \
	DECLARE_CLASS(UGSConsumeVirtualGoodRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSConsumeVirtualGoodRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_INCLASS \
private: \
	static void StaticRegisterNativesUGSConsumeVirtualGoodRequest(); \
	friend struct Z_Construct_UClass_UGSConsumeVirtualGoodRequest_Statics; \
public: \
	DECLARE_CLASS(UGSConsumeVirtualGoodRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSConsumeVirtualGoodRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSConsumeVirtualGoodRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSConsumeVirtualGoodRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSConsumeVirtualGoodRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSConsumeVirtualGoodRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSConsumeVirtualGoodRequest(UGSConsumeVirtualGoodRequest&&); \
	NO_API UGSConsumeVirtualGoodRequest(const UGSConsumeVirtualGoodRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSConsumeVirtualGoodRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSConsumeVirtualGoodRequest(UGSConsumeVirtualGoodRequest&&); \
	NO_API UGSConsumeVirtualGoodRequest(const UGSConsumeVirtualGoodRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSConsumeVirtualGoodRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSConsumeVirtualGoodRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSConsumeVirtualGoodRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__quantity() { return STRUCT_OFFSET(UGSConsumeVirtualGoodRequest, quantity); } \
	FORCEINLINE static uint32 __PPO__shortCode() { return STRUCT_OFFSET(UGSConsumeVirtualGoodRequest, shortCode); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSConsumeVirtualGoodRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSConsumeVirtualGoodRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSConsumeVirtualGoodRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSConsumeVirtualGoodRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_787_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_790_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSConsumeVirtualGoodRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendCreateChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessType); \
		P_GET_UBOOL(Z_Param_AutoStartJoinedChallengeOnMaxPlayers); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeMessage); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency1Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency2Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency3Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency4Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency5Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency6Wager); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CurrencyWagers); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_EligibilityCriteria); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EndTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExpiryTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxAttempts); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxPlayers); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinPlayers); \
		P_GET_UBOOL(Z_Param_Silent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_UsersToChallenge); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCreateChallengeRequest**)Z_Param__Result=UGSCreateChallengeRequest::SendCreateChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessType,Z_Param_AutoStartJoinedChallengeOnMaxPlayers,Z_Param_ChallengeMessage,Z_Param_ChallengeShortCode,Z_Param_Currency1Wager,Z_Param_Currency2Wager,Z_Param_Currency3Wager,Z_Param_Currency4Wager,Z_Param_Currency5Wager,Z_Param_Currency6Wager,Z_Param_CurrencyWagers,Z_Param_EligibilityCriteria,Z_Param_EndTime,Z_Param_ExpiryTime,Z_Param_MaxAttempts,Z_Param_MaxPlayers,Z_Param_MinPlayers,Z_Param_Silent,Z_Param_StartTime,Z_Param_UsersToChallenge,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCreateChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessType); \
		P_GET_UBOOL(Z_Param_AutoStartJoinedChallengeOnMaxPlayers); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeMessage); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency1Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency2Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency3Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency4Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency5Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency6Wager); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CurrencyWagers); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_EligibilityCriteria); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EndTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExpiryTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxAttempts); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxPlayers); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinPlayers); \
		P_GET_UBOOL(Z_Param_Silent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_UsersToChallenge); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCreateChallengeRequest**)Z_Param__Result=UGSCreateChallengeRequest::SendCreateChallengeRequest(Z_Param_AccessType,Z_Param_AutoStartJoinedChallengeOnMaxPlayers,Z_Param_ChallengeMessage,Z_Param_ChallengeShortCode,Z_Param_Currency1Wager,Z_Param_Currency2Wager,Z_Param_Currency3Wager,Z_Param_Currency4Wager,Z_Param_Currency5Wager,Z_Param_Currency6Wager,Z_Param_CurrencyWagers,Z_Param_EligibilityCriteria,Z_Param_EndTime,Z_Param_ExpiryTime,Z_Param_MaxAttempts,Z_Param_MaxPlayers,Z_Param_MinPlayers,Z_Param_Silent,Z_Param_StartTime,Z_Param_UsersToChallenge,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendCreateChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessType); \
		P_GET_UBOOL(Z_Param_AutoStartJoinedChallengeOnMaxPlayers); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeMessage); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency1Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency2Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency3Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency4Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency5Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency6Wager); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CurrencyWagers); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_EligibilityCriteria); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EndTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExpiryTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxAttempts); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxPlayers); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinPlayers); \
		P_GET_UBOOL(Z_Param_Silent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_UsersToChallenge); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCreateChallengeRequest**)Z_Param__Result=UGSCreateChallengeRequest::SendCreateChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessType,Z_Param_AutoStartJoinedChallengeOnMaxPlayers,Z_Param_ChallengeMessage,Z_Param_ChallengeShortCode,Z_Param_Currency1Wager,Z_Param_Currency2Wager,Z_Param_Currency3Wager,Z_Param_Currency4Wager,Z_Param_Currency5Wager,Z_Param_Currency6Wager,Z_Param_CurrencyWagers,Z_Param_EligibilityCriteria,Z_Param_EndTime,Z_Param_ExpiryTime,Z_Param_MaxAttempts,Z_Param_MaxPlayers,Z_Param_MinPlayers,Z_Param_Silent,Z_Param_StartTime,Z_Param_UsersToChallenge,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCreateChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessType); \
		P_GET_UBOOL(Z_Param_AutoStartJoinedChallengeOnMaxPlayers); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeMessage); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency1Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency2Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency3Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency4Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency5Wager); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Currency6Wager); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CurrencyWagers); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_EligibilityCriteria); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EndTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExpiryTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxAttempts); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxPlayers); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MinPlayers); \
		P_GET_UBOOL(Z_Param_Silent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StartTime); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_UsersToChallenge); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCreateChallengeRequest**)Z_Param__Result=UGSCreateChallengeRequest::SendCreateChallengeRequest(Z_Param_AccessType,Z_Param_AutoStartJoinedChallengeOnMaxPlayers,Z_Param_ChallengeMessage,Z_Param_ChallengeShortCode,Z_Param_Currency1Wager,Z_Param_Currency2Wager,Z_Param_Currency3Wager,Z_Param_Currency4Wager,Z_Param_Currency5Wager,Z_Param_Currency6Wager,Z_Param_CurrencyWagers,Z_Param_EligibilityCriteria,Z_Param_EndTime,Z_Param_ExpiryTime,Z_Param_MaxAttempts,Z_Param_MaxPlayers,Z_Param_MinPlayers,Z_Param_Silent,Z_Param_StartTime,Z_Param_UsersToChallenge,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCreateChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSCreateChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSCreateChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSCreateChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_INCLASS \
private: \
	static void StaticRegisterNativesUGSCreateChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSCreateChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSCreateChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSCreateChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCreateChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCreateChallengeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCreateChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCreateChallengeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCreateChallengeRequest(UGSCreateChallengeRequest&&); \
	NO_API UGSCreateChallengeRequest(const UGSCreateChallengeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCreateChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCreateChallengeRequest(UGSCreateChallengeRequest&&); \
	NO_API UGSCreateChallengeRequest(const UGSCreateChallengeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCreateChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCreateChallengeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCreateChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessType() { return STRUCT_OFFSET(UGSCreateChallengeRequest, accessType); } \
	FORCEINLINE static uint32 __PPO__autoStartJoinedChallengeOnMaxPlayers() { return STRUCT_OFFSET(UGSCreateChallengeRequest, autoStartJoinedChallengeOnMaxPlayers); } \
	FORCEINLINE static uint32 __PPO__challengeMessage() { return STRUCT_OFFSET(UGSCreateChallengeRequest, challengeMessage); } \
	FORCEINLINE static uint32 __PPO__challengeShortCode() { return STRUCT_OFFSET(UGSCreateChallengeRequest, challengeShortCode); } \
	FORCEINLINE static uint32 __PPO__currency1Wager() { return STRUCT_OFFSET(UGSCreateChallengeRequest, currency1Wager); } \
	FORCEINLINE static uint32 __PPO__currency2Wager() { return STRUCT_OFFSET(UGSCreateChallengeRequest, currency2Wager); } \
	FORCEINLINE static uint32 __PPO__currency3Wager() { return STRUCT_OFFSET(UGSCreateChallengeRequest, currency3Wager); } \
	FORCEINLINE static uint32 __PPO__currency4Wager() { return STRUCT_OFFSET(UGSCreateChallengeRequest, currency4Wager); } \
	FORCEINLINE static uint32 __PPO__currency5Wager() { return STRUCT_OFFSET(UGSCreateChallengeRequest, currency5Wager); } \
	FORCEINLINE static uint32 __PPO__currency6Wager() { return STRUCT_OFFSET(UGSCreateChallengeRequest, currency6Wager); } \
	FORCEINLINE static uint32 __PPO__currencyWagers() { return STRUCT_OFFSET(UGSCreateChallengeRequest, currencyWagers); } \
	FORCEINLINE static uint32 __PPO__eligibilityCriteria() { return STRUCT_OFFSET(UGSCreateChallengeRequest, eligibilityCriteria); } \
	FORCEINLINE static uint32 __PPO__endTime() { return STRUCT_OFFSET(UGSCreateChallengeRequest, endTime); } \
	FORCEINLINE static uint32 __PPO__expiryTime() { return STRUCT_OFFSET(UGSCreateChallengeRequest, expiryTime); } \
	FORCEINLINE static uint32 __PPO__maxAttempts() { return STRUCT_OFFSET(UGSCreateChallengeRequest, maxAttempts); } \
	FORCEINLINE static uint32 __PPO__maxPlayers() { return STRUCT_OFFSET(UGSCreateChallengeRequest, maxPlayers); } \
	FORCEINLINE static uint32 __PPO__minPlayers() { return STRUCT_OFFSET(UGSCreateChallengeRequest, minPlayers); } \
	FORCEINLINE static uint32 __PPO__silent() { return STRUCT_OFFSET(UGSCreateChallengeRequest, silent); } \
	FORCEINLINE static uint32 __PPO__startTime() { return STRUCT_OFFSET(UGSCreateChallengeRequest, startTime); } \
	FORCEINLINE static uint32 __PPO__usersToChallenge() { return STRUCT_OFFSET(UGSCreateChallengeRequest, usersToChallenge); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSCreateChallengeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSCreateChallengeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSCreateChallengeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSCreateChallengeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_842_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_845_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSCreateChallengeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendCreateTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCreateTeamRequest**)Z_Param__Result=UGSCreateTeamRequest::SendCreateTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_TeamId,Z_Param_TeamName,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCreateTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCreateTeamRequest**)Z_Param__Result=UGSCreateTeamRequest::SendCreateTeamRequest(Z_Param_TeamId,Z_Param_TeamName,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendCreateTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCreateTeamRequest**)Z_Param__Result=UGSCreateTeamRequest::SendCreateTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_TeamId,Z_Param_TeamName,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendCreateTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSCreateTeamRequest**)Z_Param__Result=UGSCreateTeamRequest::SendCreateTeamRequest(Z_Param_TeamId,Z_Param_TeamName,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSCreateTeamRequest(); \
	friend struct Z_Construct_UClass_UGSCreateTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSCreateTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSCreateTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_INCLASS \
private: \
	static void StaticRegisterNativesUGSCreateTeamRequest(); \
	friend struct Z_Construct_UClass_UGSCreateTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSCreateTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSCreateTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCreateTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCreateTeamRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCreateTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCreateTeamRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCreateTeamRequest(UGSCreateTeamRequest&&); \
	NO_API UGSCreateTeamRequest(const UGSCreateTeamRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSCreateTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSCreateTeamRequest(UGSCreateTeamRequest&&); \
	NO_API UGSCreateTeamRequest(const UGSCreateTeamRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSCreateTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSCreateTeamRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSCreateTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__teamId() { return STRUCT_OFFSET(UGSCreateTeamRequest, teamId); } \
	FORCEINLINE static uint32 __PPO__teamName() { return STRUCT_OFFSET(UGSCreateTeamRequest, teamName); } \
	FORCEINLINE static uint32 __PPO__teamType() { return STRUCT_OFFSET(UGSCreateTeamRequest, teamType); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSCreateTeamRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSCreateTeamRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSCreateTeamRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSCreateTeamRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_959_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_962_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSCreateTeamRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendDeclineChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDeclineChallengeRequest**)Z_Param__Result=UGSDeclineChallengeRequest::SendDeclineChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDeclineChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDeclineChallengeRequest**)Z_Param__Result=UGSDeclineChallengeRequest::SendDeclineChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendDeclineChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDeclineChallengeRequest**)Z_Param__Result=UGSDeclineChallengeRequest::SendDeclineChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDeclineChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDeclineChallengeRequest**)Z_Param__Result=UGSDeclineChallengeRequest::SendDeclineChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSDeclineChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSDeclineChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDeclineChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDeclineChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_INCLASS \
private: \
	static void StaticRegisterNativesUGSDeclineChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSDeclineChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDeclineChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDeclineChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDeclineChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDeclineChallengeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDeclineChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDeclineChallengeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDeclineChallengeRequest(UGSDeclineChallengeRequest&&); \
	NO_API UGSDeclineChallengeRequest(const UGSDeclineChallengeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDeclineChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDeclineChallengeRequest(UGSDeclineChallengeRequest&&); \
	NO_API UGSDeclineChallengeRequest(const UGSDeclineChallengeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDeclineChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDeclineChallengeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDeclineChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSDeclineChallengeRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__message() { return STRUCT_OFFSET(UGSDeclineChallengeRequest, message); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSDeclineChallengeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSDeclineChallengeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSDeclineChallengeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSDeclineChallengeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1017_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1020_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSDeclineChallengeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendDeviceAuthenticationRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceModel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceOS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OperatingSystem); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDeviceAuthenticationRequest**)Z_Param__Result=UGSDeviceAuthenticationRequest::SendDeviceAuthenticationRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DeviceId,Z_Param_DeviceModel,Z_Param_DeviceName,Z_Param_DeviceOS,Z_Param_DeviceType,Z_Param_DisplayName,Z_Param_OperatingSystem,Z_Param_Segments,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDeviceAuthenticationRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceModel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceOS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OperatingSystem); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDeviceAuthenticationRequest**)Z_Param__Result=UGSDeviceAuthenticationRequest::SendDeviceAuthenticationRequest(Z_Param_DeviceId,Z_Param_DeviceModel,Z_Param_DeviceName,Z_Param_DeviceOS,Z_Param_DeviceType,Z_Param_DisplayName,Z_Param_OperatingSystem,Z_Param_Segments,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendDeviceAuthenticationRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceModel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceOS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OperatingSystem); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDeviceAuthenticationRequest**)Z_Param__Result=UGSDeviceAuthenticationRequest::SendDeviceAuthenticationRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DeviceId,Z_Param_DeviceModel,Z_Param_DeviceName,Z_Param_DeviceOS,Z_Param_DeviceType,Z_Param_DisplayName,Z_Param_OperatingSystem,Z_Param_Segments,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDeviceAuthenticationRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceModel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceOS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OperatingSystem); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDeviceAuthenticationRequest**)Z_Param__Result=UGSDeviceAuthenticationRequest::SendDeviceAuthenticationRequest(Z_Param_DeviceId,Z_Param_DeviceModel,Z_Param_DeviceName,Z_Param_DeviceOS,Z_Param_DeviceType,Z_Param_DisplayName,Z_Param_OperatingSystem,Z_Param_Segments,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSDeviceAuthenticationRequest(); \
	friend struct Z_Construct_UClass_UGSDeviceAuthenticationRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDeviceAuthenticationRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDeviceAuthenticationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_INCLASS \
private: \
	static void StaticRegisterNativesUGSDeviceAuthenticationRequest(); \
	friend struct Z_Construct_UClass_UGSDeviceAuthenticationRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDeviceAuthenticationRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDeviceAuthenticationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDeviceAuthenticationRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDeviceAuthenticationRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDeviceAuthenticationRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDeviceAuthenticationRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDeviceAuthenticationRequest(UGSDeviceAuthenticationRequest&&); \
	NO_API UGSDeviceAuthenticationRequest(const UGSDeviceAuthenticationRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDeviceAuthenticationRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDeviceAuthenticationRequest(UGSDeviceAuthenticationRequest&&); \
	NO_API UGSDeviceAuthenticationRequest(const UGSDeviceAuthenticationRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDeviceAuthenticationRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDeviceAuthenticationRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDeviceAuthenticationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__deviceId() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, deviceId); } \
	FORCEINLINE static uint32 __PPO__deviceModel() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, deviceModel); } \
	FORCEINLINE static uint32 __PPO__deviceName() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, deviceName); } \
	FORCEINLINE static uint32 __PPO__deviceOS() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, deviceOS); } \
	FORCEINLINE static uint32 __PPO__deviceType() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, deviceType); } \
	FORCEINLINE static uint32 __PPO__displayName() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, displayName); } \
	FORCEINLINE static uint32 __PPO__operatingSystem() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, operatingSystem); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, segments); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSDeviceAuthenticationRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1072_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1075_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSDeviceAuthenticationRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendDismissMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDismissMessageRequest**)Z_Param__Result=UGSDismissMessageRequest::SendDismissMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MessageId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDismissMessageRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDismissMessageRequest**)Z_Param__Result=UGSDismissMessageRequest::SendDismissMessageRequest(Z_Param_MessageId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendDismissMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDismissMessageRequest**)Z_Param__Result=UGSDismissMessageRequest::SendDismissMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MessageId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDismissMessageRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDismissMessageRequest**)Z_Param__Result=UGSDismissMessageRequest::SendDismissMessageRequest(Z_Param_MessageId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSDismissMessageRequest(); \
	friend struct Z_Construct_UClass_UGSDismissMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDismissMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDismissMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_INCLASS \
private: \
	static void StaticRegisterNativesUGSDismissMessageRequest(); \
	friend struct Z_Construct_UClass_UGSDismissMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDismissMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDismissMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDismissMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDismissMessageRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDismissMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDismissMessageRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDismissMessageRequest(UGSDismissMessageRequest&&); \
	NO_API UGSDismissMessageRequest(const UGSDismissMessageRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDismissMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDismissMessageRequest(UGSDismissMessageRequest&&); \
	NO_API UGSDismissMessageRequest(const UGSDismissMessageRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDismissMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDismissMessageRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDismissMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__messageId() { return STRUCT_OFFSET(UGSDismissMessageRequest, messageId); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSDismissMessageRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSDismissMessageRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSDismissMessageRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSDismissMessageRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1153_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1156_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSDismissMessageRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendDismissMultipleMessagesRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_MessageIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDismissMultipleMessagesRequest**)Z_Param__Result=UGSDismissMultipleMessagesRequest::SendDismissMultipleMessagesRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MessageIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDismissMultipleMessagesRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_MessageIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDismissMultipleMessagesRequest**)Z_Param__Result=UGSDismissMultipleMessagesRequest::SendDismissMultipleMessagesRequest(Z_Param_MessageIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendDismissMultipleMessagesRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_MessageIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDismissMultipleMessagesRequest**)Z_Param__Result=UGSDismissMultipleMessagesRequest::SendDismissMultipleMessagesRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MessageIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDismissMultipleMessagesRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_MessageIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDismissMultipleMessagesRequest**)Z_Param__Result=UGSDismissMultipleMessagesRequest::SendDismissMultipleMessagesRequest(Z_Param_MessageIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSDismissMultipleMessagesRequest(); \
	friend struct Z_Construct_UClass_UGSDismissMultipleMessagesRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDismissMultipleMessagesRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDismissMultipleMessagesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_INCLASS \
private: \
	static void StaticRegisterNativesUGSDismissMultipleMessagesRequest(); \
	friend struct Z_Construct_UClass_UGSDismissMultipleMessagesRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDismissMultipleMessagesRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDismissMultipleMessagesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDismissMultipleMessagesRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDismissMultipleMessagesRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDismissMultipleMessagesRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDismissMultipleMessagesRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDismissMultipleMessagesRequest(UGSDismissMultipleMessagesRequest&&); \
	NO_API UGSDismissMultipleMessagesRequest(const UGSDismissMultipleMessagesRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDismissMultipleMessagesRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDismissMultipleMessagesRequest(UGSDismissMultipleMessagesRequest&&); \
	NO_API UGSDismissMultipleMessagesRequest(const UGSDismissMultipleMessagesRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDismissMultipleMessagesRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDismissMultipleMessagesRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDismissMultipleMessagesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__messageIds() { return STRUCT_OFFSET(UGSDismissMultipleMessagesRequest, messageIds); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSDismissMultipleMessagesRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSDismissMultipleMessagesRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSDismissMultipleMessagesRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSDismissMultipleMessagesRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1205_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1208_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSDismissMultipleMessagesRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendDropTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDropTeamRequest**)Z_Param__Result=UGSDropTeamRequest::SendDropTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDropTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDropTeamRequest**)Z_Param__Result=UGSDropTeamRequest::SendDropTeamRequest(Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendDropTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDropTeamRequest**)Z_Param__Result=UGSDropTeamRequest::SendDropTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendDropTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSDropTeamRequest**)Z_Param__Result=UGSDropTeamRequest::SendDropTeamRequest(Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSDropTeamRequest(); \
	friend struct Z_Construct_UClass_UGSDropTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDropTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDropTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_INCLASS \
private: \
	static void StaticRegisterNativesUGSDropTeamRequest(); \
	friend struct Z_Construct_UClass_UGSDropTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSDropTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSDropTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDropTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDropTeamRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDropTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDropTeamRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDropTeamRequest(UGSDropTeamRequest&&); \
	NO_API UGSDropTeamRequest(const UGSDropTeamRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSDropTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSDropTeamRequest(UGSDropTeamRequest&&); \
	NO_API UGSDropTeamRequest(const UGSDropTeamRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSDropTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSDropTeamRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSDropTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ownerId() { return STRUCT_OFFSET(UGSDropTeamRequest, ownerId); } \
	FORCEINLINE static uint32 __PPO__teamId() { return STRUCT_OFFSET(UGSDropTeamRequest, teamId); } \
	FORCEINLINE static uint32 __PPO__teamType() { return STRUCT_OFFSET(UGSDropTeamRequest, teamType); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSDropTeamRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSDropTeamRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSDropTeamRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSDropTeamRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1257_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1260_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSDropTeamRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendEndSessionRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSEndSessionRequest**)Z_Param__Result=UGSEndSessionRequest::SendEndSessionRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendEndSessionRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSEndSessionRequest**)Z_Param__Result=UGSEndSessionRequest::SendEndSessionRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendEndSessionRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSEndSessionRequest**)Z_Param__Result=UGSEndSessionRequest::SendEndSessionRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendEndSessionRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSEndSessionRequest**)Z_Param__Result=UGSEndSessionRequest::SendEndSessionRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSEndSessionRequest(); \
	friend struct Z_Construct_UClass_UGSEndSessionRequest_Statics; \
public: \
	DECLARE_CLASS(UGSEndSessionRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSEndSessionRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_INCLASS \
private: \
	static void StaticRegisterNativesUGSEndSessionRequest(); \
	friend struct Z_Construct_UClass_UGSEndSessionRequest_Statics; \
public: \
	DECLARE_CLASS(UGSEndSessionRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSEndSessionRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSEndSessionRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSEndSessionRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSEndSessionRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSEndSessionRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSEndSessionRequest(UGSEndSessionRequest&&); \
	NO_API UGSEndSessionRequest(const UGSEndSessionRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSEndSessionRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSEndSessionRequest(UGSEndSessionRequest&&); \
	NO_API UGSEndSessionRequest(const UGSEndSessionRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSEndSessionRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSEndSessionRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSEndSessionRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSEndSessionRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSEndSessionRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSEndSessionRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSEndSessionRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1315_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1318_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSEndSessionRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendFacebookConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFacebookConnectRequest**)Z_Param__Result=UGSFacebookConnectRequest::SendFacebookConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_Code,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendFacebookConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFacebookConnectRequest**)Z_Param__Result=UGSFacebookConnectRequest::SendFacebookConnectRequest(Z_Param_AccessToken,Z_Param_Code,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendFacebookConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFacebookConnectRequest**)Z_Param__Result=UGSFacebookConnectRequest::SendFacebookConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_Code,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendFacebookConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFacebookConnectRequest**)Z_Param__Result=UGSFacebookConnectRequest::SendFacebookConnectRequest(Z_Param_AccessToken,Z_Param_Code,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSFacebookConnectRequest(); \
	friend struct Z_Construct_UClass_UGSFacebookConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSFacebookConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSFacebookConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_INCLASS \
private: \
	static void StaticRegisterNativesUGSFacebookConnectRequest(); \
	friend struct Z_Construct_UClass_UGSFacebookConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSFacebookConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSFacebookConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSFacebookConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSFacebookConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSFacebookConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSFacebookConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSFacebookConnectRequest(UGSFacebookConnectRequest&&); \
	NO_API UGSFacebookConnectRequest(const UGSFacebookConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSFacebookConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSFacebookConnectRequest(UGSFacebookConnectRequest&&); \
	NO_API UGSFacebookConnectRequest(const UGSFacebookConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSFacebookConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSFacebookConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSFacebookConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessToken() { return STRUCT_OFFSET(UGSFacebookConnectRequest, accessToken); } \
	FORCEINLINE static uint32 __PPO__code() { return STRUCT_OFFSET(UGSFacebookConnectRequest, code); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSFacebookConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSFacebookConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSFacebookConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSFacebookConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSFacebookConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSFacebookConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSFacebookConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSFacebookConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSFacebookConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSFacebookConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1368_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1371_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSFacebookConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendFindChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Eligibility); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindChallengeRequest**)Z_Param__Result=UGSFindChallengeRequest::SendFindChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessType,Z_Param_Count,Z_Param_Eligibility,Z_Param_Offset,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendFindChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Eligibility); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindChallengeRequest**)Z_Param__Result=UGSFindChallengeRequest::SendFindChallengeRequest(Z_Param_AccessType,Z_Param_Count,Z_Param_Eligibility,Z_Param_Offset,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendFindChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Eligibility); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindChallengeRequest**)Z_Param__Result=UGSFindChallengeRequest::SendFindChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessType,Z_Param_Count,Z_Param_Eligibility,Z_Param_Offset,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendFindChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessType); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Count); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Eligibility); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindChallengeRequest**)Z_Param__Result=UGSFindChallengeRequest::SendFindChallengeRequest(Z_Param_AccessType,Z_Param_Count,Z_Param_Eligibility,Z_Param_Offset,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSFindChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSFindChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSFindChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSFindChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_INCLASS \
private: \
	static void StaticRegisterNativesUGSFindChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSFindChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSFindChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSFindChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSFindChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSFindChallengeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSFindChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSFindChallengeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSFindChallengeRequest(UGSFindChallengeRequest&&); \
	NO_API UGSFindChallengeRequest(const UGSFindChallengeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSFindChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSFindChallengeRequest(UGSFindChallengeRequest&&); \
	NO_API UGSFindChallengeRequest(const UGSFindChallengeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSFindChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSFindChallengeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSFindChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessType() { return STRUCT_OFFSET(UGSFindChallengeRequest, accessType); } \
	FORCEINLINE static uint32 __PPO__count() { return STRUCT_OFFSET(UGSFindChallengeRequest, count); } \
	FORCEINLINE static uint32 __PPO__eligibility() { return STRUCT_OFFSET(UGSFindChallengeRequest, eligibility); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSFindChallengeRequest, offset); } \
	FORCEINLINE static uint32 __PPO__shortCode() { return STRUCT_OFFSET(UGSFindChallengeRequest, shortCode); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSFindChallengeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSFindChallengeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSFindChallengeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSFindChallengeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1465_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1468_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSFindChallengeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendFindMatchRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Action); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Skill); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindMatchRequest**)Z_Param__Result=UGSFindMatchRequest::SendFindMatchRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Action,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_Skill,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendFindMatchRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Action); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Skill); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindMatchRequest**)Z_Param__Result=UGSFindMatchRequest::SendFindMatchRequest(Z_Param_Action,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_Skill,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendFindMatchRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Action); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Skill); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindMatchRequest**)Z_Param__Result=UGSFindMatchRequest::SendFindMatchRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Action,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_Skill,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendFindMatchRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Action); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Skill); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindMatchRequest**)Z_Param__Result=UGSFindMatchRequest::SendFindMatchRequest(Z_Param_Action,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_Skill,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSFindMatchRequest(); \
	friend struct Z_Construct_UClass_UGSFindMatchRequest_Statics; \
public: \
	DECLARE_CLASS(UGSFindMatchRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSFindMatchRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_INCLASS \
private: \
	static void StaticRegisterNativesUGSFindMatchRequest(); \
	friend struct Z_Construct_UClass_UGSFindMatchRequest_Statics; \
public: \
	DECLARE_CLASS(UGSFindMatchRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSFindMatchRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSFindMatchRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSFindMatchRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSFindMatchRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSFindMatchRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSFindMatchRequest(UGSFindMatchRequest&&); \
	NO_API UGSFindMatchRequest(const UGSFindMatchRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSFindMatchRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSFindMatchRequest(UGSFindMatchRequest&&); \
	NO_API UGSFindMatchRequest(const UGSFindMatchRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSFindMatchRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSFindMatchRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSFindMatchRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__action() { return STRUCT_OFFSET(UGSFindMatchRequest, action); } \
	FORCEINLINE static uint32 __PPO__matchGroup() { return STRUCT_OFFSET(UGSFindMatchRequest, matchGroup); } \
	FORCEINLINE static uint32 __PPO__matchShortCode() { return STRUCT_OFFSET(UGSFindMatchRequest, matchShortCode); } \
	FORCEINLINE static uint32 __PPO__skill() { return STRUCT_OFFSET(UGSFindMatchRequest, skill); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSFindMatchRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSFindMatchRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSFindMatchRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSFindMatchRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1529_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1532_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSFindMatchRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendFindPendingMatchesRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxMatchesToFind); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindPendingMatchesRequest**)Z_Param__Result=UGSFindPendingMatchesRequest::SendFindPendingMatchesRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_MaxMatchesToFind,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendFindPendingMatchesRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxMatchesToFind); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindPendingMatchesRequest**)Z_Param__Result=UGSFindPendingMatchesRequest::SendFindPendingMatchesRequest(Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_MaxMatchesToFind,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendFindPendingMatchesRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxMatchesToFind); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindPendingMatchesRequest**)Z_Param__Result=UGSFindPendingMatchesRequest::SendFindPendingMatchesRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_MaxMatchesToFind,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendFindPendingMatchesRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_MaxMatchesToFind); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSFindPendingMatchesRequest**)Z_Param__Result=UGSFindPendingMatchesRequest::SendFindPendingMatchesRequest(Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_MaxMatchesToFind,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSFindPendingMatchesRequest(); \
	friend struct Z_Construct_UClass_UGSFindPendingMatchesRequest_Statics; \
public: \
	DECLARE_CLASS(UGSFindPendingMatchesRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSFindPendingMatchesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_INCLASS \
private: \
	static void StaticRegisterNativesUGSFindPendingMatchesRequest(); \
	friend struct Z_Construct_UClass_UGSFindPendingMatchesRequest_Statics; \
public: \
	DECLARE_CLASS(UGSFindPendingMatchesRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSFindPendingMatchesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSFindPendingMatchesRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSFindPendingMatchesRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSFindPendingMatchesRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSFindPendingMatchesRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSFindPendingMatchesRequest(UGSFindPendingMatchesRequest&&); \
	NO_API UGSFindPendingMatchesRequest(const UGSFindPendingMatchesRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSFindPendingMatchesRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSFindPendingMatchesRequest(UGSFindPendingMatchesRequest&&); \
	NO_API UGSFindPendingMatchesRequest(const UGSFindPendingMatchesRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSFindPendingMatchesRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSFindPendingMatchesRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSFindPendingMatchesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__matchGroup() { return STRUCT_OFFSET(UGSFindPendingMatchesRequest, matchGroup); } \
	FORCEINLINE static uint32 __PPO__matchShortCode() { return STRUCT_OFFSET(UGSFindPendingMatchesRequest, matchShortCode); } \
	FORCEINLINE static uint32 __PPO__maxMatchesToFind() { return STRUCT_OFFSET(UGSFindPendingMatchesRequest, maxMatchesToFind); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSFindPendingMatchesRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSFindPendingMatchesRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSFindPendingMatchesRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSFindPendingMatchesRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1602_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1605_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSFindPendingMatchesRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGameCenterConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExternalPlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PublicKeyUrl); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Salt); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Timestamp); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGameCenterConnectRequest**)Z_Param__Result=UGSGameCenterConnectRequest::SendGameCenterConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_ExternalPlayerId,Z_Param_PublicKeyUrl,Z_Param_Salt,Z_Param_Segments,Z_Param_Signature,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_Timestamp,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGameCenterConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExternalPlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PublicKeyUrl); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Salt); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Timestamp); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGameCenterConnectRequest**)Z_Param__Result=UGSGameCenterConnectRequest::SendGameCenterConnectRequest(Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_ExternalPlayerId,Z_Param_PublicKeyUrl,Z_Param_Salt,Z_Param_Segments,Z_Param_Signature,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_Timestamp,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGameCenterConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExternalPlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PublicKeyUrl); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Salt); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Timestamp); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGameCenterConnectRequest**)Z_Param__Result=UGSGameCenterConnectRequest::SendGameCenterConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_ExternalPlayerId,Z_Param_PublicKeyUrl,Z_Param_Salt,Z_Param_Segments,Z_Param_Signature,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_Timestamp,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGameCenterConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ExternalPlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PublicKeyUrl); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Salt); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Timestamp); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGameCenterConnectRequest**)Z_Param__Result=UGSGameCenterConnectRequest::SendGameCenterConnectRequest(Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_ExternalPlayerId,Z_Param_PublicKeyUrl,Z_Param_Salt,Z_Param_Segments,Z_Param_Signature,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_Timestamp,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGameCenterConnectRequest(); \
	friend struct Z_Construct_UClass_UGSGameCenterConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGameCenterConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGameCenterConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_INCLASS \
private: \
	static void StaticRegisterNativesUGSGameCenterConnectRequest(); \
	friend struct Z_Construct_UClass_UGSGameCenterConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGameCenterConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGameCenterConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGameCenterConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGameCenterConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGameCenterConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGameCenterConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGameCenterConnectRequest(UGSGameCenterConnectRequest&&); \
	NO_API UGSGameCenterConnectRequest(const UGSGameCenterConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGameCenterConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGameCenterConnectRequest(UGSGameCenterConnectRequest&&); \
	NO_API UGSGameCenterConnectRequest(const UGSGameCenterConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGameCenterConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGameCenterConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGameCenterConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__displayName() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, displayName); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__externalPlayerId() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, externalPlayerId); } \
	FORCEINLINE static uint32 __PPO__publicKeyUrl() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, publicKeyUrl); } \
	FORCEINLINE static uint32 __PPO__salt() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, salt); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__signature() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, signature); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__timestamp() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, timestamp); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGameCenterConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1668_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1671_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGameCenterConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetChallengeRequest**)Z_Param__Result=UGSGetChallengeRequest::SendGetChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetChallengeRequest**)Z_Param__Result=UGSGetChallengeRequest::SendGetChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetChallengeRequest**)Z_Param__Result=UGSGetChallengeRequest::SendGetChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetChallengeRequest**)Z_Param__Result=UGSGetChallengeRequest::SendGetChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSGetChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSGetChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetChallengeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetChallengeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetChallengeRequest(UGSGetChallengeRequest&&); \
	NO_API UGSGetChallengeRequest(const UGSGetChallengeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetChallengeRequest(UGSGetChallengeRequest&&); \
	NO_API UGSGetChallengeRequest(const UGSGetChallengeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetChallengeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSGetChallengeRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__message() { return STRUCT_OFFSET(UGSGetChallengeRequest, message); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetChallengeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetChallengeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetChallengeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetChallengeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1777_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1780_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetChallengeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetDownloadableRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetDownloadableRequest**)Z_Param__Result=UGSGetDownloadableRequest::SendGetDownloadableRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetDownloadableRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetDownloadableRequest**)Z_Param__Result=UGSGetDownloadableRequest::SendGetDownloadableRequest(Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetDownloadableRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetDownloadableRequest**)Z_Param__Result=UGSGetDownloadableRequest::SendGetDownloadableRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetDownloadableRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetDownloadableRequest**)Z_Param__Result=UGSGetDownloadableRequest::SendGetDownloadableRequest(Z_Param_ShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetDownloadableRequest(); \
	friend struct Z_Construct_UClass_UGSGetDownloadableRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetDownloadableRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetDownloadableRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetDownloadableRequest(); \
	friend struct Z_Construct_UClass_UGSGetDownloadableRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetDownloadableRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetDownloadableRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetDownloadableRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetDownloadableRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetDownloadableRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetDownloadableRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetDownloadableRequest(UGSGetDownloadableRequest&&); \
	NO_API UGSGetDownloadableRequest(const UGSGetDownloadableRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetDownloadableRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetDownloadableRequest(UGSGetDownloadableRequest&&); \
	NO_API UGSGetDownloadableRequest(const UGSGetDownloadableRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetDownloadableRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetDownloadableRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetDownloadableRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__shortCode() { return STRUCT_OFFSET(UGSGetDownloadableRequest, shortCode); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetDownloadableRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetDownloadableRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetDownloadableRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetDownloadableRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1832_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1835_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetDownloadableRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetLeaderboardEntriesRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Challenges); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Leaderboards); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetLeaderboardEntriesRequest**)Z_Param__Result=UGSGetLeaderboardEntriesRequest::SendGetLeaderboardEntriesRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Challenges,Z_Param_InverseSocial,Z_Param_Leaderboards,Z_Param_Player,Z_Param_Social,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetLeaderboardEntriesRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Challenges); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Leaderboards); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetLeaderboardEntriesRequest**)Z_Param__Result=UGSGetLeaderboardEntriesRequest::SendGetLeaderboardEntriesRequest(Z_Param_Challenges,Z_Param_InverseSocial,Z_Param_Leaderboards,Z_Param_Player,Z_Param_Social,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetLeaderboardEntriesRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Challenges); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Leaderboards); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetLeaderboardEntriesRequest**)Z_Param__Result=UGSGetLeaderboardEntriesRequest::SendGetLeaderboardEntriesRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Challenges,Z_Param_InverseSocial,Z_Param_Leaderboards,Z_Param_Player,Z_Param_Social,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetLeaderboardEntriesRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Challenges); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Leaderboards); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetLeaderboardEntriesRequest**)Z_Param__Result=UGSGetLeaderboardEntriesRequest::SendGetLeaderboardEntriesRequest(Z_Param_Challenges,Z_Param_InverseSocial,Z_Param_Leaderboards,Z_Param_Player,Z_Param_Social,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetLeaderboardEntriesRequest(); \
	friend struct Z_Construct_UClass_UGSGetLeaderboardEntriesRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetLeaderboardEntriesRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetLeaderboardEntriesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetLeaderboardEntriesRequest(); \
	friend struct Z_Construct_UClass_UGSGetLeaderboardEntriesRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetLeaderboardEntriesRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetLeaderboardEntriesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetLeaderboardEntriesRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetLeaderboardEntriesRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetLeaderboardEntriesRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetLeaderboardEntriesRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetLeaderboardEntriesRequest(UGSGetLeaderboardEntriesRequest&&); \
	NO_API UGSGetLeaderboardEntriesRequest(const UGSGetLeaderboardEntriesRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetLeaderboardEntriesRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetLeaderboardEntriesRequest(UGSGetLeaderboardEntriesRequest&&); \
	NO_API UGSGetLeaderboardEntriesRequest(const UGSGetLeaderboardEntriesRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetLeaderboardEntriesRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetLeaderboardEntriesRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetLeaderboardEntriesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challenges() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, challenges); } \
	FORCEINLINE static uint32 __PPO__inverseSocial() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, inverseSocial); } \
	FORCEINLINE static uint32 __PPO__leaderboards() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, leaderboards); } \
	FORCEINLINE static uint32 __PPO__player() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, player); } \
	FORCEINLINE static uint32 __PPO__social() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, social); } \
	FORCEINLINE static uint32 __PPO__teamTypes() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, teamTypes); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetLeaderboardEntriesRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1884_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1887_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetLeaderboardEntriesRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetMessageRequest**)Z_Param__Result=UGSGetMessageRequest::SendGetMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MessageId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetMessageRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetMessageRequest**)Z_Param__Result=UGSGetMessageRequest::SendGetMessageRequest(Z_Param_MessageId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetMessageRequest**)Z_Param__Result=UGSGetMessageRequest::SendGetMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MessageId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetMessageRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetMessageRequest**)Z_Param__Result=UGSGetMessageRequest::SendGetMessageRequest(Z_Param_MessageId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetMessageRequest(); \
	friend struct Z_Construct_UClass_UGSGetMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetMessageRequest(); \
	friend struct Z_Construct_UClass_UGSGetMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetMessageRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetMessageRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetMessageRequest(UGSGetMessageRequest&&); \
	NO_API UGSGetMessageRequest(const UGSGetMessageRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetMessageRequest(UGSGetMessageRequest&&); \
	NO_API UGSGetMessageRequest(const UGSGetMessageRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetMessageRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__messageId() { return STRUCT_OFFSET(UGSGetMessageRequest, messageId); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetMessageRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetMessageRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetMessageRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetMessageRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1955_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_1958_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetMessageRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetMyTeamsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_OwnedOnly); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetMyTeamsRequest**)Z_Param__Result=UGSGetMyTeamsRequest::SendGetMyTeamsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnedOnly,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetMyTeamsRequest) \
	{ \
		P_GET_UBOOL(Z_Param_OwnedOnly); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetMyTeamsRequest**)Z_Param__Result=UGSGetMyTeamsRequest::SendGetMyTeamsRequest(Z_Param_OwnedOnly,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetMyTeamsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_OwnedOnly); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetMyTeamsRequest**)Z_Param__Result=UGSGetMyTeamsRequest::SendGetMyTeamsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnedOnly,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetMyTeamsRequest) \
	{ \
		P_GET_UBOOL(Z_Param_OwnedOnly); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetMyTeamsRequest**)Z_Param__Result=UGSGetMyTeamsRequest::SendGetMyTeamsRequest(Z_Param_OwnedOnly,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetMyTeamsRequest(); \
	friend struct Z_Construct_UClass_UGSGetMyTeamsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetMyTeamsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetMyTeamsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetMyTeamsRequest(); \
	friend struct Z_Construct_UClass_UGSGetMyTeamsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetMyTeamsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetMyTeamsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetMyTeamsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetMyTeamsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetMyTeamsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetMyTeamsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetMyTeamsRequest(UGSGetMyTeamsRequest&&); \
	NO_API UGSGetMyTeamsRequest(const UGSGetMyTeamsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetMyTeamsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetMyTeamsRequest(UGSGetMyTeamsRequest&&); \
	NO_API UGSGetMyTeamsRequest(const UGSGetMyTeamsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetMyTeamsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetMyTeamsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetMyTeamsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ownedOnly() { return STRUCT_OFFSET(UGSGetMyTeamsRequest, ownedOnly); } \
	FORCEINLINE static uint32 __PPO__teamTypes() { return STRUCT_OFFSET(UGSGetMyTeamsRequest, teamTypes); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetMyTeamsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetMyTeamsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetMyTeamsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetMyTeamsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2007_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2010_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetMyTeamsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetPropertyRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PropertyShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetPropertyRequest**)Z_Param__Result=UGSGetPropertyRequest::SendGetPropertyRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_PropertyShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetPropertyRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PropertyShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetPropertyRequest**)Z_Param__Result=UGSGetPropertyRequest::SendGetPropertyRequest(Z_Param_PropertyShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetPropertyRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PropertyShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetPropertyRequest**)Z_Param__Result=UGSGetPropertyRequest::SendGetPropertyRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_PropertyShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetPropertyRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PropertyShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetPropertyRequest**)Z_Param__Result=UGSGetPropertyRequest::SendGetPropertyRequest(Z_Param_PropertyShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetPropertyRequest(); \
	friend struct Z_Construct_UClass_UGSGetPropertyRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetPropertyRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetPropertyRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetPropertyRequest(); \
	friend struct Z_Construct_UClass_UGSGetPropertyRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetPropertyRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetPropertyRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetPropertyRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetPropertyRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetPropertyRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetPropertyRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetPropertyRequest(UGSGetPropertyRequest&&); \
	NO_API UGSGetPropertyRequest(const UGSGetPropertyRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetPropertyRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetPropertyRequest(UGSGetPropertyRequest&&); \
	NO_API UGSGetPropertyRequest(const UGSGetPropertyRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetPropertyRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetPropertyRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetPropertyRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__propertyShortCode() { return STRUCT_OFFSET(UGSGetPropertyRequest, propertyShortCode); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetPropertyRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetPropertyRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetPropertyRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetPropertyRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2062_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2065_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetPropertyRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetPropertySetRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PropertySetShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetPropertySetRequest**)Z_Param__Result=UGSGetPropertySetRequest::SendGetPropertySetRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_PropertySetShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetPropertySetRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PropertySetShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetPropertySetRequest**)Z_Param__Result=UGSGetPropertySetRequest::SendGetPropertySetRequest(Z_Param_PropertySetShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetPropertySetRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PropertySetShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetPropertySetRequest**)Z_Param__Result=UGSGetPropertySetRequest::SendGetPropertySetRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_PropertySetShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetPropertySetRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PropertySetShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetPropertySetRequest**)Z_Param__Result=UGSGetPropertySetRequest::SendGetPropertySetRequest(Z_Param_PropertySetShortCode,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetPropertySetRequest(); \
	friend struct Z_Construct_UClass_UGSGetPropertySetRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetPropertySetRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetPropertySetRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetPropertySetRequest(); \
	friend struct Z_Construct_UClass_UGSGetPropertySetRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetPropertySetRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetPropertySetRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetPropertySetRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetPropertySetRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetPropertySetRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetPropertySetRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetPropertySetRequest(UGSGetPropertySetRequest&&); \
	NO_API UGSGetPropertySetRequest(const UGSGetPropertySetRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetPropertySetRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetPropertySetRequest(UGSGetPropertySetRequest&&); \
	NO_API UGSGetPropertySetRequest(const UGSGetPropertySetRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetPropertySetRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetPropertySetRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetPropertySetRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__propertySetShortCode() { return STRUCT_OFFSET(UGSGetPropertySetRequest, propertySetShortCode); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetPropertySetRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetPropertySetRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetPropertySetRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetPropertySetRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2114_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2117_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetPropertySetRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetTeamRequest**)Z_Param__Result=UGSGetTeamRequest::SendGetTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetTeamRequest**)Z_Param__Result=UGSGetTeamRequest::SendGetTeamRequest(Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetTeamRequest**)Z_Param__Result=UGSGetTeamRequest::SendGetTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetTeamRequest**)Z_Param__Result=UGSGetTeamRequest::SendGetTeamRequest(Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetTeamRequest(); \
	friend struct Z_Construct_UClass_UGSGetTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetTeamRequest(); \
	friend struct Z_Construct_UClass_UGSGetTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetTeamRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetTeamRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetTeamRequest(UGSGetTeamRequest&&); \
	NO_API UGSGetTeamRequest(const UGSGetTeamRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetTeamRequest(UGSGetTeamRequest&&); \
	NO_API UGSGetTeamRequest(const UGSGetTeamRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetTeamRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ownerId() { return STRUCT_OFFSET(UGSGetTeamRequest, ownerId); } \
	FORCEINLINE static uint32 __PPO__teamId() { return STRUCT_OFFSET(UGSGetTeamRequest, teamId); } \
	FORCEINLINE static uint32 __PPO__teamType() { return STRUCT_OFFSET(UGSGetTeamRequest, teamType); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetTeamRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetTeamRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetTeamRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetTeamRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2166_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2169_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetTeamRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetUploadUrlRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_UploadData); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetUploadUrlRequest**)Z_Param__Result=UGSGetUploadUrlRequest::SendGetUploadUrlRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_UploadData,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetUploadUrlRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_UploadData); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetUploadUrlRequest**)Z_Param__Result=UGSGetUploadUrlRequest::SendGetUploadUrlRequest(Z_Param_UploadData,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetUploadUrlRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_UploadData); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetUploadUrlRequest**)Z_Param__Result=UGSGetUploadUrlRequest::SendGetUploadUrlRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_UploadData,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetUploadUrlRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_UploadData); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetUploadUrlRequest**)Z_Param__Result=UGSGetUploadUrlRequest::SendGetUploadUrlRequest(Z_Param_UploadData,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetUploadUrlRequest(); \
	friend struct Z_Construct_UClass_UGSGetUploadUrlRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetUploadUrlRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetUploadUrlRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetUploadUrlRequest(); \
	friend struct Z_Construct_UClass_UGSGetUploadUrlRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetUploadUrlRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetUploadUrlRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetUploadUrlRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetUploadUrlRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetUploadUrlRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetUploadUrlRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetUploadUrlRequest(UGSGetUploadUrlRequest&&); \
	NO_API UGSGetUploadUrlRequest(const UGSGetUploadUrlRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetUploadUrlRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetUploadUrlRequest(UGSGetUploadUrlRequest&&); \
	NO_API UGSGetUploadUrlRequest(const UGSGetUploadUrlRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetUploadUrlRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetUploadUrlRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetUploadUrlRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__uploadData() { return STRUCT_OFFSET(UGSGetUploadUrlRequest, uploadData); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetUploadUrlRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetUploadUrlRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetUploadUrlRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetUploadUrlRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2224_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2227_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetUploadUrlRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGetUploadedRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UploadId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetUploadedRequest**)Z_Param__Result=UGSGetUploadedRequest::SendGetUploadedRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_UploadId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetUploadedRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UploadId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetUploadedRequest**)Z_Param__Result=UGSGetUploadedRequest::SendGetUploadedRequest(Z_Param_UploadId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGetUploadedRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UploadId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetUploadedRequest**)Z_Param__Result=UGSGetUploadedRequest::SendGetUploadedRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_UploadId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGetUploadedRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_UploadId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGetUploadedRequest**)Z_Param__Result=UGSGetUploadedRequest::SendGetUploadedRequest(Z_Param_UploadId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGetUploadedRequest(); \
	friend struct Z_Construct_UClass_UGSGetUploadedRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetUploadedRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetUploadedRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_INCLASS \
private: \
	static void StaticRegisterNativesUGSGetUploadedRequest(); \
	friend struct Z_Construct_UClass_UGSGetUploadedRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGetUploadedRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGetUploadedRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetUploadedRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetUploadedRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetUploadedRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetUploadedRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetUploadedRequest(UGSGetUploadedRequest&&); \
	NO_API UGSGetUploadedRequest(const UGSGetUploadedRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGetUploadedRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGetUploadedRequest(UGSGetUploadedRequest&&); \
	NO_API UGSGetUploadedRequest(const UGSGetUploadedRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGetUploadedRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGetUploadedRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGetUploadedRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__uploadId() { return STRUCT_OFFSET(UGSGetUploadedRequest, uploadId); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGetUploadedRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGetUploadedRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGetUploadedRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGetUploadedRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2276_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2279_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGetUploadedRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGooglePlayBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SignedData); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlayBuyGoodsRequest**)Z_Param__Result=UGSGooglePlayBuyGoodsRequest::SendGooglePlayBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyCode,Z_Param_Signature,Z_Param_SignedData,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGooglePlayBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SignedData); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlayBuyGoodsRequest**)Z_Param__Result=UGSGooglePlayBuyGoodsRequest::SendGooglePlayBuyGoodsRequest(Z_Param_CurrencyCode,Z_Param_Signature,Z_Param_SignedData,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGooglePlayBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SignedData); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlayBuyGoodsRequest**)Z_Param__Result=UGSGooglePlayBuyGoodsRequest::SendGooglePlayBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyCode,Z_Param_Signature,Z_Param_SignedData,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGooglePlayBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Signature); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SignedData); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlayBuyGoodsRequest**)Z_Param__Result=UGSGooglePlayBuyGoodsRequest::SendGooglePlayBuyGoodsRequest(Z_Param_CurrencyCode,Z_Param_Signature,Z_Param_SignedData,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGooglePlayBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSGooglePlayBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGooglePlayBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGooglePlayBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_INCLASS \
private: \
	static void StaticRegisterNativesUGSGooglePlayBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSGooglePlayBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGooglePlayBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGooglePlayBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGooglePlayBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGooglePlayBuyGoodsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGooglePlayBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGooglePlayBuyGoodsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGooglePlayBuyGoodsRequest(UGSGooglePlayBuyGoodsRequest&&); \
	NO_API UGSGooglePlayBuyGoodsRequest(const UGSGooglePlayBuyGoodsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGooglePlayBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGooglePlayBuyGoodsRequest(UGSGooglePlayBuyGoodsRequest&&); \
	NO_API UGSGooglePlayBuyGoodsRequest(const UGSGooglePlayBuyGoodsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGooglePlayBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGooglePlayBuyGoodsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGooglePlayBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__currencyCode() { return STRUCT_OFFSET(UGSGooglePlayBuyGoodsRequest, currencyCode); } \
	FORCEINLINE static uint32 __PPO__signature() { return STRUCT_OFFSET(UGSGooglePlayBuyGoodsRequest, signature); } \
	FORCEINLINE static uint32 __PPO__signedData() { return STRUCT_OFFSET(UGSGooglePlayBuyGoodsRequest, signedData); } \
	FORCEINLINE static uint32 __PPO__subUnitPrice() { return STRUCT_OFFSET(UGSGooglePlayBuyGoodsRequest, subUnitPrice); } \
	FORCEINLINE static uint32 __PPO__uniqueTransactionByPlayer() { return STRUCT_OFFSET(UGSGooglePlayBuyGoodsRequest, uniqueTransactionByPlayer); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGooglePlayBuyGoodsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGooglePlayBuyGoodsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGooglePlayBuyGoodsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGooglePlayBuyGoodsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2328_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2331_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGooglePlayBuyGoodsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGooglePlayConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_UBOOL(Z_Param_GooglePlusScope); \
		P_GET_UBOOL(Z_Param_ProfileScope); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlayConnectRequest**)Z_Param__Result=UGSGooglePlayConnectRequest::SendGooglePlayConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_Code,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_GooglePlusScope,Z_Param_ProfileScope,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGooglePlayConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_UBOOL(Z_Param_GooglePlusScope); \
		P_GET_UBOOL(Z_Param_ProfileScope); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlayConnectRequest**)Z_Param__Result=UGSGooglePlayConnectRequest::SendGooglePlayConnectRequest(Z_Param_AccessToken,Z_Param_Code,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_GooglePlusScope,Z_Param_ProfileScope,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGooglePlayConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_UBOOL(Z_Param_GooglePlusScope); \
		P_GET_UBOOL(Z_Param_ProfileScope); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlayConnectRequest**)Z_Param__Result=UGSGooglePlayConnectRequest::SendGooglePlayConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_Code,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_GooglePlusScope,Z_Param_ProfileScope,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGooglePlayConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_UBOOL(Z_Param_GooglePlusScope); \
		P_GET_UBOOL(Z_Param_ProfileScope); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlayConnectRequest**)Z_Param__Result=UGSGooglePlayConnectRequest::SendGooglePlayConnectRequest(Z_Param_AccessToken,Z_Param_Code,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_GooglePlusScope,Z_Param_ProfileScope,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGooglePlayConnectRequest(); \
	friend struct Z_Construct_UClass_UGSGooglePlayConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGooglePlayConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGooglePlayConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_INCLASS \
private: \
	static void StaticRegisterNativesUGSGooglePlayConnectRequest(); \
	friend struct Z_Construct_UClass_UGSGooglePlayConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGooglePlayConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGooglePlayConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGooglePlayConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGooglePlayConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGooglePlayConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGooglePlayConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGooglePlayConnectRequest(UGSGooglePlayConnectRequest&&); \
	NO_API UGSGooglePlayConnectRequest(const UGSGooglePlayConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGooglePlayConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGooglePlayConnectRequest(UGSGooglePlayConnectRequest&&); \
	NO_API UGSGooglePlayConnectRequest(const UGSGooglePlayConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGooglePlayConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGooglePlayConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGooglePlayConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessToken() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, accessToken); } \
	FORCEINLINE static uint32 __PPO__code() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, code); } \
	FORCEINLINE static uint32 __PPO__displayName() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, displayName); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__googlePlusScope() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, googlePlusScope); } \
	FORCEINLINE static uint32 __PPO__profileScope() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, profileScope); } \
	FORCEINLINE static uint32 __PPO__redirectUri() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, redirectUri); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGooglePlayConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2408_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2411_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGooglePlayConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendGooglePlusConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlusConnectRequest**)Z_Param__Result=UGSGooglePlusConnectRequest::SendGooglePlusConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_Code,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGooglePlusConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlusConnectRequest**)Z_Param__Result=UGSGooglePlusConnectRequest::SendGooglePlusConnectRequest(Z_Param_AccessToken,Z_Param_Code,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendGooglePlusConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlusConnectRequest**)Z_Param__Result=UGSGooglePlusConnectRequest::SendGooglePlusConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_Code,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendGooglePlusConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Code); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSGooglePlusConnectRequest**)Z_Param__Result=UGSGooglePlusConnectRequest::SendGooglePlusConnectRequest(Z_Param_AccessToken,Z_Param_Code,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSGooglePlusConnectRequest(); \
	friend struct Z_Construct_UClass_UGSGooglePlusConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGooglePlusConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGooglePlusConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_INCLASS \
private: \
	static void StaticRegisterNativesUGSGooglePlusConnectRequest(); \
	friend struct Z_Construct_UClass_UGSGooglePlusConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSGooglePlusConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSGooglePlusConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGooglePlusConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGooglePlusConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGooglePlusConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGooglePlusConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGooglePlusConnectRequest(UGSGooglePlusConnectRequest&&); \
	NO_API UGSGooglePlusConnectRequest(const UGSGooglePlusConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSGooglePlusConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSGooglePlusConnectRequest(UGSGooglePlusConnectRequest&&); \
	NO_API UGSGooglePlusConnectRequest(const UGSGooglePlusConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSGooglePlusConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSGooglePlusConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSGooglePlusConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessToken() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, accessToken); } \
	FORCEINLINE static uint32 __PPO__code() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, code); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__redirectUri() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, redirectUri); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSGooglePlusConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2517_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2520_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSGooglePlusConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendIOSBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_UBOOL(Z_Param_Sandbox); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSIOSBuyGoodsRequest**)Z_Param__Result=UGSIOSBuyGoodsRequest::SendIOSBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyCode,Z_Param_Receipt,Z_Param_Sandbox,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendIOSBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_UBOOL(Z_Param_Sandbox); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSIOSBuyGoodsRequest**)Z_Param__Result=UGSIOSBuyGoodsRequest::SendIOSBuyGoodsRequest(Z_Param_CurrencyCode,Z_Param_Receipt,Z_Param_Sandbox,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendIOSBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_UBOOL(Z_Param_Sandbox); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSIOSBuyGoodsRequest**)Z_Param__Result=UGSIOSBuyGoodsRequest::SendIOSBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyCode,Z_Param_Receipt,Z_Param_Sandbox,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendIOSBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_UBOOL(Z_Param_Sandbox); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSIOSBuyGoodsRequest**)Z_Param__Result=UGSIOSBuyGoodsRequest::SendIOSBuyGoodsRequest(Z_Param_CurrencyCode,Z_Param_Receipt,Z_Param_Sandbox,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSIOSBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSIOSBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSIOSBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSIOSBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_INCLASS \
private: \
	static void StaticRegisterNativesUGSIOSBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSIOSBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSIOSBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSIOSBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSIOSBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSIOSBuyGoodsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSIOSBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSIOSBuyGoodsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSIOSBuyGoodsRequest(UGSIOSBuyGoodsRequest&&); \
	NO_API UGSIOSBuyGoodsRequest(const UGSIOSBuyGoodsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSIOSBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSIOSBuyGoodsRequest(UGSIOSBuyGoodsRequest&&); \
	NO_API UGSIOSBuyGoodsRequest(const UGSIOSBuyGoodsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSIOSBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSIOSBuyGoodsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSIOSBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__currencyCode() { return STRUCT_OFFSET(UGSIOSBuyGoodsRequest, currencyCode); } \
	FORCEINLINE static uint32 __PPO__receipt() { return STRUCT_OFFSET(UGSIOSBuyGoodsRequest, receipt); } \
	FORCEINLINE static uint32 __PPO__sandbox() { return STRUCT_OFFSET(UGSIOSBuyGoodsRequest, sandbox); } \
	FORCEINLINE static uint32 __PPO__subUnitPrice() { return STRUCT_OFFSET(UGSIOSBuyGoodsRequest, subUnitPrice); } \
	FORCEINLINE static uint32 __PPO__uniqueTransactionByPlayer() { return STRUCT_OFFSET(UGSIOSBuyGoodsRequest, uniqueTransactionByPlayer); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSIOSBuyGoodsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSIOSBuyGoodsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSIOSBuyGoodsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSIOSBuyGoodsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2617_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2620_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSIOSBuyGoodsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendJoinChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Eligibility); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinChallengeRequest**)Z_Param__Result=UGSJoinChallengeRequest::SendJoinChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Eligibility,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendJoinChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Eligibility); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinChallengeRequest**)Z_Param__Result=UGSJoinChallengeRequest::SendJoinChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Eligibility,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendJoinChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Eligibility); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinChallengeRequest**)Z_Param__Result=UGSJoinChallengeRequest::SendJoinChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Eligibility,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendJoinChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Eligibility); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinChallengeRequest**)Z_Param__Result=UGSJoinChallengeRequest::SendJoinChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Eligibility,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSJoinChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSJoinChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSJoinChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSJoinChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_INCLASS \
private: \
	static void StaticRegisterNativesUGSJoinChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSJoinChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSJoinChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSJoinChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSJoinChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSJoinChallengeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSJoinChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSJoinChallengeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSJoinChallengeRequest(UGSJoinChallengeRequest&&); \
	NO_API UGSJoinChallengeRequest(const UGSJoinChallengeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSJoinChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSJoinChallengeRequest(UGSJoinChallengeRequest&&); \
	NO_API UGSJoinChallengeRequest(const UGSJoinChallengeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSJoinChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSJoinChallengeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSJoinChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSJoinChallengeRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__eligibility() { return STRUCT_OFFSET(UGSJoinChallengeRequest, eligibility); } \
	FORCEINLINE static uint32 __PPO__message() { return STRUCT_OFFSET(UGSJoinChallengeRequest, message); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSJoinChallengeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSJoinChallengeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSJoinChallengeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSJoinChallengeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2689_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2692_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSJoinChallengeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendJoinPendingMatchRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PendingMatchId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinPendingMatchRequest**)Z_Param__Result=UGSJoinPendingMatchRequest::SendJoinPendingMatchRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_PendingMatchId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendJoinPendingMatchRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PendingMatchId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinPendingMatchRequest**)Z_Param__Result=UGSJoinPendingMatchRequest::SendJoinPendingMatchRequest(Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_PendingMatchId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendJoinPendingMatchRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PendingMatchId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinPendingMatchRequest**)Z_Param__Result=UGSJoinPendingMatchRequest::SendJoinPendingMatchRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_PendingMatchId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendJoinPendingMatchRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PendingMatchId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinPendingMatchRequest**)Z_Param__Result=UGSJoinPendingMatchRequest::SendJoinPendingMatchRequest(Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_PendingMatchId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSJoinPendingMatchRequest(); \
	friend struct Z_Construct_UClass_UGSJoinPendingMatchRequest_Statics; \
public: \
	DECLARE_CLASS(UGSJoinPendingMatchRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSJoinPendingMatchRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_INCLASS \
private: \
	static void StaticRegisterNativesUGSJoinPendingMatchRequest(); \
	friend struct Z_Construct_UClass_UGSJoinPendingMatchRequest_Statics; \
public: \
	DECLARE_CLASS(UGSJoinPendingMatchRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSJoinPendingMatchRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSJoinPendingMatchRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSJoinPendingMatchRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSJoinPendingMatchRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSJoinPendingMatchRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSJoinPendingMatchRequest(UGSJoinPendingMatchRequest&&); \
	NO_API UGSJoinPendingMatchRequest(const UGSJoinPendingMatchRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSJoinPendingMatchRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSJoinPendingMatchRequest(UGSJoinPendingMatchRequest&&); \
	NO_API UGSJoinPendingMatchRequest(const UGSJoinPendingMatchRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSJoinPendingMatchRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSJoinPendingMatchRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSJoinPendingMatchRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__matchGroup() { return STRUCT_OFFSET(UGSJoinPendingMatchRequest, matchGroup); } \
	FORCEINLINE static uint32 __PPO__matchShortCode() { return STRUCT_OFFSET(UGSJoinPendingMatchRequest, matchShortCode); } \
	FORCEINLINE static uint32 __PPO__pendingMatchId() { return STRUCT_OFFSET(UGSJoinPendingMatchRequest, pendingMatchId); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSJoinPendingMatchRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSJoinPendingMatchRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSJoinPendingMatchRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSJoinPendingMatchRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2747_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2750_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSJoinPendingMatchRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendJoinTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinTeamRequest**)Z_Param__Result=UGSJoinTeamRequest::SendJoinTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendJoinTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinTeamRequest**)Z_Param__Result=UGSJoinTeamRequest::SendJoinTeamRequest(Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendJoinTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinTeamRequest**)Z_Param__Result=UGSJoinTeamRequest::SendJoinTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendJoinTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSJoinTeamRequest**)Z_Param__Result=UGSJoinTeamRequest::SendJoinTeamRequest(Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSJoinTeamRequest(); \
	friend struct Z_Construct_UClass_UGSJoinTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSJoinTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSJoinTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_INCLASS \
private: \
	static void StaticRegisterNativesUGSJoinTeamRequest(); \
	friend struct Z_Construct_UClass_UGSJoinTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSJoinTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSJoinTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSJoinTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSJoinTeamRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSJoinTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSJoinTeamRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSJoinTeamRequest(UGSJoinTeamRequest&&); \
	NO_API UGSJoinTeamRequest(const UGSJoinTeamRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSJoinTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSJoinTeamRequest(UGSJoinTeamRequest&&); \
	NO_API UGSJoinTeamRequest(const UGSJoinTeamRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSJoinTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSJoinTeamRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSJoinTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ownerId() { return STRUCT_OFFSET(UGSJoinTeamRequest, ownerId); } \
	FORCEINLINE static uint32 __PPO__teamId() { return STRUCT_OFFSET(UGSJoinTeamRequest, teamId); } \
	FORCEINLINE static uint32 __PPO__teamType() { return STRUCT_OFFSET(UGSJoinTeamRequest, teamType); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSJoinTeamRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSJoinTeamRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSJoinTeamRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSJoinTeamRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2805_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2808_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSJoinTeamRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendKongregateConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameAuthToken); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSKongregateConnectRequest**)Z_Param__Result=UGSKongregateConnectRequest::SendKongregateConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_GameAuthToken,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_UserId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendKongregateConnectRequest) \
	{ \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameAuthToken); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSKongregateConnectRequest**)Z_Param__Result=UGSKongregateConnectRequest::SendKongregateConnectRequest(Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_GameAuthToken,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_UserId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendKongregateConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameAuthToken); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSKongregateConnectRequest**)Z_Param__Result=UGSKongregateConnectRequest::SendKongregateConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_GameAuthToken,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_UserId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendKongregateConnectRequest) \
	{ \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_GameAuthToken); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSKongregateConnectRequest**)Z_Param__Result=UGSKongregateConnectRequest::SendKongregateConnectRequest(Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_GameAuthToken,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_UserId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSKongregateConnectRequest(); \
	friend struct Z_Construct_UClass_UGSKongregateConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSKongregateConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSKongregateConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_INCLASS \
private: \
	static void StaticRegisterNativesUGSKongregateConnectRequest(); \
	friend struct Z_Construct_UClass_UGSKongregateConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSKongregateConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSKongregateConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSKongregateConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSKongregateConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSKongregateConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSKongregateConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSKongregateConnectRequest(UGSKongregateConnectRequest&&); \
	NO_API UGSKongregateConnectRequest(const UGSKongregateConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSKongregateConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSKongregateConnectRequest(UGSKongregateConnectRequest&&); \
	NO_API UGSKongregateConnectRequest(const UGSKongregateConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSKongregateConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSKongregateConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSKongregateConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSKongregateConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSKongregateConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSKongregateConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__gameAuthToken() { return STRUCT_OFFSET(UGSKongregateConnectRequest, gameAuthToken); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSKongregateConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSKongregateConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSKongregateConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__userId() { return STRUCT_OFFSET(UGSKongregateConnectRequest, userId); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSKongregateConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSKongregateConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSKongregateConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSKongregateConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2863_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2866_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSKongregateConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendLeaderboardDataRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaderboardDataRequest**)Z_Param__Result=UGSLeaderboardDataRequest::SendLeaderboardDataRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Offset,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLeaderboardDataRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaderboardDataRequest**)Z_Param__Result=UGSLeaderboardDataRequest::SendLeaderboardDataRequest(Z_Param_ChallengeInstanceId,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Offset,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendLeaderboardDataRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaderboardDataRequest**)Z_Param__Result=UGSLeaderboardDataRequest::SendLeaderboardDataRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Offset,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLeaderboardDataRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaderboardDataRequest**)Z_Param__Result=UGSLeaderboardDataRequest::SendLeaderboardDataRequest(Z_Param_ChallengeInstanceId,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Offset,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSLeaderboardDataRequest(); \
	friend struct Z_Construct_UClass_UGSLeaderboardDataRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLeaderboardDataRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLeaderboardDataRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_INCLASS \
private: \
	static void StaticRegisterNativesUGSLeaderboardDataRequest(); \
	friend struct Z_Construct_UClass_UGSLeaderboardDataRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLeaderboardDataRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLeaderboardDataRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLeaderboardDataRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLeaderboardDataRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLeaderboardDataRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLeaderboardDataRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLeaderboardDataRequest(UGSLeaderboardDataRequest&&); \
	NO_API UGSLeaderboardDataRequest(const UGSLeaderboardDataRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLeaderboardDataRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLeaderboardDataRequest(UGSLeaderboardDataRequest&&); \
	NO_API UGSLeaderboardDataRequest(const UGSLeaderboardDataRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLeaderboardDataRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLeaderboardDataRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLeaderboardDataRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__dontErrorOnNotSocial() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, dontErrorOnNotSocial); } \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__friendIds() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, friendIds); } \
	FORCEINLINE static uint32 __PPO__includeFirst() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, includeFirst); } \
	FORCEINLINE static uint32 __PPO__includeLast() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, includeLast); } \
	FORCEINLINE static uint32 __PPO__inverseSocial() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, inverseSocial); } \
	FORCEINLINE static uint32 __PPO__leaderboardShortCode() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, leaderboardShortCode); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, offset); } \
	FORCEINLINE static uint32 __PPO__social() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, social); } \
	FORCEINLINE static uint32 __PPO__teamIds() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, teamIds); } \
	FORCEINLINE static uint32 __PPO__teamTypes() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, teamTypes); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSLeaderboardDataRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2956_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_2959_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSLeaderboardDataRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendLeaderboardsEntriesRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Challenges); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Leaderboards); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaderboardsEntriesRequest**)Z_Param__Result=UGSLeaderboardsEntriesRequest::SendLeaderboardsEntriesRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Challenges,Z_Param_InverseSocial,Z_Param_Leaderboards,Z_Param_Player,Z_Param_Social,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLeaderboardsEntriesRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Challenges); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Leaderboards); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaderboardsEntriesRequest**)Z_Param__Result=UGSLeaderboardsEntriesRequest::SendLeaderboardsEntriesRequest(Z_Param_Challenges,Z_Param_InverseSocial,Z_Param_Leaderboards,Z_Param_Player,Z_Param_Social,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendLeaderboardsEntriesRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Challenges); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Leaderboards); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaderboardsEntriesRequest**)Z_Param__Result=UGSLeaderboardsEntriesRequest::SendLeaderboardsEntriesRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Challenges,Z_Param_InverseSocial,Z_Param_Leaderboards,Z_Param_Player,Z_Param_Social,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLeaderboardsEntriesRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Challenges); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Leaderboards); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Player); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaderboardsEntriesRequest**)Z_Param__Result=UGSLeaderboardsEntriesRequest::SendLeaderboardsEntriesRequest(Z_Param_Challenges,Z_Param_InverseSocial,Z_Param_Leaderboards,Z_Param_Player,Z_Param_Social,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSLeaderboardsEntriesRequest(); \
	friend struct Z_Construct_UClass_UGSLeaderboardsEntriesRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLeaderboardsEntriesRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLeaderboardsEntriesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_INCLASS \
private: \
	static void StaticRegisterNativesUGSLeaderboardsEntriesRequest(); \
	friend struct Z_Construct_UClass_UGSLeaderboardsEntriesRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLeaderboardsEntriesRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLeaderboardsEntriesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLeaderboardsEntriesRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLeaderboardsEntriesRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLeaderboardsEntriesRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLeaderboardsEntriesRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLeaderboardsEntriesRequest(UGSLeaderboardsEntriesRequest&&); \
	NO_API UGSLeaderboardsEntriesRequest(const UGSLeaderboardsEntriesRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLeaderboardsEntriesRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLeaderboardsEntriesRequest(UGSLeaderboardsEntriesRequest&&); \
	NO_API UGSLeaderboardsEntriesRequest(const UGSLeaderboardsEntriesRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLeaderboardsEntriesRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLeaderboardsEntriesRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLeaderboardsEntriesRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challenges() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, challenges); } \
	FORCEINLINE static uint32 __PPO__inverseSocial() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, inverseSocial); } \
	FORCEINLINE static uint32 __PPO__leaderboards() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, leaderboards); } \
	FORCEINLINE static uint32 __PPO__player() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, player); } \
	FORCEINLINE static uint32 __PPO__social() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, social); } \
	FORCEINLINE static uint32 __PPO__teamTypes() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, teamTypes); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSLeaderboardsEntriesRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3049_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3052_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSLeaderboardsEntriesRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendLeaveTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaveTeamRequest**)Z_Param__Result=UGSLeaveTeamRequest::SendLeaveTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLeaveTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaveTeamRequest**)Z_Param__Result=UGSLeaveTeamRequest::SendLeaveTeamRequest(Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendLeaveTeamRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaveTeamRequest**)Z_Param__Result=UGSLeaveTeamRequest::SendLeaveTeamRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLeaveTeamRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLeaveTeamRequest**)Z_Param__Result=UGSLeaveTeamRequest::SendLeaveTeamRequest(Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSLeaveTeamRequest(); \
	friend struct Z_Construct_UClass_UGSLeaveTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLeaveTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLeaveTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_INCLASS \
private: \
	static void StaticRegisterNativesUGSLeaveTeamRequest(); \
	friend struct Z_Construct_UClass_UGSLeaveTeamRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLeaveTeamRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLeaveTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLeaveTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLeaveTeamRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLeaveTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLeaveTeamRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLeaveTeamRequest(UGSLeaveTeamRequest&&); \
	NO_API UGSLeaveTeamRequest(const UGSLeaveTeamRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLeaveTeamRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLeaveTeamRequest(UGSLeaveTeamRequest&&); \
	NO_API UGSLeaveTeamRequest(const UGSLeaveTeamRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLeaveTeamRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLeaveTeamRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLeaveTeamRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ownerId() { return STRUCT_OFFSET(UGSLeaveTeamRequest, ownerId); } \
	FORCEINLINE static uint32 __PPO__teamId() { return STRUCT_OFFSET(UGSLeaveTeamRequest, teamId); } \
	FORCEINLINE static uint32 __PPO__teamType() { return STRUCT_OFFSET(UGSLeaveTeamRequest, teamType); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSLeaveTeamRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSLeaveTeamRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSLeaveTeamRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSLeaveTeamRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3120_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3123_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSLeaveTeamRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListAchievementsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListAchievementsRequest**)Z_Param__Result=UGSListAchievementsRequest::SendListAchievementsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListAchievementsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListAchievementsRequest**)Z_Param__Result=UGSListAchievementsRequest::SendListAchievementsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListAchievementsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListAchievementsRequest**)Z_Param__Result=UGSListAchievementsRequest::SendListAchievementsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListAchievementsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListAchievementsRequest**)Z_Param__Result=UGSListAchievementsRequest::SendListAchievementsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListAchievementsRequest(); \
	friend struct Z_Construct_UClass_UGSListAchievementsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListAchievementsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListAchievementsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_INCLASS \
private: \
	static void StaticRegisterNativesUGSListAchievementsRequest(); \
	friend struct Z_Construct_UClass_UGSListAchievementsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListAchievementsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListAchievementsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListAchievementsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListAchievementsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListAchievementsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListAchievementsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListAchievementsRequest(UGSListAchievementsRequest&&); \
	NO_API UGSListAchievementsRequest(const UGSListAchievementsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListAchievementsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListAchievementsRequest(UGSListAchievementsRequest&&); \
	NO_API UGSListAchievementsRequest(const UGSListAchievementsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListAchievementsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListAchievementsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListAchievementsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListAchievementsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListAchievementsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListAchievementsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListAchievementsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3178_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3181_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListAchievementsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListBulkJobsAdminRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_BulkJobIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListBulkJobsAdminRequest**)Z_Param__Result=UGSListBulkJobsAdminRequest::SendListBulkJobsAdminRequest(Z_Param_BulkJobIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListBulkJobsAdminRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_BulkJobIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListBulkJobsAdminRequest**)Z_Param__Result=UGSListBulkJobsAdminRequest::SendListBulkJobsAdminRequest(Z_Param_BulkJobIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListBulkJobsAdminRequest(); \
	friend struct Z_Construct_UClass_UGSListBulkJobsAdminRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListBulkJobsAdminRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListBulkJobsAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_INCLASS \
private: \
	static void StaticRegisterNativesUGSListBulkJobsAdminRequest(); \
	friend struct Z_Construct_UClass_UGSListBulkJobsAdminRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListBulkJobsAdminRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListBulkJobsAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListBulkJobsAdminRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListBulkJobsAdminRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListBulkJobsAdminRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListBulkJobsAdminRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListBulkJobsAdminRequest(UGSListBulkJobsAdminRequest&&); \
	NO_API UGSListBulkJobsAdminRequest(const UGSListBulkJobsAdminRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListBulkJobsAdminRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListBulkJobsAdminRequest(UGSListBulkJobsAdminRequest&&); \
	NO_API UGSListBulkJobsAdminRequest(const UGSListBulkJobsAdminRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListBulkJobsAdminRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListBulkJobsAdminRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListBulkJobsAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bulkJobIds() { return STRUCT_OFFSET(UGSListBulkJobsAdminRequest, bulkJobIds); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListBulkJobsAdminRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListBulkJobsAdminRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListBulkJobsAdminRequest, requestTimeoutSeconds); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3227_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3230_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListBulkJobsAdminRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_State); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_States); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListChallengeRequest**)Z_Param__Result=UGSListChallengeRequest::SendListChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Offset,Z_Param_ShortCode,Z_Param_State,Z_Param_States,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListChallengeRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_State); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_States); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListChallengeRequest**)Z_Param__Result=UGSListChallengeRequest::SendListChallengeRequest(Z_Param_EntryCount,Z_Param_Offset,Z_Param_ShortCode,Z_Param_State,Z_Param_States,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_State); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_States); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListChallengeRequest**)Z_Param__Result=UGSListChallengeRequest::SendListChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Offset,Z_Param_ShortCode,Z_Param_State,Z_Param_States,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListChallengeRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ShortCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_State); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_States); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListChallengeRequest**)Z_Param__Result=UGSListChallengeRequest::SendListChallengeRequest(Z_Param_EntryCount,Z_Param_Offset,Z_Param_ShortCode,Z_Param_State,Z_Param_States,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSListChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_INCLASS \
private: \
	static void StaticRegisterNativesUGSListChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSListChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListChallengeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListChallengeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListChallengeRequest(UGSListChallengeRequest&&); \
	NO_API UGSListChallengeRequest(const UGSListChallengeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListChallengeRequest(UGSListChallengeRequest&&); \
	NO_API UGSListChallengeRequest(const UGSListChallengeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListChallengeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSListChallengeRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSListChallengeRequest, offset); } \
	FORCEINLINE static uint32 __PPO__shortCode() { return STRUCT_OFFSET(UGSListChallengeRequest, shortCode); } \
	FORCEINLINE static uint32 __PPO__state() { return STRUCT_OFFSET(UGSListChallengeRequest, state); } \
	FORCEINLINE static uint32 __PPO__states() { return STRUCT_OFFSET(UGSListChallengeRequest, states); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListChallengeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListChallengeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListChallengeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListChallengeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3270_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3273_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListChallengeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListChallengeTypeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListChallengeTypeRequest**)Z_Param__Result=UGSListChallengeTypeRequest::SendListChallengeTypeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListChallengeTypeRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListChallengeTypeRequest**)Z_Param__Result=UGSListChallengeTypeRequest::SendListChallengeTypeRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListChallengeTypeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListChallengeTypeRequest**)Z_Param__Result=UGSListChallengeTypeRequest::SendListChallengeTypeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListChallengeTypeRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListChallengeTypeRequest**)Z_Param__Result=UGSListChallengeTypeRequest::SendListChallengeTypeRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListChallengeTypeRequest(); \
	friend struct Z_Construct_UClass_UGSListChallengeTypeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListChallengeTypeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListChallengeTypeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_INCLASS \
private: \
	static void StaticRegisterNativesUGSListChallengeTypeRequest(); \
	friend struct Z_Construct_UClass_UGSListChallengeTypeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListChallengeTypeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListChallengeTypeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListChallengeTypeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListChallengeTypeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListChallengeTypeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListChallengeTypeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListChallengeTypeRequest(UGSListChallengeTypeRequest&&); \
	NO_API UGSListChallengeTypeRequest(const UGSListChallengeTypeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListChallengeTypeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListChallengeTypeRequest(UGSListChallengeTypeRequest&&); \
	NO_API UGSListChallengeTypeRequest(const UGSListChallengeTypeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListChallengeTypeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListChallengeTypeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListChallengeTypeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListChallengeTypeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListChallengeTypeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListChallengeTypeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListChallengeTypeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3366_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3369_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListChallengeTypeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListGameFriendsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListGameFriendsRequest**)Z_Param__Result=UGSListGameFriendsRequest::SendListGameFriendsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListGameFriendsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListGameFriendsRequest**)Z_Param__Result=UGSListGameFriendsRequest::SendListGameFriendsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListGameFriendsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListGameFriendsRequest**)Z_Param__Result=UGSListGameFriendsRequest::SendListGameFriendsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListGameFriendsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListGameFriendsRequest**)Z_Param__Result=UGSListGameFriendsRequest::SendListGameFriendsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListGameFriendsRequest(); \
	friend struct Z_Construct_UClass_UGSListGameFriendsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListGameFriendsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListGameFriendsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_INCLASS \
private: \
	static void StaticRegisterNativesUGSListGameFriendsRequest(); \
	friend struct Z_Construct_UClass_UGSListGameFriendsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListGameFriendsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListGameFriendsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListGameFriendsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListGameFriendsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListGameFriendsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListGameFriendsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListGameFriendsRequest(UGSListGameFriendsRequest&&); \
	NO_API UGSListGameFriendsRequest(const UGSListGameFriendsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListGameFriendsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListGameFriendsRequest(UGSListGameFriendsRequest&&); \
	NO_API UGSListGameFriendsRequest(const UGSListGameFriendsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListGameFriendsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListGameFriendsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListGameFriendsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListGameFriendsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListGameFriendsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListGameFriendsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListGameFriendsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3415_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3418_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListGameFriendsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListInviteFriendsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListInviteFriendsRequest**)Z_Param__Result=UGSListInviteFriendsRequest::SendListInviteFriendsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListInviteFriendsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListInviteFriendsRequest**)Z_Param__Result=UGSListInviteFriendsRequest::SendListInviteFriendsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListInviteFriendsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListInviteFriendsRequest**)Z_Param__Result=UGSListInviteFriendsRequest::SendListInviteFriendsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListInviteFriendsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListInviteFriendsRequest**)Z_Param__Result=UGSListInviteFriendsRequest::SendListInviteFriendsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListInviteFriendsRequest(); \
	friend struct Z_Construct_UClass_UGSListInviteFriendsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListInviteFriendsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListInviteFriendsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_INCLASS \
private: \
	static void StaticRegisterNativesUGSListInviteFriendsRequest(); \
	friend struct Z_Construct_UClass_UGSListInviteFriendsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListInviteFriendsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListInviteFriendsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListInviteFriendsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListInviteFriendsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListInviteFriendsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListInviteFriendsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListInviteFriendsRequest(UGSListInviteFriendsRequest&&); \
	NO_API UGSListInviteFriendsRequest(const UGSListInviteFriendsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListInviteFriendsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListInviteFriendsRequest(UGSListInviteFriendsRequest&&); \
	NO_API UGSListInviteFriendsRequest(const UGSListInviteFriendsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListInviteFriendsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListInviteFriendsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListInviteFriendsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListInviteFriendsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListInviteFriendsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListInviteFriendsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListInviteFriendsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3472_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3475_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListInviteFriendsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListLeaderboardsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListLeaderboardsRequest**)Z_Param__Result=UGSListLeaderboardsRequest::SendListLeaderboardsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListLeaderboardsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListLeaderboardsRequest**)Z_Param__Result=UGSListLeaderboardsRequest::SendListLeaderboardsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListLeaderboardsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListLeaderboardsRequest**)Z_Param__Result=UGSListLeaderboardsRequest::SendListLeaderboardsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListLeaderboardsRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListLeaderboardsRequest**)Z_Param__Result=UGSListLeaderboardsRequest::SendListLeaderboardsRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListLeaderboardsRequest(); \
	friend struct Z_Construct_UClass_UGSListLeaderboardsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListLeaderboardsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListLeaderboardsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_INCLASS \
private: \
	static void StaticRegisterNativesUGSListLeaderboardsRequest(); \
	friend struct Z_Construct_UClass_UGSListLeaderboardsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListLeaderboardsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListLeaderboardsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListLeaderboardsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListLeaderboardsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListLeaderboardsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListLeaderboardsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListLeaderboardsRequest(UGSListLeaderboardsRequest&&); \
	NO_API UGSListLeaderboardsRequest(const UGSListLeaderboardsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListLeaderboardsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListLeaderboardsRequest(UGSListLeaderboardsRequest&&); \
	NO_API UGSListLeaderboardsRequest(const UGSListLeaderboardsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListLeaderboardsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListLeaderboardsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListLeaderboardsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListLeaderboardsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListLeaderboardsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListLeaderboardsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListLeaderboardsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3529_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3532_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListLeaderboardsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListMessageDetailRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Status); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageDetailRequest**)Z_Param__Result=UGSListMessageDetailRequest::SendListMessageDetailRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_Status,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListMessageDetailRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Status); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageDetailRequest**)Z_Param__Result=UGSListMessageDetailRequest::SendListMessageDetailRequest(Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_Status,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListMessageDetailRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Status); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageDetailRequest**)Z_Param__Result=UGSListMessageDetailRequest::SendListMessageDetailRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_Status,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListMessageDetailRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Status); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageDetailRequest**)Z_Param__Result=UGSListMessageDetailRequest::SendListMessageDetailRequest(Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_Status,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListMessageDetailRequest(); \
	friend struct Z_Construct_UClass_UGSListMessageDetailRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListMessageDetailRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListMessageDetailRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_INCLASS \
private: \
	static void StaticRegisterNativesUGSListMessageDetailRequest(); \
	friend struct Z_Construct_UClass_UGSListMessageDetailRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListMessageDetailRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListMessageDetailRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListMessageDetailRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListMessageDetailRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListMessageDetailRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListMessageDetailRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListMessageDetailRequest(UGSListMessageDetailRequest&&); \
	NO_API UGSListMessageDetailRequest(const UGSListMessageDetailRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListMessageDetailRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListMessageDetailRequest(UGSListMessageDetailRequest&&); \
	NO_API UGSListMessageDetailRequest(const UGSListMessageDetailRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListMessageDetailRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListMessageDetailRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListMessageDetailRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSListMessageDetailRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__include() { return STRUCT_OFFSET(UGSListMessageDetailRequest, include); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSListMessageDetailRequest, offset); } \
	FORCEINLINE static uint32 __PPO__status() { return STRUCT_OFFSET(UGSListMessageDetailRequest, status); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListMessageDetailRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListMessageDetailRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListMessageDetailRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListMessageDetailRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3578_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3581_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListMessageDetailRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageRequest**)Z_Param__Result=UGSListMessageRequest::SendListMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListMessageRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageRequest**)Z_Param__Result=UGSListMessageRequest::SendListMessageRequest(Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageRequest**)Z_Param__Result=UGSListMessageRequest::SendListMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListMessageRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageRequest**)Z_Param__Result=UGSListMessageRequest::SendListMessageRequest(Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListMessageRequest(); \
	friend struct Z_Construct_UClass_UGSListMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_INCLASS \
private: \
	static void StaticRegisterNativesUGSListMessageRequest(); \
	friend struct Z_Construct_UClass_UGSListMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListMessageRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListMessageRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListMessageRequest(UGSListMessageRequest&&); \
	NO_API UGSListMessageRequest(const UGSListMessageRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListMessageRequest(UGSListMessageRequest&&); \
	NO_API UGSListMessageRequest(const UGSListMessageRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListMessageRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSListMessageRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__include() { return STRUCT_OFFSET(UGSListMessageRequest, include); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSListMessageRequest, offset); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListMessageRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListMessageRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListMessageRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListMessageRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3643_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3646_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListMessageRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListMessageSummaryRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageSummaryRequest**)Z_Param__Result=UGSListMessageSummaryRequest::SendListMessageSummaryRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListMessageSummaryRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageSummaryRequest**)Z_Param__Result=UGSListMessageSummaryRequest::SendListMessageSummaryRequest(Z_Param_EntryCount,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListMessageSummaryRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageSummaryRequest**)Z_Param__Result=UGSListMessageSummaryRequest::SendListMessageSummaryRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListMessageSummaryRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListMessageSummaryRequest**)Z_Param__Result=UGSListMessageSummaryRequest::SendListMessageSummaryRequest(Z_Param_EntryCount,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListMessageSummaryRequest(); \
	friend struct Z_Construct_UClass_UGSListMessageSummaryRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListMessageSummaryRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListMessageSummaryRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_INCLASS \
private: \
	static void StaticRegisterNativesUGSListMessageSummaryRequest(); \
	friend struct Z_Construct_UClass_UGSListMessageSummaryRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListMessageSummaryRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListMessageSummaryRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListMessageSummaryRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListMessageSummaryRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListMessageSummaryRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListMessageSummaryRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListMessageSummaryRequest(UGSListMessageSummaryRequest&&); \
	NO_API UGSListMessageSummaryRequest(const UGSListMessageSummaryRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListMessageSummaryRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListMessageSummaryRequest(UGSListMessageSummaryRequest&&); \
	NO_API UGSListMessageSummaryRequest(const UGSListMessageSummaryRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListMessageSummaryRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListMessageSummaryRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListMessageSummaryRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSListMessageSummaryRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSListMessageSummaryRequest, offset); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListMessageSummaryRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListMessageSummaryRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListMessageSummaryRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListMessageSummaryRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3705_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3708_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListMessageSummaryRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListTeamChatRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTeamChatRequest**)Z_Param__Result=UGSListTeamChatRequest::SendListTeamChatRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Offset,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListTeamChatRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTeamChatRequest**)Z_Param__Result=UGSListTeamChatRequest::SendListTeamChatRequest(Z_Param_EntryCount,Z_Param_Offset,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListTeamChatRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTeamChatRequest**)Z_Param__Result=UGSListTeamChatRequest::SendListTeamChatRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Offset,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListTeamChatRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTeamChatRequest**)Z_Param__Result=UGSListTeamChatRequest::SendListTeamChatRequest(Z_Param_EntryCount,Z_Param_Offset,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListTeamChatRequest(); \
	friend struct Z_Construct_UClass_UGSListTeamChatRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListTeamChatRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListTeamChatRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_INCLASS \
private: \
	static void StaticRegisterNativesUGSListTeamChatRequest(); \
	friend struct Z_Construct_UClass_UGSListTeamChatRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListTeamChatRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListTeamChatRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListTeamChatRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListTeamChatRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListTeamChatRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListTeamChatRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListTeamChatRequest(UGSListTeamChatRequest&&); \
	NO_API UGSListTeamChatRequest(const UGSListTeamChatRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListTeamChatRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListTeamChatRequest(UGSListTeamChatRequest&&); \
	NO_API UGSListTeamChatRequest(const UGSListTeamChatRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListTeamChatRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListTeamChatRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListTeamChatRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSListTeamChatRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSListTeamChatRequest, offset); } \
	FORCEINLINE static uint32 __PPO__ownerId() { return STRUCT_OFFSET(UGSListTeamChatRequest, ownerId); } \
	FORCEINLINE static uint32 __PPO__teamId() { return STRUCT_OFFSET(UGSListTeamChatRequest, teamId); } \
	FORCEINLINE static uint32 __PPO__teamType() { return STRUCT_OFFSET(UGSListTeamChatRequest, teamType); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListTeamChatRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListTeamChatRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListTeamChatRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListTeamChatRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3768_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3771_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListTeamChatRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListTeamsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamNameFilter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamTypeFilter); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTeamsRequest**)Z_Param__Result=UGSListTeamsRequest::SendListTeamsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Offset,Z_Param_TeamNameFilter,Z_Param_TeamTypeFilter,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListTeamsRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamNameFilter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamTypeFilter); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTeamsRequest**)Z_Param__Result=UGSListTeamsRequest::SendListTeamsRequest(Z_Param_EntryCount,Z_Param_Offset,Z_Param_TeamNameFilter,Z_Param_TeamTypeFilter,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListTeamsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamNameFilter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamTypeFilter); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTeamsRequest**)Z_Param__Result=UGSListTeamsRequest::SendListTeamsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EntryCount,Z_Param_Offset,Z_Param_TeamNameFilter,Z_Param_TeamTypeFilter,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListTeamsRequest) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamNameFilter); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamTypeFilter); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTeamsRequest**)Z_Param__Result=UGSListTeamsRequest::SendListTeamsRequest(Z_Param_EntryCount,Z_Param_Offset,Z_Param_TeamNameFilter,Z_Param_TeamTypeFilter,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListTeamsRequest(); \
	friend struct Z_Construct_UClass_UGSListTeamsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListTeamsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListTeamsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_INCLASS \
private: \
	static void StaticRegisterNativesUGSListTeamsRequest(); \
	friend struct Z_Construct_UClass_UGSListTeamsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListTeamsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListTeamsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListTeamsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListTeamsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListTeamsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListTeamsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListTeamsRequest(UGSListTeamsRequest&&); \
	NO_API UGSListTeamsRequest(const UGSListTeamsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListTeamsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListTeamsRequest(UGSListTeamsRequest&&); \
	NO_API UGSListTeamsRequest(const UGSListTeamsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListTeamsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListTeamsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListTeamsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSListTeamsRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSListTeamsRequest, offset); } \
	FORCEINLINE static uint32 __PPO__teamNameFilter() { return STRUCT_OFFSET(UGSListTeamsRequest, teamNameFilter); } \
	FORCEINLINE static uint32 __PPO__teamTypeFilter() { return STRUCT_OFFSET(UGSListTeamsRequest, teamTypeFilter); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListTeamsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListTeamsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListTeamsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListTeamsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3832_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3835_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListTeamsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListTransactionsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateFrom); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateTo); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTransactionsRequest**)Z_Param__Result=UGSListTransactionsRequest::SendListTransactionsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DateFrom,Z_Param_DateTo,Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListTransactionsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateFrom); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateTo); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTransactionsRequest**)Z_Param__Result=UGSListTransactionsRequest::SendListTransactionsRequest(Z_Param_DateFrom,Z_Param_DateTo,Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListTransactionsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateFrom); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateTo); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTransactionsRequest**)Z_Param__Result=UGSListTransactionsRequest::SendListTransactionsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DateFrom,Z_Param_DateTo,Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListTransactionsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateFrom); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DateTo); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Include); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListTransactionsRequest**)Z_Param__Result=UGSListTransactionsRequest::SendListTransactionsRequest(Z_Param_DateFrom,Z_Param_DateTo,Z_Param_EntryCount,Z_Param_Include,Z_Param_Offset,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListTransactionsRequest(); \
	friend struct Z_Construct_UClass_UGSListTransactionsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListTransactionsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListTransactionsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_INCLASS \
private: \
	static void StaticRegisterNativesUGSListTransactionsRequest(); \
	friend struct Z_Construct_UClass_UGSListTransactionsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListTransactionsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListTransactionsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListTransactionsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListTransactionsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListTransactionsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListTransactionsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListTransactionsRequest(UGSListTransactionsRequest&&); \
	NO_API UGSListTransactionsRequest(const UGSListTransactionsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListTransactionsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListTransactionsRequest(UGSListTransactionsRequest&&); \
	NO_API UGSListTransactionsRequest(const UGSListTransactionsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListTransactionsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListTransactionsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListTransactionsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__dateFrom() { return STRUCT_OFFSET(UGSListTransactionsRequest, dateFrom); } \
	FORCEINLINE static uint32 __PPO__dateTo() { return STRUCT_OFFSET(UGSListTransactionsRequest, dateTo); } \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSListTransactionsRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__include() { return STRUCT_OFFSET(UGSListTransactionsRequest, include); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSListTransactionsRequest, offset); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListTransactionsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListTransactionsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListTransactionsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListTransactionsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3893_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3896_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListTransactionsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendListVirtualGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_IncludeDisabled); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Tags); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListVirtualGoodsRequest**)Z_Param__Result=UGSListVirtualGoodsRequest::SendListVirtualGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_IncludeDisabled,Z_Param_Tags,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListVirtualGoodsRequest) \
	{ \
		P_GET_UBOOL(Z_Param_IncludeDisabled); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Tags); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListVirtualGoodsRequest**)Z_Param__Result=UGSListVirtualGoodsRequest::SendListVirtualGoodsRequest(Z_Param_IncludeDisabled,Z_Param_Tags,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendListVirtualGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_IncludeDisabled); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Tags); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListVirtualGoodsRequest**)Z_Param__Result=UGSListVirtualGoodsRequest::SendListVirtualGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_IncludeDisabled,Z_Param_Tags,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendListVirtualGoodsRequest) \
	{ \
		P_GET_UBOOL(Z_Param_IncludeDisabled); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_Tags); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSListVirtualGoodsRequest**)Z_Param__Result=UGSListVirtualGoodsRequest::SendListVirtualGoodsRequest(Z_Param_IncludeDisabled,Z_Param_Tags,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSListVirtualGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSListVirtualGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListVirtualGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListVirtualGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_INCLASS \
private: \
	static void StaticRegisterNativesUGSListVirtualGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSListVirtualGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSListVirtualGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSListVirtualGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListVirtualGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListVirtualGoodsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListVirtualGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListVirtualGoodsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListVirtualGoodsRequest(UGSListVirtualGoodsRequest&&); \
	NO_API UGSListVirtualGoodsRequest(const UGSListVirtualGoodsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSListVirtualGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSListVirtualGoodsRequest(UGSListVirtualGoodsRequest&&); \
	NO_API UGSListVirtualGoodsRequest(const UGSListVirtualGoodsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSListVirtualGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSListVirtualGoodsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSListVirtualGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__includeDisabled() { return STRUCT_OFFSET(UGSListVirtualGoodsRequest, includeDisabled); } \
	FORCEINLINE static uint32 __PPO__tags() { return STRUCT_OFFSET(UGSListVirtualGoodsRequest, tags); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSListVirtualGoodsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSListVirtualGoodsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSListVirtualGoodsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSListVirtualGoodsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3957_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_3960_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSListVirtualGoodsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendLogChallengeEventRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventKey); \
		P_GET_OBJECT(UGameSparksLogEventData,Z_Param_LogEventData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLogChallengeEventRequest**)Z_Param__Result=UGSLogChallengeEventRequest::SendLogChallengeEventRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_EventKey,Z_Param_LogEventData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLogChallengeEventRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventKey); \
		P_GET_OBJECT(UGameSparksLogEventData,Z_Param_LogEventData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLogChallengeEventRequest**)Z_Param__Result=UGSLogChallengeEventRequest::SendLogChallengeEventRequest(Z_Param_ChallengeInstanceId,Z_Param_EventKey,Z_Param_LogEventData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendLogChallengeEventRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventKey); \
		P_GET_OBJECT(UGameSparksLogEventData,Z_Param_LogEventData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLogChallengeEventRequest**)Z_Param__Result=UGSLogChallengeEventRequest::SendLogChallengeEventRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_EventKey,Z_Param_LogEventData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLogChallengeEventRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventKey); \
		P_GET_OBJECT(UGameSparksLogEventData,Z_Param_LogEventData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLogChallengeEventRequest**)Z_Param__Result=UGSLogChallengeEventRequest::SendLogChallengeEventRequest(Z_Param_ChallengeInstanceId,Z_Param_EventKey,Z_Param_LogEventData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSLogChallengeEventRequest(); \
	friend struct Z_Construct_UClass_UGSLogChallengeEventRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLogChallengeEventRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLogChallengeEventRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_INCLASS \
private: \
	static void StaticRegisterNativesUGSLogChallengeEventRequest(); \
	friend struct Z_Construct_UClass_UGSLogChallengeEventRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLogChallengeEventRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLogChallengeEventRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLogChallengeEventRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLogChallengeEventRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLogChallengeEventRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLogChallengeEventRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLogChallengeEventRequest(UGSLogChallengeEventRequest&&); \
	NO_API UGSLogChallengeEventRequest(const UGSLogChallengeEventRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLogChallengeEventRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLogChallengeEventRequest(UGSLogChallengeEventRequest&&); \
	NO_API UGSLogChallengeEventRequest(const UGSLogChallengeEventRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLogChallengeEventRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLogChallengeEventRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLogChallengeEventRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSLogChallengeEventRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__eventKey() { return STRUCT_OFFSET(UGSLogChallengeEventRequest, eventKey); } \
	FORCEINLINE static uint32 __PPO__logEventData() { return STRUCT_OFFSET(UGSLogChallengeEventRequest, logEventData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSLogChallengeEventRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSLogChallengeEventRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSLogChallengeEventRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4012_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4015_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSLogChallengeEventRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendLogEventRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventKey); \
		P_GET_OBJECT(UGameSparksLogEventData,Z_Param_LogEventData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLogEventRequest**)Z_Param__Result=UGSLogEventRequest::SendLogEventRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EventKey,Z_Param_LogEventData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLogEventRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventKey); \
		P_GET_OBJECT(UGameSparksLogEventData,Z_Param_LogEventData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLogEventRequest**)Z_Param__Result=UGSLogEventRequest::SendLogEventRequest(Z_Param_EventKey,Z_Param_LogEventData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendLogEventRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventKey); \
		P_GET_OBJECT(UGameSparksLogEventData,Z_Param_LogEventData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLogEventRequest**)Z_Param__Result=UGSLogEventRequest::SendLogEventRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_EventKey,Z_Param_LogEventData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendLogEventRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EventKey); \
		P_GET_OBJECT(UGameSparksLogEventData,Z_Param_LogEventData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSLogEventRequest**)Z_Param__Result=UGSLogEventRequest::SendLogEventRequest(Z_Param_EventKey,Z_Param_LogEventData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSLogEventRequest(); \
	friend struct Z_Construct_UClass_UGSLogEventRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLogEventRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLogEventRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_INCLASS \
private: \
	static void StaticRegisterNativesUGSLogEventRequest(); \
	friend struct Z_Construct_UClass_UGSLogEventRequest_Statics; \
public: \
	DECLARE_CLASS(UGSLogEventRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSLogEventRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLogEventRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLogEventRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLogEventRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLogEventRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLogEventRequest(UGSLogEventRequest&&); \
	NO_API UGSLogEventRequest(const UGSLogEventRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSLogEventRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSLogEventRequest(UGSLogEventRequest&&); \
	NO_API UGSLogEventRequest(const UGSLogEventRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSLogEventRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSLogEventRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSLogEventRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__eventKey() { return STRUCT_OFFSET(UGSLogEventRequest, eventKey); } \
	FORCEINLINE static uint32 __PPO__logEventData() { return STRUCT_OFFSET(UGSLogEventRequest, logEventData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSLogEventRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSLogEventRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSLogEventRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4074_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4077_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSLogEventRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendMatchDetailsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchId); \
		P_GET_UBOOL(Z_Param_RealtimeEnabled); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSMatchDetailsRequest**)Z_Param__Result=UGSMatchDetailsRequest::SendMatchDetailsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MatchId,Z_Param_RealtimeEnabled,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMatchDetailsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchId); \
		P_GET_UBOOL(Z_Param_RealtimeEnabled); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSMatchDetailsRequest**)Z_Param__Result=UGSMatchDetailsRequest::SendMatchDetailsRequest(Z_Param_MatchId,Z_Param_RealtimeEnabled,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendMatchDetailsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchId); \
		P_GET_UBOOL(Z_Param_RealtimeEnabled); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSMatchDetailsRequest**)Z_Param__Result=UGSMatchDetailsRequest::SendMatchDetailsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MatchId,Z_Param_RealtimeEnabled,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMatchDetailsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchId); \
		P_GET_UBOOL(Z_Param_RealtimeEnabled); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSMatchDetailsRequest**)Z_Param__Result=UGSMatchDetailsRequest::SendMatchDetailsRequest(Z_Param_MatchId,Z_Param_RealtimeEnabled,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMatchDetailsRequest(); \
	friend struct Z_Construct_UClass_UGSMatchDetailsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSMatchDetailsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSMatchDetailsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_INCLASS \
private: \
	static void StaticRegisterNativesUGSMatchDetailsRequest(); \
	friend struct Z_Construct_UClass_UGSMatchDetailsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSMatchDetailsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSMatchDetailsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMatchDetailsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMatchDetailsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMatchDetailsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMatchDetailsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSMatchDetailsRequest(UGSMatchDetailsRequest&&); \
	NO_API UGSMatchDetailsRequest(const UGSMatchDetailsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMatchDetailsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSMatchDetailsRequest(UGSMatchDetailsRequest&&); \
	NO_API UGSMatchDetailsRequest(const UGSMatchDetailsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMatchDetailsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMatchDetailsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMatchDetailsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__matchId() { return STRUCT_OFFSET(UGSMatchDetailsRequest, matchId); } \
	FORCEINLINE static uint32 __PPO__realtimeEnabled() { return STRUCT_OFFSET(UGSMatchDetailsRequest, realtimeEnabled); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSMatchDetailsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSMatchDetailsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSMatchDetailsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSMatchDetailsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4133_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4136_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSMatchDetailsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendMatchmakingRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Action); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CustomQuery); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_MatchData); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ParticipantData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Skill); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSMatchmakingRequest**)Z_Param__Result=UGSMatchmakingRequest::SendMatchmakingRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Action,Z_Param_CustomQuery,Z_Param_MatchData,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_ParticipantData,Z_Param_Skill,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMatchmakingRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Action); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CustomQuery); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_MatchData); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ParticipantData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Skill); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSMatchmakingRequest**)Z_Param__Result=UGSMatchmakingRequest::SendMatchmakingRequest(Z_Param_Action,Z_Param_CustomQuery,Z_Param_MatchData,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_ParticipantData,Z_Param_Skill,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendMatchmakingRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Action); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CustomQuery); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_MatchData); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ParticipantData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Skill); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSMatchmakingRequest**)Z_Param__Result=UGSMatchmakingRequest::SendMatchmakingRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Action,Z_Param_CustomQuery,Z_Param_MatchData,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_ParticipantData,Z_Param_Skill,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendMatchmakingRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Action); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_CustomQuery); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_MatchData); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MatchShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ParticipantData); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Skill); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSMatchmakingRequest**)Z_Param__Result=UGSMatchmakingRequest::SendMatchmakingRequest(Z_Param_Action,Z_Param_CustomQuery,Z_Param_MatchData,Z_Param_MatchGroup,Z_Param_MatchShortCode,Z_Param_ParticipantData,Z_Param_Skill,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSMatchmakingRequest(); \
	friend struct Z_Construct_UClass_UGSMatchmakingRequest_Statics; \
public: \
	DECLARE_CLASS(UGSMatchmakingRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSMatchmakingRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_INCLASS \
private: \
	static void StaticRegisterNativesUGSMatchmakingRequest(); \
	friend struct Z_Construct_UClass_UGSMatchmakingRequest_Statics; \
public: \
	DECLARE_CLASS(UGSMatchmakingRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSMatchmakingRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMatchmakingRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMatchmakingRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMatchmakingRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMatchmakingRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSMatchmakingRequest(UGSMatchmakingRequest&&); \
	NO_API UGSMatchmakingRequest(const UGSMatchmakingRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSMatchmakingRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSMatchmakingRequest(UGSMatchmakingRequest&&); \
	NO_API UGSMatchmakingRequest(const UGSMatchmakingRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSMatchmakingRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSMatchmakingRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSMatchmakingRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__action() { return STRUCT_OFFSET(UGSMatchmakingRequest, action); } \
	FORCEINLINE static uint32 __PPO__customQuery() { return STRUCT_OFFSET(UGSMatchmakingRequest, customQuery); } \
	FORCEINLINE static uint32 __PPO__matchData() { return STRUCT_OFFSET(UGSMatchmakingRequest, matchData); } \
	FORCEINLINE static uint32 __PPO__matchGroup() { return STRUCT_OFFSET(UGSMatchmakingRequest, matchGroup); } \
	FORCEINLINE static uint32 __PPO__matchShortCode() { return STRUCT_OFFSET(UGSMatchmakingRequest, matchShortCode); } \
	FORCEINLINE static uint32 __PPO__participantData() { return STRUCT_OFFSET(UGSMatchmakingRequest, participantData); } \
	FORCEINLINE static uint32 __PPO__skill() { return STRUCT_OFFSET(UGSMatchmakingRequest, skill); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSMatchmakingRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSMatchmakingRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSMatchmakingRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSMatchmakingRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4188_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4191_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSMatchmakingRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendNXConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_AccountPerLoginId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NsaIdToken); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSNXConnectRequest**)Z_Param__Result=UGSNXConnectRequest::SendNXConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccountPerLoginId,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_NsaIdToken,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendNXConnectRequest) \
	{ \
		P_GET_UBOOL(Z_Param_AccountPerLoginId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NsaIdToken); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSNXConnectRequest**)Z_Param__Result=UGSNXConnectRequest::SendNXConnectRequest(Z_Param_AccountPerLoginId,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_NsaIdToken,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendNXConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_AccountPerLoginId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NsaIdToken); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSNXConnectRequest**)Z_Param__Result=UGSNXConnectRequest::SendNXConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccountPerLoginId,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_NsaIdToken,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendNXConnectRequest) \
	{ \
		P_GET_UBOOL(Z_Param_AccountPerLoginId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_NsaIdToken); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSNXConnectRequest**)Z_Param__Result=UGSNXConnectRequest::SendNXConnectRequest(Z_Param_AccountPerLoginId,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_NsaIdToken,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSNXConnectRequest(); \
	friend struct Z_Construct_UClass_UGSNXConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSNXConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSNXConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_INCLASS \
private: \
	static void StaticRegisterNativesUGSNXConnectRequest(); \
	friend struct Z_Construct_UClass_UGSNXConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSNXConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSNXConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSNXConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSNXConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSNXConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSNXConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSNXConnectRequest(UGSNXConnectRequest&&); \
	NO_API UGSNXConnectRequest(const UGSNXConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSNXConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSNXConnectRequest(UGSNXConnectRequest&&); \
	NO_API UGSNXConnectRequest(const UGSNXConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSNXConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSNXConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSNXConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accountPerLoginId() { return STRUCT_OFFSET(UGSNXConnectRequest, accountPerLoginId); } \
	FORCEINLINE static uint32 __PPO__displayName() { return STRUCT_OFFSET(UGSNXConnectRequest, displayName); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSNXConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSNXConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSNXConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__nsaIdToken() { return STRUCT_OFFSET(UGSNXConnectRequest, nsaIdToken); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSNXConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSNXConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSNXConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSNXConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSNXConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSNXConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSNXConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4270_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4273_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSNXConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendPSNAccountConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPSNAccountConnectRequest**)Z_Param__Result=UGSPSNAccountConnectRequest::SendPSNAccountConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AuthorizationCode,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPSNAccountConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPSNAccountConnectRequest**)Z_Param__Result=UGSPSNAccountConnectRequest::SendPSNAccountConnectRequest(Z_Param_AuthorizationCode,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendPSNAccountConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPSNAccountConnectRequest**)Z_Param__Result=UGSPSNAccountConnectRequest::SendPSNAccountConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AuthorizationCode,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPSNAccountConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPSNAccountConnectRequest**)Z_Param__Result=UGSPSNAccountConnectRequest::SendPSNAccountConnectRequest(Z_Param_AuthorizationCode,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSPSNAccountConnectRequest(); \
	friend struct Z_Construct_UClass_UGSPSNAccountConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSPSNAccountConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSPSNAccountConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_INCLASS \
private: \
	static void StaticRegisterNativesUGSPSNAccountConnectRequest(); \
	friend struct Z_Construct_UClass_UGSPSNAccountConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSPSNAccountConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSPSNAccountConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSPSNAccountConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSPSNAccountConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSPSNAccountConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSPSNAccountConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSPSNAccountConnectRequest(UGSPSNAccountConnectRequest&&); \
	NO_API UGSPSNAccountConnectRequest(const UGSPSNAccountConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSPSNAccountConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSPSNAccountConnectRequest(UGSPSNAccountConnectRequest&&); \
	NO_API UGSPSNAccountConnectRequest(const UGSPSNAccountConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSPSNAccountConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSPSNAccountConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSPSNAccountConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__authorizationCode() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, authorizationCode); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__redirectUri() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, redirectUri); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSPSNAccountConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4370_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4373_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSPSNAccountConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendPSNConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPSNConnectRequest**)Z_Param__Result=UGSPSNConnectRequest::SendPSNConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AuthorizationCode,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPSNConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPSNConnectRequest**)Z_Param__Result=UGSPSNConnectRequest::SendPSNConnectRequest(Z_Param_AuthorizationCode,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendPSNConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPSNConnectRequest**)Z_Param__Result=UGSPSNConnectRequest::SendPSNConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AuthorizationCode,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPSNConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPSNConnectRequest**)Z_Param__Result=UGSPSNConnectRequest::SendPSNConnectRequest(Z_Param_AuthorizationCode,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_RedirectUri,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSPSNConnectRequest(); \
	friend struct Z_Construct_UClass_UGSPSNConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSPSNConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSPSNConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_INCLASS \
private: \
	static void StaticRegisterNativesUGSPSNConnectRequest(); \
	friend struct Z_Construct_UClass_UGSPSNConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSPSNConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSPSNConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSPSNConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSPSNConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSPSNConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSPSNConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSPSNConnectRequest(UGSPSNConnectRequest&&); \
	NO_API UGSPSNConnectRequest(const UGSPSNConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSPSNConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSPSNConnectRequest(UGSPSNConnectRequest&&); \
	NO_API UGSPSNConnectRequest(const UGSPSNConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSPSNConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSPSNConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSPSNConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__authorizationCode() { return STRUCT_OFFSET(UGSPSNConnectRequest, authorizationCode); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSPSNConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSPSNConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSPSNConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__redirectUri() { return STRUCT_OFFSET(UGSPSNConnectRequest, redirectUri); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSPSNConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSPSNConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSPSNConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSPSNConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSPSNConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSPSNConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSPSNConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4467_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4470_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSPSNConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendPsnBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EntitlementLabel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UseCount); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPsnBuyGoodsRequest**)Z_Param__Result=UGSPsnBuyGoodsRequest::SendPsnBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AuthorizationCode,Z_Param_CurrencyCode,Z_Param_EntitlementLabel,Z_Param_RedirectUri,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_UseCount,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPsnBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EntitlementLabel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UseCount); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPsnBuyGoodsRequest**)Z_Param__Result=UGSPsnBuyGoodsRequest::SendPsnBuyGoodsRequest(Z_Param_AuthorizationCode,Z_Param_CurrencyCode,Z_Param_EntitlementLabel,Z_Param_RedirectUri,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_UseCount,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendPsnBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EntitlementLabel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UseCount); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPsnBuyGoodsRequest**)Z_Param__Result=UGSPsnBuyGoodsRequest::SendPsnBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AuthorizationCode,Z_Param_CurrencyCode,Z_Param_EntitlementLabel,Z_Param_RedirectUri,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_UseCount,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPsnBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuthorizationCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EntitlementLabel); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RedirectUri); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_PROPERTY(UIntProperty,Z_Param_UseCount); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPsnBuyGoodsRequest**)Z_Param__Result=UGSPsnBuyGoodsRequest::SendPsnBuyGoodsRequest(Z_Param_AuthorizationCode,Z_Param_CurrencyCode,Z_Param_EntitlementLabel,Z_Param_RedirectUri,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_UseCount,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSPsnBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSPsnBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSPsnBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSPsnBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_INCLASS \
private: \
	static void StaticRegisterNativesUGSPsnBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSPsnBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSPsnBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSPsnBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSPsnBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSPsnBuyGoodsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSPsnBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSPsnBuyGoodsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSPsnBuyGoodsRequest(UGSPsnBuyGoodsRequest&&); \
	NO_API UGSPsnBuyGoodsRequest(const UGSPsnBuyGoodsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSPsnBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSPsnBuyGoodsRequest(UGSPsnBuyGoodsRequest&&); \
	NO_API UGSPsnBuyGoodsRequest(const UGSPsnBuyGoodsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSPsnBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSPsnBuyGoodsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSPsnBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__authorizationCode() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, authorizationCode); } \
	FORCEINLINE static uint32 __PPO__currencyCode() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, currencyCode); } \
	FORCEINLINE static uint32 __PPO__entitlementLabel() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, entitlementLabel); } \
	FORCEINLINE static uint32 __PPO__redirectUri() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, redirectUri); } \
	FORCEINLINE static uint32 __PPO__subUnitPrice() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, subUnitPrice); } \
	FORCEINLINE static uint32 __PPO__uniqueTransactionByPlayer() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, uniqueTransactionByPlayer); } \
	FORCEINLINE static uint32 __PPO__useCount() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, useCount); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSPsnBuyGoodsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4568_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4571_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSPsnBuyGoodsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendPushRegistrationRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceOS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PushId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPushRegistrationRequest**)Z_Param__Result=UGSPushRegistrationRequest::SendPushRegistrationRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DeviceOS,Z_Param_PushId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPushRegistrationRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceOS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PushId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPushRegistrationRequest**)Z_Param__Result=UGSPushRegistrationRequest::SendPushRegistrationRequest(Z_Param_DeviceOS,Z_Param_PushId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendPushRegistrationRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceOS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PushId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPushRegistrationRequest**)Z_Param__Result=UGSPushRegistrationRequest::SendPushRegistrationRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DeviceOS,Z_Param_PushId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendPushRegistrationRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DeviceOS); \
		P_GET_PROPERTY(UStrProperty,Z_Param_PushId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSPushRegistrationRequest**)Z_Param__Result=UGSPushRegistrationRequest::SendPushRegistrationRequest(Z_Param_DeviceOS,Z_Param_PushId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSPushRegistrationRequest(); \
	friend struct Z_Construct_UClass_UGSPushRegistrationRequest_Statics; \
public: \
	DECLARE_CLASS(UGSPushRegistrationRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSPushRegistrationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_INCLASS \
private: \
	static void StaticRegisterNativesUGSPushRegistrationRequest(); \
	friend struct Z_Construct_UClass_UGSPushRegistrationRequest_Statics; \
public: \
	DECLARE_CLASS(UGSPushRegistrationRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSPushRegistrationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSPushRegistrationRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSPushRegistrationRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSPushRegistrationRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSPushRegistrationRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSPushRegistrationRequest(UGSPushRegistrationRequest&&); \
	NO_API UGSPushRegistrationRequest(const UGSPushRegistrationRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSPushRegistrationRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSPushRegistrationRequest(UGSPushRegistrationRequest&&); \
	NO_API UGSPushRegistrationRequest(const UGSPushRegistrationRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSPushRegistrationRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSPushRegistrationRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSPushRegistrationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__deviceOS() { return STRUCT_OFFSET(UGSPushRegistrationRequest, deviceOS); } \
	FORCEINLINE static uint32 __PPO__pushId() { return STRUCT_OFFSET(UGSPushRegistrationRequest, pushId); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSPushRegistrationRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSPushRegistrationRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSPushRegistrationRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSPushRegistrationRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4650_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4653_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSPushRegistrationRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendQQConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSQQConnectRequest**)Z_Param__Result=UGSQQConnectRequest::SendQQConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendQQConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSQQConnectRequest**)Z_Param__Result=UGSQQConnectRequest::SendQQConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendQQConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSQQConnectRequest**)Z_Param__Result=UGSQQConnectRequest::SendQQConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendQQConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSQQConnectRequest**)Z_Param__Result=UGSQQConnectRequest::SendQQConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSQQConnectRequest(); \
	friend struct Z_Construct_UClass_UGSQQConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSQQConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSQQConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_INCLASS \
private: \
	static void StaticRegisterNativesUGSQQConnectRequest(); \
	friend struct Z_Construct_UClass_UGSQQConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSQQConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSQQConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSQQConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSQQConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSQQConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSQQConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSQQConnectRequest(UGSQQConnectRequest&&); \
	NO_API UGSQQConnectRequest(const UGSQQConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSQQConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSQQConnectRequest(UGSQQConnectRequest&&); \
	NO_API UGSQQConnectRequest(const UGSQQConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSQQConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSQQConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSQQConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessToken() { return STRUCT_OFFSET(UGSQQConnectRequest, accessToken); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSQQConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSQQConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSQQConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSQQConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSQQConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSQQConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSQQConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSQQConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSQQConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSQQConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4709_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4712_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSQQConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendRegistrationRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRegistrationRequest**)Z_Param__Result=UGSRegistrationRequest::SendRegistrationRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DisplayName,Z_Param_Password,Z_Param_Segments,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRegistrationRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRegistrationRequest**)Z_Param__Result=UGSRegistrationRequest::SendRegistrationRequest(Z_Param_DisplayName,Z_Param_Password,Z_Param_Segments,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendRegistrationRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRegistrationRequest**)Z_Param__Result=UGSRegistrationRequest::SendRegistrationRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DisplayName,Z_Param_Password,Z_Param_Segments,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendRegistrationRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_UserName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRegistrationRequest**)Z_Param__Result=UGSRegistrationRequest::SendRegistrationRequest(Z_Param_DisplayName,Z_Param_Password,Z_Param_Segments,Z_Param_UserName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSRegistrationRequest(); \
	friend struct Z_Construct_UClass_UGSRegistrationRequest_Statics; \
public: \
	DECLARE_CLASS(UGSRegistrationRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRegistrationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_INCLASS \
private: \
	static void StaticRegisterNativesUGSRegistrationRequest(); \
	friend struct Z_Construct_UClass_UGSRegistrationRequest_Statics; \
public: \
	DECLARE_CLASS(UGSRegistrationRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRegistrationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRegistrationRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRegistrationRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRegistrationRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRegistrationRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRegistrationRequest(UGSRegistrationRequest&&); \
	NO_API UGSRegistrationRequest(const UGSRegistrationRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRegistrationRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRegistrationRequest(UGSRegistrationRequest&&); \
	NO_API UGSRegistrationRequest(const UGSRegistrationRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRegistrationRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRegistrationRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRegistrationRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__displayName() { return STRUCT_OFFSET(UGSRegistrationRequest, displayName); } \
	FORCEINLINE static uint32 __PPO__password() { return STRUCT_OFFSET(UGSRegistrationRequest, password); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSRegistrationRequest, segments); } \
	FORCEINLINE static uint32 __PPO__userName() { return STRUCT_OFFSET(UGSRegistrationRequest, userName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSRegistrationRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSRegistrationRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSRegistrationRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSRegistrationRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4799_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4802_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSRegistrationRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendRevokePurchaseGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StoreType); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TransactionIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRevokePurchaseGoodsRequest**)Z_Param__Result=UGSRevokePurchaseGoodsRequest::SendRevokePurchaseGoodsRequest(Z_Param_PlayerId,Z_Param_StoreType,Z_Param_TransactionIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendRevokePurchaseGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StoreType); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TransactionIds); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSRevokePurchaseGoodsRequest**)Z_Param__Result=UGSRevokePurchaseGoodsRequest::SendRevokePurchaseGoodsRequest(Z_Param_PlayerId,Z_Param_StoreType,Z_Param_TransactionIds,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSRevokePurchaseGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSRevokePurchaseGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSRevokePurchaseGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRevokePurchaseGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_INCLASS \
private: \
	static void StaticRegisterNativesUGSRevokePurchaseGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSRevokePurchaseGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSRevokePurchaseGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSRevokePurchaseGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRevokePurchaseGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRevokePurchaseGoodsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRevokePurchaseGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRevokePurchaseGoodsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRevokePurchaseGoodsRequest(UGSRevokePurchaseGoodsRequest&&); \
	NO_API UGSRevokePurchaseGoodsRequest(const UGSRevokePurchaseGoodsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSRevokePurchaseGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSRevokePurchaseGoodsRequest(UGSRevokePurchaseGoodsRequest&&); \
	NO_API UGSRevokePurchaseGoodsRequest(const UGSRevokePurchaseGoodsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSRevokePurchaseGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSRevokePurchaseGoodsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSRevokePurchaseGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSRevokePurchaseGoodsRequest, playerId); } \
	FORCEINLINE static uint32 __PPO__storeType() { return STRUCT_OFFSET(UGSRevokePurchaseGoodsRequest, storeType); } \
	FORCEINLINE static uint32 __PPO__transactionIds() { return STRUCT_OFFSET(UGSRevokePurchaseGoodsRequest, transactionIds); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSRevokePurchaseGoodsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSRevokePurchaseGoodsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSRevokePurchaseGoodsRequest, requestTimeoutSeconds); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4860_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4863_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSRevokePurchaseGoodsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendScheduleBulkJobAdminRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Data); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_PlayerQuery); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScheduledTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Script); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSScheduleBulkJobAdminRequest**)Z_Param__Result=UGSScheduleBulkJobAdminRequest::SendScheduleBulkJobAdminRequest(Z_Param_Data,Z_Param_ModuleShortCode,Z_Param_PlayerQuery,Z_Param_ScheduledTime,Z_Param_Script,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendScheduleBulkJobAdminRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Data); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ModuleShortCode); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_PlayerQuery); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ScheduledTime); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Script); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSScheduleBulkJobAdminRequest**)Z_Param__Result=UGSScheduleBulkJobAdminRequest::SendScheduleBulkJobAdminRequest(Z_Param_Data,Z_Param_ModuleShortCode,Z_Param_PlayerQuery,Z_Param_ScheduledTime,Z_Param_Script,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSScheduleBulkJobAdminRequest(); \
	friend struct Z_Construct_UClass_UGSScheduleBulkJobAdminRequest_Statics; \
public: \
	DECLARE_CLASS(UGSScheduleBulkJobAdminRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSScheduleBulkJobAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_INCLASS \
private: \
	static void StaticRegisterNativesUGSScheduleBulkJobAdminRequest(); \
	friend struct Z_Construct_UClass_UGSScheduleBulkJobAdminRequest_Statics; \
public: \
	DECLARE_CLASS(UGSScheduleBulkJobAdminRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSScheduleBulkJobAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSScheduleBulkJobAdminRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSScheduleBulkJobAdminRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSScheduleBulkJobAdminRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSScheduleBulkJobAdminRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSScheduleBulkJobAdminRequest(UGSScheduleBulkJobAdminRequest&&); \
	NO_API UGSScheduleBulkJobAdminRequest(const UGSScheduleBulkJobAdminRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSScheduleBulkJobAdminRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSScheduleBulkJobAdminRequest(UGSScheduleBulkJobAdminRequest&&); \
	NO_API UGSScheduleBulkJobAdminRequest(const UGSScheduleBulkJobAdminRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSScheduleBulkJobAdminRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSScheduleBulkJobAdminRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSScheduleBulkJobAdminRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__data() { return STRUCT_OFFSET(UGSScheduleBulkJobAdminRequest, data); } \
	FORCEINLINE static uint32 __PPO__moduleShortCode() { return STRUCT_OFFSET(UGSScheduleBulkJobAdminRequest, moduleShortCode); } \
	FORCEINLINE static uint32 __PPO__playerQuery() { return STRUCT_OFFSET(UGSScheduleBulkJobAdminRequest, playerQuery); } \
	FORCEINLINE static uint32 __PPO__scheduledTime() { return STRUCT_OFFSET(UGSScheduleBulkJobAdminRequest, scheduledTime); } \
	FORCEINLINE static uint32 __PPO__script() { return STRUCT_OFFSET(UGSScheduleBulkJobAdminRequest, script); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSScheduleBulkJobAdminRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSScheduleBulkJobAdminRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSScheduleBulkJobAdminRequest, requestTimeoutSeconds); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4909_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4912_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSScheduleBulkJobAdminRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSendFriendMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSendFriendMessageRequest**)Z_Param__Result=UGSSendFriendMessageRequest::SendSendFriendMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_FriendIds,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSendFriendMessageRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSendFriendMessageRequest**)Z_Param__Result=UGSSendFriendMessageRequest::SendSendFriendMessageRequest(Z_Param_FriendIds,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSendFriendMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSendFriendMessageRequest**)Z_Param__Result=UGSSendFriendMessageRequest::SendSendFriendMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_FriendIds,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSendFriendMessageRequest) \
	{ \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSendFriendMessageRequest**)Z_Param__Result=UGSSendFriendMessageRequest::SendSendFriendMessageRequest(Z_Param_FriendIds,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSSendFriendMessageRequest(); \
	friend struct Z_Construct_UClass_UGSSendFriendMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSendFriendMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSendFriendMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_INCLASS \
private: \
	static void StaticRegisterNativesUGSSendFriendMessageRequest(); \
	friend struct Z_Construct_UClass_UGSSendFriendMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSendFriendMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSendFriendMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSendFriendMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSendFriendMessageRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSendFriendMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSendFriendMessageRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSendFriendMessageRequest(UGSSendFriendMessageRequest&&); \
	NO_API UGSSendFriendMessageRequest(const UGSSendFriendMessageRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSendFriendMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSendFriendMessageRequest(UGSSendFriendMessageRequest&&); \
	NO_API UGSSendFriendMessageRequest(const UGSSendFriendMessageRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSendFriendMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSendFriendMessageRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSendFriendMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__friendIds() { return STRUCT_OFFSET(UGSSendFriendMessageRequest, friendIds); } \
	FORCEINLINE static uint32 __PPO__message() { return STRUCT_OFFSET(UGSSendFriendMessageRequest, message); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSSendFriendMessageRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSSendFriendMessageRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSSendFriendMessageRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSSendFriendMessageRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4964_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_4967_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSSendFriendMessageRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSendTeamChatMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSendTeamChatMessageRequest**)Z_Param__Result=UGSSendTeamChatMessageRequest::SendSendTeamChatMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Message,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSendTeamChatMessageRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSendTeamChatMessageRequest**)Z_Param__Result=UGSSendTeamChatMessageRequest::SendSendTeamChatMessageRequest(Z_Param_Message,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSendTeamChatMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSendTeamChatMessageRequest**)Z_Param__Result=UGSSendTeamChatMessageRequest::SendSendTeamChatMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_Message,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSendTeamChatMessageRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OwnerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_TeamType); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSendTeamChatMessageRequest**)Z_Param__Result=UGSSendTeamChatMessageRequest::SendSendTeamChatMessageRequest(Z_Param_Message,Z_Param_OwnerId,Z_Param_TeamId,Z_Param_TeamType,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSSendTeamChatMessageRequest(); \
	friend struct Z_Construct_UClass_UGSSendTeamChatMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSendTeamChatMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSendTeamChatMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_INCLASS \
private: \
	static void StaticRegisterNativesUGSSendTeamChatMessageRequest(); \
	friend struct Z_Construct_UClass_UGSSendTeamChatMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSendTeamChatMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSendTeamChatMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSendTeamChatMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSendTeamChatMessageRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSendTeamChatMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSendTeamChatMessageRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSendTeamChatMessageRequest(UGSSendTeamChatMessageRequest&&); \
	NO_API UGSSendTeamChatMessageRequest(const UGSSendTeamChatMessageRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSendTeamChatMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSendTeamChatMessageRequest(UGSSendTeamChatMessageRequest&&); \
	NO_API UGSSendTeamChatMessageRequest(const UGSSendTeamChatMessageRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSendTeamChatMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSendTeamChatMessageRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSendTeamChatMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__message() { return STRUCT_OFFSET(UGSSendTeamChatMessageRequest, message); } \
	FORCEINLINE static uint32 __PPO__ownerId() { return STRUCT_OFFSET(UGSSendTeamChatMessageRequest, ownerId); } \
	FORCEINLINE static uint32 __PPO__teamId() { return STRUCT_OFFSET(UGSSendTeamChatMessageRequest, teamId); } \
	FORCEINLINE static uint32 __PPO__teamType() { return STRUCT_OFFSET(UGSSendTeamChatMessageRequest, teamType); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSSendTeamChatMessageRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSSendTeamChatMessageRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSSendTeamChatMessageRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSSendTeamChatMessageRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5019_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5022_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSSendTeamChatMessageRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSocialDisconnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SystemId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialDisconnectRequest**)Z_Param__Result=UGSSocialDisconnectRequest::SendSocialDisconnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_SystemId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSocialDisconnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SystemId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialDisconnectRequest**)Z_Param__Result=UGSSocialDisconnectRequest::SendSocialDisconnectRequest(Z_Param_SystemId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSocialDisconnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SystemId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialDisconnectRequest**)Z_Param__Result=UGSSocialDisconnectRequest::SendSocialDisconnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_SystemId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSocialDisconnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SystemId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialDisconnectRequest**)Z_Param__Result=UGSSocialDisconnectRequest::SendSocialDisconnectRequest(Z_Param_SystemId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSSocialDisconnectRequest(); \
	friend struct Z_Construct_UClass_UGSSocialDisconnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSocialDisconnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSocialDisconnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_INCLASS \
private: \
	static void StaticRegisterNativesUGSSocialDisconnectRequest(); \
	friend struct Z_Construct_UClass_UGSSocialDisconnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSocialDisconnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSocialDisconnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSocialDisconnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSocialDisconnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSocialDisconnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSocialDisconnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSocialDisconnectRequest(UGSSocialDisconnectRequest&&); \
	NO_API UGSSocialDisconnectRequest(const UGSSocialDisconnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSocialDisconnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSocialDisconnectRequest(UGSSocialDisconnectRequest&&); \
	NO_API UGSSocialDisconnectRequest(const UGSSocialDisconnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSocialDisconnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSocialDisconnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSocialDisconnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__systemId() { return STRUCT_OFFSET(UGSSocialDisconnectRequest, systemId); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSSocialDisconnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSSocialDisconnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSSocialDisconnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSSocialDisconnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5080_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5083_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSSocialDisconnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSocialLeaderboardDataRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialLeaderboardDataRequest**)Z_Param__Result=UGSSocialLeaderboardDataRequest::SendSocialLeaderboardDataRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Offset,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSocialLeaderboardDataRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialLeaderboardDataRequest**)Z_Param__Result=UGSSocialLeaderboardDataRequest::SendSocialLeaderboardDataRequest(Z_Param_ChallengeInstanceId,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Offset,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSocialLeaderboardDataRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialLeaderboardDataRequest**)Z_Param__Result=UGSSocialLeaderboardDataRequest::SendSocialLeaderboardDataRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Offset,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSocialLeaderboardDataRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_UBOOL(Z_Param_DontErrorOnNotSocial); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EntryCount); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_FriendIds); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeFirst); \
		P_GET_PROPERTY(UIntProperty,Z_Param_IncludeLast); \
		P_GET_UBOOL(Z_Param_InverseSocial); \
		P_GET_PROPERTY(UStrProperty,Z_Param_LeaderboardShortCode); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Offset); \
		P_GET_UBOOL(Z_Param_Social); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamIds); \
		P_GET_OBJECT(UGameSparksRequestArray,Z_Param_TeamTypes); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialLeaderboardDataRequest**)Z_Param__Result=UGSSocialLeaderboardDataRequest::SendSocialLeaderboardDataRequest(Z_Param_ChallengeInstanceId,Z_Param_DontErrorOnNotSocial,Z_Param_EntryCount,Z_Param_FriendIds,Z_Param_IncludeFirst,Z_Param_IncludeLast,Z_Param_InverseSocial,Z_Param_LeaderboardShortCode,Z_Param_Offset,Z_Param_Social,Z_Param_TeamIds,Z_Param_TeamTypes,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSSocialLeaderboardDataRequest(); \
	friend struct Z_Construct_UClass_UGSSocialLeaderboardDataRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSocialLeaderboardDataRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSocialLeaderboardDataRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_INCLASS \
private: \
	static void StaticRegisterNativesUGSSocialLeaderboardDataRequest(); \
	friend struct Z_Construct_UClass_UGSSocialLeaderboardDataRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSocialLeaderboardDataRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSocialLeaderboardDataRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSocialLeaderboardDataRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSocialLeaderboardDataRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSocialLeaderboardDataRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSocialLeaderboardDataRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSocialLeaderboardDataRequest(UGSSocialLeaderboardDataRequest&&); \
	NO_API UGSSocialLeaderboardDataRequest(const UGSSocialLeaderboardDataRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSocialLeaderboardDataRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSocialLeaderboardDataRequest(UGSSocialLeaderboardDataRequest&&); \
	NO_API UGSSocialLeaderboardDataRequest(const UGSSocialLeaderboardDataRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSocialLeaderboardDataRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSocialLeaderboardDataRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSocialLeaderboardDataRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__dontErrorOnNotSocial() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, dontErrorOnNotSocial); } \
	FORCEINLINE static uint32 __PPO__entryCount() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, entryCount); } \
	FORCEINLINE static uint32 __PPO__friendIds() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, friendIds); } \
	FORCEINLINE static uint32 __PPO__includeFirst() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, includeFirst); } \
	FORCEINLINE static uint32 __PPO__includeLast() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, includeLast); } \
	FORCEINLINE static uint32 __PPO__inverseSocial() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, inverseSocial); } \
	FORCEINLINE static uint32 __PPO__leaderboardShortCode() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, leaderboardShortCode); } \
	FORCEINLINE static uint32 __PPO__offset() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, offset); } \
	FORCEINLINE static uint32 __PPO__social() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, social); } \
	FORCEINLINE static uint32 __PPO__teamIds() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, teamIds); } \
	FORCEINLINE static uint32 __PPO__teamTypes() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, teamTypes); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSSocialLeaderboardDataRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5132_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5135_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSSocialLeaderboardDataRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSocialStatusRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialStatusRequest**)Z_Param__Result=UGSSocialStatusRequest::SendSocialStatusRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSocialStatusRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialStatusRequest**)Z_Param__Result=UGSSocialStatusRequest::SendSocialStatusRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSocialStatusRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialStatusRequest**)Z_Param__Result=UGSSocialStatusRequest::SendSocialStatusRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSocialStatusRequest) \
	{ \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSocialStatusRequest**)Z_Param__Result=UGSSocialStatusRequest::SendSocialStatusRequest(Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSSocialStatusRequest(); \
	friend struct Z_Construct_UClass_UGSSocialStatusRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSocialStatusRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSocialStatusRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_INCLASS \
private: \
	static void StaticRegisterNativesUGSSocialStatusRequest(); \
	friend struct Z_Construct_UClass_UGSSocialStatusRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSocialStatusRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSocialStatusRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSocialStatusRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSocialStatusRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSocialStatusRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSocialStatusRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSocialStatusRequest(UGSSocialStatusRequest&&); \
	NO_API UGSSocialStatusRequest(const UGSSocialStatusRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSocialStatusRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSocialStatusRequest(UGSSocialStatusRequest&&); \
	NO_API UGSSocialStatusRequest(const UGSSocialStatusRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSocialStatusRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSocialStatusRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSocialStatusRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSSocialStatusRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSSocialStatusRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSSocialStatusRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSSocialStatusRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5225_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5228_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSSocialStatusRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSteamBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OrderId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSteamBuyGoodsRequest**)Z_Param__Result=UGSSteamBuyGoodsRequest::SendSteamBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyCode,Z_Param_OrderId,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSteamBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OrderId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSteamBuyGoodsRequest**)Z_Param__Result=UGSSteamBuyGoodsRequest::SendSteamBuyGoodsRequest(Z_Param_CurrencyCode,Z_Param_OrderId,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSteamBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OrderId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSteamBuyGoodsRequest**)Z_Param__Result=UGSSteamBuyGoodsRequest::SendSteamBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyCode,Z_Param_OrderId,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSteamBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OrderId); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSteamBuyGoodsRequest**)Z_Param__Result=UGSSteamBuyGoodsRequest::SendSteamBuyGoodsRequest(Z_Param_CurrencyCode,Z_Param_OrderId,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSSteamBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSSteamBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSteamBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSteamBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_INCLASS \
private: \
	static void StaticRegisterNativesUGSSteamBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSSteamBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSteamBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSteamBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSteamBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSteamBuyGoodsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSteamBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSteamBuyGoodsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSteamBuyGoodsRequest(UGSSteamBuyGoodsRequest&&); \
	NO_API UGSSteamBuyGoodsRequest(const UGSSteamBuyGoodsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSteamBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSteamBuyGoodsRequest(UGSSteamBuyGoodsRequest&&); \
	NO_API UGSSteamBuyGoodsRequest(const UGSSteamBuyGoodsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSteamBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSteamBuyGoodsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSteamBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__currencyCode() { return STRUCT_OFFSET(UGSSteamBuyGoodsRequest, currencyCode); } \
	FORCEINLINE static uint32 __PPO__orderId() { return STRUCT_OFFSET(UGSSteamBuyGoodsRequest, orderId); } \
	FORCEINLINE static uint32 __PPO__subUnitPrice() { return STRUCT_OFFSET(UGSSteamBuyGoodsRequest, subUnitPrice); } \
	FORCEINLINE static uint32 __PPO__uniqueTransactionByPlayer() { return STRUCT_OFFSET(UGSSteamBuyGoodsRequest, uniqueTransactionByPlayer); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSSteamBuyGoodsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSSteamBuyGoodsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSSteamBuyGoodsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSSteamBuyGoodsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5274_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5277_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSSteamBuyGoodsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendSteamConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SessionTicket); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSteamConnectRequest**)Z_Param__Result=UGSSteamConnectRequest::SendSteamConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SessionTicket,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSteamConnectRequest) \
	{ \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SessionTicket); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSteamConnectRequest**)Z_Param__Result=UGSSteamConnectRequest::SendSteamConnectRequest(Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SessionTicket,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendSteamConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SessionTicket); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSteamConnectRequest**)Z_Param__Result=UGSSteamConnectRequest::SendSteamConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SessionTicket,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendSteamConnectRequest) \
	{ \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SessionTicket); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSSteamConnectRequest**)Z_Param__Result=UGSSteamConnectRequest::SendSteamConnectRequest(Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SessionTicket,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSSteamConnectRequest(); \
	friend struct Z_Construct_UClass_UGSSteamConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSteamConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSteamConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_INCLASS \
private: \
	static void StaticRegisterNativesUGSSteamConnectRequest(); \
	friend struct Z_Construct_UClass_UGSSteamConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSSteamConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSSteamConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSteamConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSteamConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSteamConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSteamConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSteamConnectRequest(UGSSteamConnectRequest&&); \
	NO_API UGSSteamConnectRequest(const UGSSteamConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSSteamConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSSteamConnectRequest(UGSSteamConnectRequest&&); \
	NO_API UGSSteamConnectRequest(const UGSSteamConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSSteamConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSSteamConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSSteamConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSSteamConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSSteamConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSSteamConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSSteamConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__sessionTicket() { return STRUCT_OFFSET(UGSSteamConnectRequest, sessionTicket); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSSteamConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSSteamConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSSteamConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSSteamConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSSteamConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSSteamConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5343_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5346_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSSteamConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendTwitchConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSTwitchConnectRequest**)Z_Param__Result=UGSTwitchConnectRequest::SendTwitchConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendTwitchConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSTwitchConnectRequest**)Z_Param__Result=UGSTwitchConnectRequest::SendTwitchConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendTwitchConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSTwitchConnectRequest**)Z_Param__Result=UGSTwitchConnectRequest::SendTwitchConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendTwitchConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSTwitchConnectRequest**)Z_Param__Result=UGSTwitchConnectRequest::SendTwitchConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSTwitchConnectRequest(); \
	friend struct Z_Construct_UClass_UGSTwitchConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSTwitchConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSTwitchConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_INCLASS \
private: \
	static void StaticRegisterNativesUGSTwitchConnectRequest(); \
	friend struct Z_Construct_UClass_UGSTwitchConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSTwitchConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSTwitchConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSTwitchConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSTwitchConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSTwitchConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSTwitchConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSTwitchConnectRequest(UGSTwitchConnectRequest&&); \
	NO_API UGSTwitchConnectRequest(const UGSTwitchConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSTwitchConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSTwitchConnectRequest(UGSTwitchConnectRequest&&); \
	NO_API UGSTwitchConnectRequest(const UGSTwitchConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSTwitchConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSTwitchConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSTwitchConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessToken() { return STRUCT_OFFSET(UGSTwitchConnectRequest, accessToken); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSTwitchConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSTwitchConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSTwitchConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSTwitchConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSTwitchConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSTwitchConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSTwitchConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSTwitchConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSTwitchConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSTwitchConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5437_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5440_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSTwitchConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendTwitterConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessSecret); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSTwitterConnectRequest**)Z_Param__Result=UGSTwitterConnectRequest::SendTwitterConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessSecret,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendTwitterConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessSecret); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSTwitterConnectRequest**)Z_Param__Result=UGSTwitterConnectRequest::SendTwitterConnectRequest(Z_Param_AccessSecret,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendTwitterConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessSecret); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSTwitterConnectRequest**)Z_Param__Result=UGSTwitterConnectRequest::SendTwitterConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessSecret,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendTwitterConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessSecret); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSTwitterConnectRequest**)Z_Param__Result=UGSTwitterConnectRequest::SendTwitterConnectRequest(Z_Param_AccessSecret,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSTwitterConnectRequest(); \
	friend struct Z_Construct_UClass_UGSTwitterConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSTwitterConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSTwitterConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_INCLASS \
private: \
	static void StaticRegisterNativesUGSTwitterConnectRequest(); \
	friend struct Z_Construct_UClass_UGSTwitterConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSTwitterConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSTwitterConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSTwitterConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSTwitterConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSTwitterConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSTwitterConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSTwitterConnectRequest(UGSTwitterConnectRequest&&); \
	NO_API UGSTwitterConnectRequest(const UGSTwitterConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSTwitterConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSTwitterConnectRequest(UGSTwitterConnectRequest&&); \
	NO_API UGSTwitterConnectRequest(const UGSTwitterConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSTwitterConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSTwitterConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSTwitterConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessSecret() { return STRUCT_OFFSET(UGSTwitterConnectRequest, accessSecret); } \
	FORCEINLINE static uint32 __PPO__accessToken() { return STRUCT_OFFSET(UGSTwitterConnectRequest, accessToken); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSTwitterConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSTwitterConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSTwitterConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSTwitterConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSTwitterConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSTwitterConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSTwitterConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSTwitterConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSTwitterConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSTwitterConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5527_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5530_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSTwitterConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendUpdateMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Status); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSUpdateMessageRequest**)Z_Param__Result=UGSUpdateMessageRequest::SendUpdateMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MessageId,Z_Param_Status,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendUpdateMessageRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Status); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSUpdateMessageRequest**)Z_Param__Result=UGSUpdateMessageRequest::SendUpdateMessageRequest(Z_Param_MessageId,Z_Param_Status,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendUpdateMessageRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Status); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSUpdateMessageRequest**)Z_Param__Result=UGSUpdateMessageRequest::SendUpdateMessageRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_MessageId,Z_Param_Status,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendUpdateMessageRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MessageId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Status); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSUpdateMessageRequest**)Z_Param__Result=UGSUpdateMessageRequest::SendUpdateMessageRequest(Z_Param_MessageId,Z_Param_Status,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSUpdateMessageRequest(); \
	friend struct Z_Construct_UClass_UGSUpdateMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSUpdateMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSUpdateMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_INCLASS \
private: \
	static void StaticRegisterNativesUGSUpdateMessageRequest(); \
	friend struct Z_Construct_UClass_UGSUpdateMessageRequest_Statics; \
public: \
	DECLARE_CLASS(UGSUpdateMessageRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSUpdateMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSUpdateMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSUpdateMessageRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSUpdateMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSUpdateMessageRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSUpdateMessageRequest(UGSUpdateMessageRequest&&); \
	NO_API UGSUpdateMessageRequest(const UGSUpdateMessageRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSUpdateMessageRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSUpdateMessageRequest(UGSUpdateMessageRequest&&); \
	NO_API UGSUpdateMessageRequest(const UGSUpdateMessageRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSUpdateMessageRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSUpdateMessageRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSUpdateMessageRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__messageId() { return STRUCT_OFFSET(UGSUpdateMessageRequest, messageId); } \
	FORCEINLINE static uint32 __PPO__status() { return STRUCT_OFFSET(UGSUpdateMessageRequest, status); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSUpdateMessageRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSUpdateMessageRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSUpdateMessageRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSUpdateMessageRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5624_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5627_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSUpdateMessageRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendViberConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_DoNotRegisterForPush); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSViberConnectRequest**)Z_Param__Result=UGSViberConnectRequest::SendViberConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_DoNotRegisterForPush,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendViberConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_DoNotRegisterForPush); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSViberConnectRequest**)Z_Param__Result=UGSViberConnectRequest::SendViberConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_DoNotRegisterForPush,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendViberConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_DoNotRegisterForPush); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSViberConnectRequest**)Z_Param__Result=UGSViberConnectRequest::SendViberConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_DoNotRegisterForPush,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendViberConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_DoNotRegisterForPush); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSViberConnectRequest**)Z_Param__Result=UGSViberConnectRequest::SendViberConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_DoNotRegisterForPush,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSViberConnectRequest(); \
	friend struct Z_Construct_UClass_UGSViberConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSViberConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSViberConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_INCLASS \
private: \
	static void StaticRegisterNativesUGSViberConnectRequest(); \
	friend struct Z_Construct_UClass_UGSViberConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSViberConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSViberConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSViberConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSViberConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSViberConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSViberConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSViberConnectRequest(UGSViberConnectRequest&&); \
	NO_API UGSViberConnectRequest(const UGSViberConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSViberConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSViberConnectRequest(UGSViberConnectRequest&&); \
	NO_API UGSViberConnectRequest(const UGSViberConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSViberConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSViberConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSViberConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessToken() { return STRUCT_OFFSET(UGSViberConnectRequest, accessToken); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSViberConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSViberConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotRegisterForPush() { return STRUCT_OFFSET(UGSViberConnectRequest, doNotRegisterForPush); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSViberConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSViberConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSViberConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSViberConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSViberConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSViberConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSViberConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSViberConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5679_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5682_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSViberConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendWeChatConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OpenId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWeChatConnectRequest**)Z_Param__Result=UGSWeChatConnectRequest::SendWeChatConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_OpenId,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendWeChatConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OpenId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWeChatConnectRequest**)Z_Param__Result=UGSWeChatConnectRequest::SendWeChatConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_OpenId,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendWeChatConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OpenId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWeChatConnectRequest**)Z_Param__Result=UGSWeChatConnectRequest::SendWeChatConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_OpenId,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendWeChatConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AccessToken); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_OpenId); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWeChatConnectRequest**)Z_Param__Result=UGSWeChatConnectRequest::SendWeChatConnectRequest(Z_Param_AccessToken,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_OpenId,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSWeChatConnectRequest(); \
	friend struct Z_Construct_UClass_UGSWeChatConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSWeChatConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSWeChatConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_INCLASS \
private: \
	static void StaticRegisterNativesUGSWeChatConnectRequest(); \
	friend struct Z_Construct_UClass_UGSWeChatConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSWeChatConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSWeChatConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSWeChatConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSWeChatConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSWeChatConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSWeChatConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSWeChatConnectRequest(UGSWeChatConnectRequest&&); \
	NO_API UGSWeChatConnectRequest(const UGSWeChatConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSWeChatConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSWeChatConnectRequest(UGSWeChatConnectRequest&&); \
	NO_API UGSWeChatConnectRequest(const UGSWeChatConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSWeChatConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSWeChatConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSWeChatConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__accessToken() { return STRUCT_OFFSET(UGSWeChatConnectRequest, accessToken); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSWeChatConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSWeChatConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSWeChatConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__openId() { return STRUCT_OFFSET(UGSWeChatConnectRequest, openId); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSWeChatConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSWeChatConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSWeChatConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSWeChatConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSWeChatConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSWeChatConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSWeChatConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5780_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5783_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSWeChatConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendWindowsBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Platform); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWindowsBuyGoodsRequest**)Z_Param__Result=UGSWindowsBuyGoodsRequest::SendWindowsBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyCode,Z_Param_Platform,Z_Param_Receipt,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendWindowsBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Platform); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWindowsBuyGoodsRequest**)Z_Param__Result=UGSWindowsBuyGoodsRequest::SendWindowsBuyGoodsRequest(Z_Param_CurrencyCode,Z_Param_Platform,Z_Param_Receipt,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendWindowsBuyGoodsRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Platform); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWindowsBuyGoodsRequest**)Z_Param__Result=UGSWindowsBuyGoodsRequest::SendWindowsBuyGoodsRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_CurrencyCode,Z_Param_Platform,Z_Param_Receipt,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendWindowsBuyGoodsRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_CurrencyCode); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Platform); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Receipt); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SubUnitPrice); \
		P_GET_UBOOL(Z_Param_UniqueTransactionByPlayer); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWindowsBuyGoodsRequest**)Z_Param__Result=UGSWindowsBuyGoodsRequest::SendWindowsBuyGoodsRequest(Z_Param_CurrencyCode,Z_Param_Platform,Z_Param_Receipt,Z_Param_SubUnitPrice,Z_Param_UniqueTransactionByPlayer,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSWindowsBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSWindowsBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSWindowsBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSWindowsBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_INCLASS \
private: \
	static void StaticRegisterNativesUGSWindowsBuyGoodsRequest(); \
	friend struct Z_Construct_UClass_UGSWindowsBuyGoodsRequest_Statics; \
public: \
	DECLARE_CLASS(UGSWindowsBuyGoodsRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSWindowsBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSWindowsBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSWindowsBuyGoodsRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSWindowsBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSWindowsBuyGoodsRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSWindowsBuyGoodsRequest(UGSWindowsBuyGoodsRequest&&); \
	NO_API UGSWindowsBuyGoodsRequest(const UGSWindowsBuyGoodsRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSWindowsBuyGoodsRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSWindowsBuyGoodsRequest(UGSWindowsBuyGoodsRequest&&); \
	NO_API UGSWindowsBuyGoodsRequest(const UGSWindowsBuyGoodsRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSWindowsBuyGoodsRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSWindowsBuyGoodsRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSWindowsBuyGoodsRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__currencyCode() { return STRUCT_OFFSET(UGSWindowsBuyGoodsRequest, currencyCode); } \
	FORCEINLINE static uint32 __PPO__platform() { return STRUCT_OFFSET(UGSWindowsBuyGoodsRequest, platform); } \
	FORCEINLINE static uint32 __PPO__receipt() { return STRUCT_OFFSET(UGSWindowsBuyGoodsRequest, receipt); } \
	FORCEINLINE static uint32 __PPO__subUnitPrice() { return STRUCT_OFFSET(UGSWindowsBuyGoodsRequest, subUnitPrice); } \
	FORCEINLINE static uint32 __PPO__uniqueTransactionByPlayer() { return STRUCT_OFFSET(UGSWindowsBuyGoodsRequest, uniqueTransactionByPlayer); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSWindowsBuyGoodsRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSWindowsBuyGoodsRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSWindowsBuyGoodsRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSWindowsBuyGoodsRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5873_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5876_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSWindowsBuyGoodsRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendWithdrawChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWithdrawChallengeRequest**)Z_Param__Result=UGSWithdrawChallengeRequest::SendWithdrawChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendWithdrawChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWithdrawChallengeRequest**)Z_Param__Result=UGSWithdrawChallengeRequest::SendWithdrawChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendWithdrawChallengeRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWithdrawChallengeRequest**)Z_Param__Result=UGSWithdrawChallengeRequest::SendWithdrawChallengeRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendWithdrawChallengeRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ChallengeInstanceId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Message); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSWithdrawChallengeRequest**)Z_Param__Result=UGSWithdrawChallengeRequest::SendWithdrawChallengeRequest(Z_Param_ChallengeInstanceId,Z_Param_Message,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSWithdrawChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSWithdrawChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSWithdrawChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSWithdrawChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_INCLASS \
private: \
	static void StaticRegisterNativesUGSWithdrawChallengeRequest(); \
	friend struct Z_Construct_UClass_UGSWithdrawChallengeRequest_Statics; \
public: \
	DECLARE_CLASS(UGSWithdrawChallengeRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSWithdrawChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSWithdrawChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSWithdrawChallengeRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSWithdrawChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSWithdrawChallengeRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSWithdrawChallengeRequest(UGSWithdrawChallengeRequest&&); \
	NO_API UGSWithdrawChallengeRequest(const UGSWithdrawChallengeRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSWithdrawChallengeRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSWithdrawChallengeRequest(UGSWithdrawChallengeRequest&&); \
	NO_API UGSWithdrawChallengeRequest(const UGSWithdrawChallengeRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSWithdrawChallengeRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSWithdrawChallengeRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSWithdrawChallengeRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__challengeInstanceId() { return STRUCT_OFFSET(UGSWithdrawChallengeRequest, challengeInstanceId); } \
	FORCEINLINE static uint32 __PPO__message() { return STRUCT_OFFSET(UGSWithdrawChallengeRequest, message); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSWithdrawChallengeRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSWithdrawChallengeRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSWithdrawChallengeRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSWithdrawChallengeRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5945_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_5948_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSWithdrawChallengeRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendXBOXLiveConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StsTokenString); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSXBOXLiveConnectRequest**)Z_Param__Result=UGSXBOXLiveConnectRequest::SendXBOXLiveConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_StsTokenString,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendXBOXLiveConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StsTokenString); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSXBOXLiveConnectRequest**)Z_Param__Result=UGSXBOXLiveConnectRequest::SendXBOXLiveConnectRequest(Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_StsTokenString,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendXBOXLiveConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StsTokenString); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSXBOXLiveConnectRequest**)Z_Param__Result=UGSXBOXLiveConnectRequest::SendXBOXLiveConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_StsTokenString,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendXBOXLiveConnectRequest) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_DisplayName); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StsTokenString); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSXBOXLiveConnectRequest**)Z_Param__Result=UGSXBOXLiveConnectRequest::SendXBOXLiveConnectRequest(Z_Param_DisplayName,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Segments,Z_Param_StsTokenString,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSXBOXLiveConnectRequest(); \
	friend struct Z_Construct_UClass_UGSXBOXLiveConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSXBOXLiveConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSXBOXLiveConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_INCLASS \
private: \
	static void StaticRegisterNativesUGSXBOXLiveConnectRequest(); \
	friend struct Z_Construct_UClass_UGSXBOXLiveConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSXBOXLiveConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSXBOXLiveConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSXBOXLiveConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSXBOXLiveConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSXBOXLiveConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSXBOXLiveConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSXBOXLiveConnectRequest(UGSXBOXLiveConnectRequest&&); \
	NO_API UGSXBOXLiveConnectRequest(const UGSXBOXLiveConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSXBOXLiveConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSXBOXLiveConnectRequest(UGSXBOXLiveConnectRequest&&); \
	NO_API UGSXBOXLiveConnectRequest(const UGSXBOXLiveConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSXBOXLiveConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSXBOXLiveConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSXBOXLiveConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__displayName() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, displayName); } \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__stsTokenString() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, stsTokenString); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSXBOXLiveConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6004_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6007_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSXBOXLiveConnectRequest>();

#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendXboxOneConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Sandbox); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Token); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSXboxOneConnectRequest**)Z_Param__Result=UGSXboxOneConnectRequest::SendXboxOneConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Sandbox,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_Token,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendXboxOneConnectRequest) \
	{ \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Sandbox); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Token); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSXboxOneConnectRequest**)Z_Param__Result=UGSXboxOneConnectRequest::SendXboxOneConnectRequest(Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Sandbox,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_Token,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendXboxOneConnectRequestOnBehalfOf) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerId); \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Sandbox); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Token); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSXboxOneConnectRequest**)Z_Param__Result=UGSXboxOneConnectRequest::SendXboxOneConnectRequestOnBehalfOf(Z_Param_PlayerId,Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Sandbox,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_Token,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendXboxOneConnectRequest) \
	{ \
		P_GET_UBOOL(Z_Param_DoNotCreateNewPlayer); \
		P_GET_UBOOL(Z_Param_DoNotLinkToCurrentPlayer); \
		P_GET_UBOOL(Z_Param_ErrorOnSwitch); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Sandbox); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_Segments); \
		P_GET_UBOOL(Z_Param_SwitchIfPossible); \
		P_GET_UBOOL(Z_Param_SyncDisplayName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Token); \
		P_GET_OBJECT(UGameSparksScriptData,Z_Param_ScriptData); \
		P_GET_UBOOL(Z_Param_Durable); \
		P_GET_PROPERTY(UIntProperty,Z_Param_RequestTimeoutSeconds); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UGSXboxOneConnectRequest**)Z_Param__Result=UGSXboxOneConnectRequest::SendXboxOneConnectRequest(Z_Param_DoNotCreateNewPlayer,Z_Param_DoNotLinkToCurrentPlayer,Z_Param_ErrorOnSwitch,Z_Param_Sandbox,Z_Param_Segments,Z_Param_SwitchIfPossible,Z_Param_SyncDisplayName,Z_Param_Token,Z_Param_ScriptData,Z_Param_Durable,Z_Param_RequestTimeoutSeconds); \
		P_NATIVE_END; \
	}


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGSXboxOneConnectRequest(); \
	friend struct Z_Construct_UClass_UGSXboxOneConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSXboxOneConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSXboxOneConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_INCLASS \
private: \
	static void StaticRegisterNativesUGSXboxOneConnectRequest(); \
	friend struct Z_Construct_UClass_UGSXboxOneConnectRequest_Statics; \
public: \
	DECLARE_CLASS(UGSXboxOneConnectRequest, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameSparks"), NO_API) \
	DECLARE_SERIALIZER(UGSXboxOneConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSXboxOneConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSXboxOneConnectRequest) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSXboxOneConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSXboxOneConnectRequest); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSXboxOneConnectRequest(UGSXboxOneConnectRequest&&); \
	NO_API UGSXboxOneConnectRequest(const UGSXboxOneConnectRequest&); \
public:


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGSXboxOneConnectRequest(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGSXboxOneConnectRequest(UGSXboxOneConnectRequest&&); \
	NO_API UGSXboxOneConnectRequest(const UGSXboxOneConnectRequest&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGSXboxOneConnectRequest); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGSXboxOneConnectRequest); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGSXboxOneConnectRequest)


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__doNotCreateNewPlayer() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, doNotCreateNewPlayer); } \
	FORCEINLINE static uint32 __PPO__doNotLinkToCurrentPlayer() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, doNotLinkToCurrentPlayer); } \
	FORCEINLINE static uint32 __PPO__errorOnSwitch() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, errorOnSwitch); } \
	FORCEINLINE static uint32 __PPO__sandbox() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, sandbox); } \
	FORCEINLINE static uint32 __PPO__segments() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, segments); } \
	FORCEINLINE static uint32 __PPO__switchIfPossible() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, switchIfPossible); } \
	FORCEINLINE static uint32 __PPO__syncDisplayName() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, syncDisplayName); } \
	FORCEINLINE static uint32 __PPO__token() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, token); } \
	FORCEINLINE static uint32 __PPO__scriptData() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, scriptData); } \
	FORCEINLINE static uint32 __PPO__durable() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, durable); } \
	FORCEINLINE static uint32 __PPO__requestTimeoutSeconds() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, requestTimeoutSeconds); } \
	FORCEINLINE static uint32 __PPO__playerId() { return STRUCT_OFFSET(UGSXboxOneConnectRequest, playerId); }


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6101_PROLOG
#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_RPC_WRAPPERS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_INCLASS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_PRIVATE_PROPERTY_OFFSET \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_RPC_WRAPPERS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_INCLASS_NO_PURE_DECLS \
	TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h_6104_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMESPARKS_API UClass* StaticClass<class UGSXboxOneConnectRequest>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID TradingCardGame_Plugins_GameSparks_Source_GameSparks_Private_GSApi_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
