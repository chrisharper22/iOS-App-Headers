//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGCreativeTransformationsRendering-Protocol.h"
#import "IGCreativeTransformationsRenderingDelegate-Protocol.h"

@class NSString, UIView;
@protocol IGCreativeTransformationsPlayback, IGCreativeTransformationsRendering, IGCreativeTransformationsRenderingDelegate;

@interface IGCreativeTransformationsController : NSObject <IGCreativeTransformationsRenderingDelegate, IGCreativeTransformationsRendering>
{
    id <IGCreativeTransformationsRendering> _renderingController;
    id <IGCreativeTransformationsPlayback> _audioPlayer;
    id <IGCreativeTransformationsRenderingDelegate> _renderingControllerProxyDelegate;
}

- (void).cxx_destruct;
- (void)_overwriteDelegates;
- (void)renderingControllerDidStartPlayback:(id)arg1;
- (void)renderingControllerHasLoopedIn:(id)arg1;
- (void)renderingControllerIsReadyToPlayback:(id)arg1;
- (void)renderingControllerShouldFallbackRendering:(id)arg1;
- (void)renderingController:(id)arg1 didTapToOpenMultiDocumentWithName:(id)arg2 closeMultiDocumentBlock:(CDUnknownBlockType)arg3;
- (void)renderingController:(id)arg1 didTapNonTouchableRegion:(id)arg2;
- (void)renderingController:(id)arg1 didTapTouchableRegionAtPoint:(struct CGPoint)arg2 type:(id)arg3 value:(id)arg4 previouslyTappedValue:(id)arg5;
- (void)playWithDelay:(double)arg1;
- (void)setAudioEnabled:(_Bool)arg1;
- (double)duration;
- (void)reload;
- (void)prepareForPlayback;
- (void)seekToBeginning;
- (_Bool)isPlaying;
- (void)stop;
- (void)pause;
- (void)play;
@property(nonatomic) __weak id <IGCreativeTransformationsRenderingDelegate> delegate;
@property(readonly, nonatomic) UIView *view;
- (id)initWithRenderingController:(id)arg1 audioPlayer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

