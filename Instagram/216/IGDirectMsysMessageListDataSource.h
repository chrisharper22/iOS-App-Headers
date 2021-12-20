//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageDisplayAnnouncementDelegate-Protocol.h"
#import "IGDirectMessageListDataSource-Protocol.h"
#import "IGDirectShareRecipientProvider-Protocol.h"

@class IGDirectAudioMessagePlaybackService, IGDirectDataSubscriptionPipe, IGDirectLocalSendSpeedPerformanceLogger, IGDirectMessageStateDateFormatter, IGDirectMsysMessagingMailbox, IGDirectMsysThread, IGDirectOneTraceIDLogger, IGDirectShhModeLearnMoreViewModel, IGDirectThreadKey, IGDirectThreadListMessageDataSource, IGDirectThreadNavigationPerfComponents, IGDirectThreadNullStateViewModel, IGDirectThreadViewMessagesClientStateManager, IGDirectUIThread, IGUserSession, NSArray, NSString;
@protocol IGDirectInteropFeatureGating, IGDirectMessageListDataSourceDelegate, IGDirectMsysMessageListLoading, IGDirectThreadMessageListDisplayStateProviding, IGDirectVaulting, IGSubscriptionToken, IGUserLauncherSetProviding;

@interface IGDirectMsysMessageListDataSource : NSObject <IGDirectMessageDisplayAnnouncementDelegate, IGDirectShareRecipientProvider, IGDirectMessageListDataSource>
{
    IGUserSession *_userSession;
    id <IGUserLauncherSetProviding> _launcherSet;
    IGDirectMsysMessagingMailbox *_mailboxProvider;
    IGDirectThreadKey *_directThreadKey;
    id <IGDirectMsysMessageListLoading> _messageListLoader;
    IGDirectDataSubscriptionPipe *_messageListPipe;
    id <IGSubscriptionToken> _messageListSubscriber;
    id <IGDirectInteropFeatureGating> _featureGating;
    IGDirectAudioMessagePlaybackService *_audioMessagePlaybackService;
    IGDirectMessageStateDateFormatter *_messageStateDateFormatter;
    IGDirectThreadViewMessagesClientStateManager *_messagesClientStateManager;
    id <IGDirectThreadMessageListDisplayStateProviding> _messageListDisplayStateProvider;
    IGDirectThreadNavigationPerfComponents *_perfComponents;
    NSArray *_viewModels;
    IGDirectMsysThread *_currentThreadModel;
    long long _minTimestampMs;
    long long _maxTimestampMs;
    IGDirectLocalSendSpeedPerformanceLogger *_localSendSpeedLogger;
    IGDirectOneTraceIDLogger *_e2eLogger;
    id <IGDirectVaulting> _vault;
    _Bool _shhModeAvailable;
    id <IGDirectMessageListDataSourceDelegate> _delegate;
    IGDirectUIThread *_thread;
    IGDirectThreadListMessageDataSource *_messageDataSource;
    IGDirectThreadNullStateViewModel *_nullStateViewModel;
    IGDirectShhModeLearnMoreViewModel *_shhMoreLearnMoreViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectShhModeLearnMoreViewModel *shhModeLearnMoreViewModel; // @synthesize shhModeLearnMoreViewModel=_shhMoreLearnMoreViewModel;
@property(readonly, nonatomic) IGDirectOneTraceIDLogger *e2eLogger; // @synthesize e2eLogger=_e2eLogger;
@property(readonly, nonatomic) IGDirectLocalSendSpeedPerformanceLogger *localSendSpeedLogger; // @synthesize localSendSpeedLogger=_localSendSpeedLogger;
@property(readonly, nonatomic) IGDirectThreadNullStateViewModel *nullStateViewModel; // @synthesize nullStateViewModel=_nullStateViewModel;
@property(readonly, nonatomic) _Bool shhModeAvailable; // @synthesize shhModeAvailable=_shhModeAvailable;
@property(readonly, nonatomic) IGDirectThreadListMessageDataSource *messageDataSource; // @synthesize messageDataSource=_messageDataSource;
@property(readonly, nonatomic) IGDirectUIThread *thread; // @synthesize thread=_thread;
@property(nonatomic) __weak id <IGDirectMessageListDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_processViewModelUpdate:(id)arg1;
- (void)_logInboxToThreadTTRCForViewModel:(id)arg1;
- (void)_logPushNotificationToThreadTTRCForViewModel:(id)arg1;
- (void)_logLocalSendSpeedWithTextViewModel:(id)arg1;
- (void)willDisplayMessageWithMessageViewModel:(id)arg1;
- (id)shareRecipient;
- (id)objectsForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (_Bool)shouldUpdateLastSeenMessage;
- (_Bool)isMessageUnseenForMessageMetadata:(id)arg1 forShhMode:(_Bool)arg2;
- (id)lastSeenMessageMetadataForNewestPublishedMessageWithIsShhMessage:(_Bool)arg1;
- (id)lastMessageMetadataForVisibleMessageViewModels:(id)arg1 isShhMessage:(_Bool)arg2;
- (id)mostRecentMessageSenderProfileImage;
- (id)messageViewModels;
- (void)stopMonitoringForDataChanges;
- (void)startMonitoringForDataChanges;
- (void)loadPreviousMessages;
- (id)initWithUserSession:(id)arg1 directThreadKey:(id)arg2 messageListLoader:(id)arg3 messageListPipe:(id)arg4 vault:(id)arg5 perfComponents:(id)arg6 messagesClientStateManager:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
