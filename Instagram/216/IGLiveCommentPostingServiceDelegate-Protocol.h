//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveCommentModel, IGLiveCommentPostingService;

@protocol IGLiveCommentPostingServiceDelegate <NSObject>
- (void)commentPostingService:(IGLiveCommentPostingService *)arg1 didFailToPostComment:(IGLiveCommentModel *)arg2;
- (void)commentPostingService:(IGLiveCommentPostingService *)arg1 didSuccessfullyPostComment:(IGLiveCommentModel *)arg2 commentToReplace:(IGLiveCommentModel *)arg3;
@end

