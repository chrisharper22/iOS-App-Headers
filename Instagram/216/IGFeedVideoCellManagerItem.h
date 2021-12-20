//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGFeedVideoViewSession, IGVideoPlaybackConfiguration, IGVideoPlaybackController, UICollectionViewCell;
@protocol IGFeedVideoCell;

@interface IGFeedVideoCellManagerItem : NSObject
{
    UICollectionViewCell<IGFeedVideoCell> *_videoCell;
    IGVideoPlaybackController *_videoPlaybackController;
    IGFeedVideoViewSession *_videoViewSession50percent;
    IGFeedVideoViewSession *_videoViewSession100percent;
    IGVideoPlaybackConfiguration *_videoPlaybackConfig;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGVideoPlaybackConfiguration *videoPlaybackConfig; // @synthesize videoPlaybackConfig=_videoPlaybackConfig;
@property(readonly, nonatomic) IGFeedVideoViewSession *videoViewSession100percent; // @synthesize videoViewSession100percent=_videoViewSession100percent;
@property(readonly, nonatomic) IGFeedVideoViewSession *videoViewSession50percent; // @synthesize videoViewSession50percent=_videoViewSession50percent;
@property(readonly, nonatomic) IGVideoPlaybackController *videoPlaybackController; // @synthesize videoPlaybackController=_videoPlaybackController;
@property(readonly, nonatomic) UICollectionViewCell<IGFeedVideoCell> *videoCell; // @synthesize videoCell=_videoCell;
- (id)video;
- (id)initWithVideoCell:(id)arg1 videoPlaybackController:(id)arg2 videoViewSession50percent:(id)arg3 videoViewSession100percent:(id)arg4 videoPlaybackConfig:(id)arg5;

@end

