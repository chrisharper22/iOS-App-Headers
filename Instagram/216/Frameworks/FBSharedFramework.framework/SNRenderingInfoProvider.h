//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/SNPlayerViewDelegate-Protocol.h>
#import <FBSharedFramework/SNRenderingInfoProviding-Protocol.h>

@class NSArray, NSString, SNRenderableModel, UIView;
@protocol SNAnimationModelProviding, SNPlayerViewing><SNPlaybackControlling;

@interface SNRenderingInfoProvider : NSObject <SNPlayerViewDelegate, SNRenderingInfoProviding>
{
    _Bool _shouldSeekToEnd;
    UIView<SNPlayerViewing><SNPlaybackControlling> *_playerView;
    SNRenderableModel *_renderableModel;
    id <SNAnimationModelProviding> _modelProvider;
    NSArray *_componentInfos;
    _Bool _fetchInProgress;
    CDUnknownBlockType _completionBlock;
}

- (void).cxx_destruct;
- (void)_callCreateRenderingComponentsInfosOnMainWithCompletion:(CDUnknownBlockType)arg1;
- (id)playerView;
- (void)didLayoutSubviews;
- (void)fetchRenderingComponentInfos:(CDUnknownBlockType)arg1;
- (void)setPlayerView:(id)arg1 renderableModel:(id)arg2 modelProvider:(id)arg3;
- (id)initWithShouldSeekToEnd:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

