//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IGLiveCommentTextFieldContainerView, NSString;

@protocol IGLiveCommentTextFieldContainerViewDelegate <NSObject>
- (void)commentTextFieldContainerViewDidChangeText:(IGLiveCommentTextFieldContainerView *)arg1 didChangeText:(NSString *)arg2 cursorIndex:(long long)arg3;
- (void)commentTextFieldContainerView:(IGLiveCommentTextFieldContainerView *)arg1 didPostCommentText:(NSString *)arg2;
- (void)commentTextFieldContainerView:(IGLiveCommentTextFieldContainerView *)arg1 didChangeEditing:(_Bool)arg2;
- (void)commentTextFieldContainerViewDidAnimateButtonVisibility:(IGLiveCommentTextFieldContainerView *)arg1;
- (void)commentTextFieldContainerViewDidUpdateButtonVisibility:(IGLiveCommentTextFieldContainerView *)arg1;
@end

