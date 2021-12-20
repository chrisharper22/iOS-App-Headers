//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMessageViewModelProtocol-Protocol.h"
#import "IGListDiffable-Protocol.h"

@class IGDirectMessageCellViewModel, IGDirectUIMessageMetadata, IGDirectUIThread, IGDirectVideoCallEvent, IGVideoCallKey, NSString;
@protocol IGDirectVideoCallEventDelegate, IGUserLauncherSetProviding;

@interface IGDirectVideoCallEventViewModel : NSObject <IGListDiffable, IGDirectMessageViewModelProtocol>
{
    _Bool _threadHasAudioOnlyCall;
    IGDirectVideoCallEvent *_videoCallEvent;
    unsigned long long _iconAsset;
    _Bool _isUserSender;
    IGDirectUIThread *_thread;
    _Bool _isShhMode;
    id <IGUserLauncherSetProviding> _launcherSetProvider;
    _Bool _showTapToJoin;
    _Bool _tappable;
    _Bool _canInitiateCall;
    _Bool _isMissedCall;
    _Bool _shouldShowCTA;
    NSString *_videoCallId;
    NSString *_title;
    NSString *_subtitle;
    NSString *_ctaTitle;
    id <IGDirectVideoCallEventDelegate> _delegate;
    IGVideoCallKey *_videoCallKey;
    IGDirectMessageCellViewModel *_messageCellViewModel;
    IGDirectUIMessageMetadata *_messageMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectUIMessageMetadata *messageMetadata; // @synthesize messageMetadata=_messageMetadata;
@property(readonly, nonatomic) IGDirectMessageCellViewModel *messageCellViewModel; // @synthesize messageCellViewModel=_messageCellViewModel;
@property(readonly, nonatomic) _Bool shouldShowCTA; // @synthesize shouldShowCTA=_shouldShowCTA;
@property(readonly, nonatomic) _Bool isMissedCall; // @synthesize isMissedCall=_isMissedCall;
@property(readonly, nonatomic) _Bool canInitiateCall; // @synthesize canInitiateCall=_canInitiateCall;
@property(readonly, nonatomic) IGVideoCallKey *videoCallKey; // @synthesize videoCallKey=_videoCallKey;
@property(readonly, nonatomic) _Bool tappable; // @synthesize tappable=_tappable;
@property(readonly, nonatomic) _Bool showTapToJoin; // @synthesize showTapToJoin=_showTapToJoin;
@property(readonly, nonatomic) IGDirectUIThread *thread; // @synthesize thread=_thread;
@property(nonatomic) __weak id <IGDirectVideoCallEventDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) IGDirectVideoCallEvent *videoCallEvent; // @synthesize videoCallEvent=_videoCallEvent;
@property(readonly, nonatomic) _Bool threadHasAudioOnlyCall; // @synthesize threadHasAudioOnlyCall=_threadHasAudioOnlyCall;
@property(readonly, nonatomic) NSString *ctaTitle; // @synthesize ctaTitle=_ctaTitle;
@property(readonly, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *videoCallId; // @synthesize videoCallId=_videoCallId;
- (double)_contentWidth;
- (struct UIEdgeInsets)_insets;
- (id)accessibilityLabelText;
- (void)handleOpenCall;
- (id)callEventIcon;
- (id)callEventIconColor;
- (id)module;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
- (id)contentType;
- (double)contentHeight;
@property(readonly, nonatomic) struct CGSize contentSize;
- (id)initWithVideoCallEvent:(id)arg1 messageCellViewModel:(id)arg2 showTapToJoin:(_Bool)arg3 currentUserPk:(id)arg4 thread:(id)arg5 canInitiateCall:(_Bool)arg6 isMissedCall:(_Bool)arg7 isUserSender:(_Bool)arg8 isShhMode:(_Bool)arg9 launcherSetProvider:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
