//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGDirectMsysMessageSending-Protocol.h"

@class IGDirectMsysMessagingMailbox, IGUserSessionProvider, NSString;
@protocol IGDirectGalleryMediaRequesting, IGDirectMessageSendingListener;

@interface IGDirectMsysSecureMessageSendService : NSObject <IGDirectMsysMessageSending>
{
    IGDirectMsysMessagingMailbox *_mailboxProvider;
    id <IGDirectGalleryMediaRequesting> _mediaRequester;
    IGUserSessionProvider *_userSessionProvider;
    id <IGDirectMessageSendingListener> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectMessageSendingListener> delegate; // @synthesize delegate=_delegate;
- (void)userSessionWillEnd;
- (void)manuallyRetryMessageSendWithMessageId:(id)arg1;
- (void)cancelMessageSendWithMessageId:(id)arg1;
- (void)sendContentShareWithContentId:(id)arg1 contentType:(long long)arg2 threadTarget:(id)arg3;
- (void)_sendVideoWithVideoComposition:(id)arg1 imageEncoding:(id)arg2 previewImageEncoding:(id)arg3 threadTarget:(id)arg4 offlineThreadingIdProvider:(CDUnknownBlockType)arg5 e2eloggerLogId:(id)arg6;
- (void)sendPermanentVideoWithAsset:(id)arg1 previewImageEncoding:(id)arg2 threadTarget:(id)arg3 offlineThreadingIdProvider:(CDUnknownBlockType)arg4 e2eloggerLogId:(id)arg5;
- (void)sendPermanentPhotoWithAsset:(id)arg1 previewImageEncoding:(id)arg2 threadTarget:(id)arg3 offlineThreadingIdProvider:(CDUnknownBlockType)arg4 e2eloggerLogId:(id)arg5;
- (void)sendPermanentPhotoWithImageEncoding:(id)arg1 threadTarget:(id)arg2 offlineThreadingIdProvider:(CDUnknownBlockType)arg3 e2eloggerLogId:(id)arg4;
- (void)sendAudioWithURL:(id)arg1 waveform:(id)arg2 duration:(double)arg3 threadTarget:(id)arg4 offlineThreadingIdProvider:(CDUnknownBlockType)arg5 e2eloggerLogId:(id)arg6;
- (void)sendMessageContent:(id)arg1 toThreadTarget:(id)arg2 offlineThreadingIdProvider:(CDUnknownBlockType)arg3 e2eloggerLogId:(id)arg4;
- (void)_createMsysConfirmedThreadIdentifierFromOptimisticThreadIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_sendMessageContent:(id)arg1 toThreadTarget:(id)arg2 offlineThreadingIdProvider:(CDUnknownBlockType)arg3 e2eloggerLogId:(id)arg4;
- (id)initWithMailboxProvider:(id)arg1 mediaRequester:(id)arg2 userSessionProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
