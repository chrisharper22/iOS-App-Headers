//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGPollStickerEditableVoteView, UITextView;

@protocol IGPollStickerVoteViewDelegate <NSObject>
- (void)pollStickerVoteViewDidRequestDismiss:(IGPollStickerEditableVoteView *)arg1;
- (void)pollStickerVoteView:(IGPollStickerEditableVoteView *)arg1 willBeginEditingTextView:(UITextView *)arg2;
@end
