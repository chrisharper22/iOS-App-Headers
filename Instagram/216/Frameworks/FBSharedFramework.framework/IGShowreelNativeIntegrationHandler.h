//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/SNPlaybackStateListener-Protocol.h>
#import <FBSharedFramework/SNRenderingFallbackListener-Protocol.h>
#import <FBSharedFramework/SNTouchEventHandlingListener-Protocol.h>

@class IGUserSession, NSMutableDictionary, NSString, SNPlayerController;
@protocol IGShowreelNativeIntegrationHandlerDelegate, IGShowreelNativeInteractivityHandlerDelegate, IGShowreelNativeMultiDocumentHandlerDelegate, IGShowreelNativePlayerControllerProvider, SNAnimationInteractionActioning;

@interface IGShowreelNativeIntegrationHandler : NSObject <SNPlaybackStateListener, SNTouchEventHandlingListener, SNRenderingFallbackListener>
{
    id <IGShowreelNativeIntegrationHandlerDelegate> _delegate;
    IGUserSession *_userSession;
    unsigned long long _placement;
    id <IGShowreelNativePlayerControllerProvider> _playerControllerProvider;
    NSMutableDictionary *_cachedSNPlayerControllers;
    NSMutableDictionary *_cachedSNPlayerControllerErrors;
    SNPlayerController *_multiDocumentSNPlayerController;
    id <SNAnimationInteractionActioning> _multiDocumentSNAnimationInteractionAction;
    NSString *_multiDocumentName;
    struct CGPoint _touchedPoint;
    NSString *_valueForTouchedPoint;
    _Bool _usePlayerControllerStore;
    double _durationIncrease;
    id <IGShowreelNativeMultiDocumentHandlerDelegate> _multiDocumentDelegate;
    id <IGShowreelNativeInteractivityHandlerDelegate> _interactivityDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGShowreelNativeInteractivityHandlerDelegate> interactivityDelegate; // @synthesize interactivityDelegate=_interactivityDelegate;
@property(nonatomic) __weak id <IGShowreelNativeMultiDocumentHandlerDelegate> multiDocumentDelegate; // @synthesize multiDocumentDelegate=_multiDocumentDelegate;
- (id)_createContextForShowreelNativePluginsWithModule:(id)arg1;
- (id)_playerControllerFromStore;
- (id)_playerControllerFromCache;
- (void)playerControllerCanFallbackRendering:(id)arg1;
- (void)handleCloseCurrentDocumentWithAction:(id)arg1;
- (void)handleLaunchDocumentNamed:(id)arg1 inPlayer:(id)arg2 action:(id)arg3;
- (void)handleLaunchNativeViewWithType:(id)arg1 value:(id)arg2 action:(id)arg3;
- (void)handleNonInteractionTouchEvent;
- (void)playerController:(id)arg1 transitionFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;
- (void)playerControllerDidPausePlayback:(id)arg1;
- (void)playerControllerDidStartPlayback:(id)arg1;
- (void)playerController:(id)arg1 didFailToPrepareRenderingWithError:(id)arg2;
- (void)playerControllerStartPrepareRendering:(id)arg1;
- (void)playerControllerDidLoadAsset:(id)arg1;
- (void)playerController:(id)arg1 didFailWithError:(id)arg2;
- (void)playerControllerIsReadyToPlayback:(id)arg1;
- (void)playerControllerStartLoadAsset:(id)arg1;
- (double)playbackDuration;
- (_Bool)isShowingMultiDocument;
- (id)errorFromMedia:(id)arg1;
- (unsigned long long)currentPlaybackState;
- (void)closeMultiDocument;
- (void)touchableRegionsOnComplete:(CDUnknownBlockType)arg1;
- (void)touchAtPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)logImpressionStart;
- (void)reload;
- (void)prepareForPlayback;
- (id)playerView;
- (void)seekAnimationToBeginning;
- (_Bool)isAnimationPlaying;
- (void)stopAnimation;
- (void)pauseAnimation;
- (void)play;
- (void)_configureWithSNPlayerControllerProviderUsingPlayerControllerStore:(id)arg1;
- (void)_configureWithSNPlayerControllerProviderPeekPrepareNext:(id)arg1;
- (void)configureWithSNPlayerControllerProvider:(id)arg1;
- (void)prepareNextItem:(id)arg1;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 placement:(unsigned long long)arg3 usePlayerControllerStore:(_Bool)arg4;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 placement:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

