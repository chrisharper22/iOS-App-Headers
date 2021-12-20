//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGActivityStatusSettingService, IGDirectMessageStateDateFormatter, IGDirectNicknameManager, IGUserStore, NSString;
@protocol IGAnalyticsEventLoggingProtocol, IGDirectInteropFeatureGating, IGUserLauncherSetProviding, OS_dispatch_queue;

@interface IGDirectInboxViewModelGenerator : NSObject
{
    id <IGDirectInteropFeatureGating> _featureSetProvider;
    IGUserStore *_userStore;
    IGDirectNicknameManager *_nicknameManager;
    IGDirectMessageStateDateFormatter *_messageStateDateFormatter;
    NSString *_analyticsModule;
    long long _accountType;
    id <IGUserLauncherSetProviding> _launcherSetProviding;
    id <IGAnalyticsEventLoggingProtocol> _analyticsLogger;
    NSObject<OS_dispatch_queue> *_queue;
    IGActivityStatusSettingService *_activityStatusSettingService;
}

+ (id)threadViewModelForThread:(id)arg1 accessibilityIdentifier:(id)arg2 inboxConfig:(id)arg3 selectedTab:(id)arg4 currentUser:(id)arg5 userStore:(id)arg6 shouldShowPlayButtonWithText:(_Bool)arg7 featureSetProvider:(id)arg8 shouldShowAsEditing:(_Bool)arg9 isSelectedInEditing:(_Bool)arg10 lastViewedUnseenVisualMessageBelongsToCurrentThread:(_Bool)arg11 hasReplayableVisualMessages:(_Bool)arg12 currentPreloadContextIdentifier:(id)arg13 unexpiredStoryStatus:(unsigned long long)arg14 typingStatuses:(id)arg15 presenceStateByUserId:(id)arg16 statusesByUserId:(id)arg17 analyticsModule:(id)arg18 index:(unsigned long long)arg19 activeVideoCall:(_Bool)arg20 isAudioCall:(_Bool)arg21 isBusinessMessagingHighVolumeRateLimit:(_Bool)arg22 nicknameManager:(id)arg23 messageStateDateFormatter:(id)arg24 launcherSetProviding:(id)arg25;
- (void).cxx_destruct;
- (id)updateViewModels:(id)arg1 withTypingStatuses:(id)arg2 generatorInput:(id)arg3;
- (id)updatedViewModels:(id)arg1 withPresenceUpdate:(id)arg2 tabs:(id)arg3 selectedTab:(id)arg4 generatorInput:(id)arg5;
- (id)viewModelsForGeneratorInput:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (id)initWithFeatureSetProvider:(id)arg1 accountType:(long long)arg2 userStore:(id)arg3 nicknameManager:(id)arg4 messageStateDateFormatter:(id)arg5 activityStatusSettingService:(id)arg6 analyticsModule:(id)arg7 queue:(id)arg8 launcherSetProviding:(id)arg9 analyticsLogger:(id)arg10;

@end

