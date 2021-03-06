//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCoPresenceSignalingDelegate-Protocol.h"
#import "IGUserSessionEndingObject-Protocol.h"

@class IGActivityStatusSettingService, IGBanyanRankingService, IGCoPresenceQPLLogger, IGCoPresenceSignalingLogger, IGCoPresenceSignalingService, IGCoPresenceThreadPresencePublisher, IGPresenceManager, IGRankingService, IGUserStore, NSDictionary, NSMutableDictionary, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGCoPresenceManagerAnnouncer, IGUserLauncherSetProviding;

@interface IGCoPresenceManager : NSObject <IGCoPresenceSignalingDelegate, IGUserSessionEndingObject>
{
    NSString *_selfUserPk;
    _Bool _threadPresenceEnabled;
    _Bool _appPresenceEnabled;
    _Bool _shouldEnablePresenceForCoWatchInThread;
    IGActivityStatusSettingService *_activityStatusSettingService;
    id <IGUserLauncherSetProviding> _launcherSet;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    IGUserStore *_userStore;
    IGCoPresenceSignalingService *_copresenceSignalingService;
    NSMutableDictionary *_mostRecentThreadPresentUserId;
    IGPresenceManager *_presenceManager;
    NSMutableDictionary *_threadPresenceStatesForThreadId;
    NSMutableDictionary *_usersForThread;
    id <IGCoPresenceManagerAnnouncer> _announcer;
    _Bool _permissionsGating;
    NSString *_currentThreadFbid;
    long long _currentThreadType;
    IGCoPresenceSignalingLogger *_signalingLogger;
    NSMutableDictionary *_sessionLoggerForThreadId;
    IGCoPresenceQPLLogger *_qplLogger;
    IGRankingService *_rankingService;
    IGBanyanRankingService *_banyanRankingService;
    NSString *_currentThreadId;
    NSString *_presenceSessionId;
    NSDictionary *_threadPresentUsers;
    IGCoPresenceThreadPresencePublisher *_threadPresencePublisher;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGCoPresenceThreadPresencePublisher *threadPresencePublisher; // @synthesize threadPresencePublisher=_threadPresencePublisher;
@property(readonly, nonatomic) NSDictionary *threadPresentUsers; // @synthesize threadPresentUsers=_threadPresentUsers;
@property(readonly, nonatomic) NSString *presenceSessionId; // @synthesize presenceSessionId=_presenceSessionId;
@property(readonly, nonatomic) NSString *currentThreadId; // @synthesize currentThreadId=_currentThreadId;
- (void)_updateMostRecentThreadPresentUserIdForThreadId:(id)arg1 updatedThreadPresenceStates:(id)arg2;
- (_Bool)_shouldShowThreadCopresenceForUser:(id)arg1 threadId:(id)arg2;
- (id)_rankLoggingInfoForUser:(id)arg1 threadId:(id)arg2;
- (unsigned long long)_rankForUser:(id)arg1 banyanRankingType:(long long)arg2;
- (unsigned long long)_rankForUser:(id)arg1 threadId:(id)arg2 rankingType:(long long)arg3;
- (void)_setupLoggerForCallSession:(id)arg1;
- (void)_stopListeningForPresenceUpdates;
- (void)_startListeningForPresenceUpdates;
- (void)_announcePresence:(id)arg1 isPresent:(_Bool)arg2;
- (void)_didEndCoPresenceSession:(id)arg1;
- (void)_didBeginCoPresenceSession:(id)arg1 threadType:(long long)arg2 userPk:(id)arg3;
- (void)userSessionWillEnd;
- (void)handleThreadPresenceUpdate:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)loggingContextForThread:(id)arg1;
- (void)didEndVideoCallSession;
- (void)didReceiveIncomingVideoCall:(id)arg1 isForeground:(_Bool)arg2 selfPresenceEnabled:(_Bool)arg3;
- (void)didJoinVideoCall:(id)arg1;
- (void)willStartVideoCallSession:(id)arg1;
- (void)didStartCall;
- (id)mostRecentThreadPresentUserForThreadId:(id)arg1;
- (_Bool)isAudioDropInCapableForThreadId:(id)arg1 userPk:(id)arg2;
- (id)threadPresentNamesForThreadId:(id)arg1;
- (id)threadPresentUsersForThreadId:(id)arg1;
- (_Bool)isThreadPresent:(id)arg1 userPk:(id)arg2;
- (_Bool)isInAudienceApp:(id)arg1;
- (_Bool)isInAudienceForThread:(id)arg1 userPk:(id)arg2;
- (void)didLeaveThreadWIthId:(id)arg1 threadIdV2:(id)arg2 isInteropThread:(_Bool)arg3 forceful:(_Bool)arg4 isGroup:(_Bool)arg5;
- (void)didEnterThreadWithId:(id)arg1 threadIdV2:(id)arg2 userIds:(id)arg3 isInteropThread:(_Bool)arg4 isGroup:(_Bool)arg5;
- (id)initWithUserStore:(id)arg1 realtimeClient:(id)arg2 networker:(id)arg3 selfUserPk:(id)arg4 presenceManager:(id)arg5 activityStatusService:(id)arg6 launcherSet:(id)arg7 analyticsLogger:(id)arg8 rankingService:(id)arg9 banyanRankingService:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

