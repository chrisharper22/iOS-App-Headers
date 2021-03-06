//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGGLKNode.h>

#import <FBSharedFramework/IGPlaybackTimelineDelegate-Protocol.h>

@class IGPlaybackTimeline, IGStoryPhotoBoothAsset, NSString;
@protocol IGPhotoBoothVariantNode;

@interface IGPhotoBoothNode : IGGLKNode <IGPlaybackTimelineDelegate>
{
    IGPlaybackTimeline *_playbackTimeline;
    IGGLKNode<IGPhotoBoothVariantNode> *_variantNode;
    IGStoryPhotoBoothAsset *_asset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGStoryPhotoBoothAsset *asset; // @synthesize asset=_asset;
- (void)_setVariantNodeWithMode:(unsigned long long)arg1 captureTextures:(id)arg2;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)seekToTime:(double)arg1;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double currentPlaybackTime;
@property(nonatomic) double playbackRate;
- (void)layoutChildren;
- (id)initWithFrame:(struct CGRect)arg1 session:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

