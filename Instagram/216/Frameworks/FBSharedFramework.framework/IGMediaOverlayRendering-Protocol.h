//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class IGCommentInformModel;
@protocol IGContentGateableMediaItem, IGMediaOverlayDelegate;

@protocol IGMediaOverlayRendering <NSObject>
+ (double)bannerHeightForMediaItem:(id <IGContentGateableMediaItem>)arg1 width:(double)arg2;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) __weak id <IGMediaOverlayDelegate> delegate;
- (void)configureWithCommentInformModel:(IGCommentInformModel *)arg1;
- (void)configureWithMediaItem:(id <IGContentGateableMediaItem>)arg1 renderType:(unsigned long long)arg2;
- (void)configureWithMediaItem:(id <IGContentGateableMediaItem>)arg1 renderType:(unsigned long long)arg2 cornerRadius:(double)arg3;
- (void)configureWithMediaItem:(id <IGContentGateableMediaItem>)arg1 renderType:(unsigned long long)arg2 cornerRadius:(double)arg3 insets:(struct UIEdgeInsets)arg4;
@end

