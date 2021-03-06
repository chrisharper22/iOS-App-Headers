//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGMediaCompositionViewStickerLayer-Protocol.h>
#import <FBSharedFramework/IGStickerContainerViewDelegate-Protocol.h>

@class IGStickerContainerView, NSArray, NSString;
@protocol IGMediaCompositionViewStickerLayerDelegate;

@interface IGMediaCompositionViewDefaultStickerLayer : NSObject <IGStickerContainerViewDelegate, IGMediaCompositionViewStickerLayer>
{
    id <IGMediaCompositionViewStickerLayerDelegate> _delegate;
    IGStickerContainerView *_stickerContainerView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGStickerContainerView *stickerContainerView; // @synthesize stickerContainerView=_stickerContainerView;
@property(nonatomic) __weak id <IGMediaCompositionViewStickerLayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stickerContainerView:(id)arg1 stickerWillBeRemovedFromContainer:(id)arg2;
- (void)stickerContainerView:(id)arg1 stickerWasAddedToContainer:(id)arg2;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
- (void)updateMediaRegion:(struct IGRegion)arg1;
- (void)transformToMatchMediaSpace:(struct CGAffineTransform)arg1;
- (void)recoverStickers:(id)arg1 withSceneSpaceToMediaSpaceTransform:(struct CGAffineTransform)arg2 mediaRegion:(struct IGRegion)arg3;
- (void)clear;
@property(readonly, nonatomic) NSArray *stickers;
@property(readonly, nonatomic) _Bool isInitialized;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

