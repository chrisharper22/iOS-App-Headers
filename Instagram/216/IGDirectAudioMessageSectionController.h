//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "IGDirectMessageSectionController.h"

#import "IGDirectAudioMessageCellSeekGestureDelegate-Protocol.h"
#import "IGDirectAudioMessagePlaybackServiceListener-Protocol.h"

@class IGDirectAudioMessagePlaybackService, IGDirectAudioMessageViewModel, IGDirectUIMessageMetadata, NSString;

@interface IGDirectAudioMessageSectionController : IGDirectMessageSectionController <IGDirectAudioMessagePlaybackServiceListener, IGDirectAudioMessageCellSeekGestureDelegate>
{
    IGDirectAudioMessagePlaybackService *_audioPlaybackService;
    IGDirectAudioMessageViewModel *_audioMessageViewModel;
    IGDirectUIMessageMetadata *_messageMetadata;
}

- (void).cxx_destruct;
- (void)audioMessageCell:(id)arg1 didFinishSeekGestureWithProgress:(double)arg2;
- (void)audioMessageCell:(id)arg1 didUpdateSeekGestureWithProgress:(double)arg2;
- (void)audioMessageCell:(id)arg1 didBeginSeekGestureWithProgress:(double)arg2;
- (void)didPlayToEndWithMetadata:(id)arg1;
- (void)didUpdateAudioMessageProgressWithMetadata:(id)arg1 progress:(double)arg2;
- (void)didUpdateAudioMessagePlaybackStateWithMetadata:(id)arg1;
- (void)handleSingleTapOfSendingOrSentMessageCell:(id)arg1;
- (void)configureCell:(id)arg1 withViewModel:(id)arg2;
- (Class)cellClass;
- (id)initWithComponents:(id)arg1 audioPlaybackService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
