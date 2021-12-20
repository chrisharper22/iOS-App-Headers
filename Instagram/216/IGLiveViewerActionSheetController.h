//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGActionSheetController, IGLivePlaybackLoggingContext, IGUserSession, NSString, UIViewController;
@protocol IGLiveViewerActionSheetControllerDelegate;

@interface IGLiveViewerActionSheetController : NSObject
{
    IGUserSession *_userSession;
    NSString *_module;
    UIViewController *_presentingViewController;
    IGActionSheetController *_controller;
    _Bool _passUnifiedActionSheetQE;
    _Bool _checkedUnifiedActionSheetQE;
    id <IGLiveViewerActionSheetControllerDelegate> _delegate;
    IGLivePlaybackLoggingContext *_playbackLoggingContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGLivePlaybackLoggingContext *playbackLoggingContext; // @synthesize playbackLoggingContext=_playbackLoggingContext;
@property(nonatomic) __weak id <IGLiveViewerActionSheetControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_reportActionWithComment:(id)arg1 module:(id)arg2;
- (id)_removeSelfComment:(id)arg1 broadcastId:(id)arg2 asViewer:(_Bool)arg3;
- (id)_turnoffCommentingForUser:(id)arg1 broadcastId:(id)arg2;
- (id)_removeUser:(id)arg1 broadcastId:(id)arg2;
- (id)_replyToUser:(id)arg1 commentPk:(id)arg2 asViewer:(_Bool)arg3;
- (id)_followActionFromComment:(id)arg1 module:(id)arg2 asViewer:(_Bool)arg3;
- (void)_shareToTappedWithBroadcast:(id)arg1;
- (void)_copyLinkTappedWithBroadcast:(id)arg1;
- (void)_showDeleteItemAlert:(id)arg1;
- (void)_showReportVideoActionSheetForBroadcast:(id)arg1;
- (void)prepareForReuse;
- (void)presentViewUserProfileActionSheetForBroadcast:(id)arg1 users:(id)arg2;
- (void)presentMoreOptionsActionSheetForBroadcast:(id)arg1 fromEntryPoint:(long long)arg2 moderatorManager:(id)arg3;
- (_Bool)presentActionSheetForComment:(id)arg1 inBroadcast:(id)arg2 asViewer:(_Bool)arg3 isCommenterGuest:(_Bool)arg4 asModerator:(_Bool)arg5 mutedUserPks:(id)arg6;
- (id)initWithUserSession:(id)arg1 presentingViewController:(id)arg2 module:(id)arg3;

@end

