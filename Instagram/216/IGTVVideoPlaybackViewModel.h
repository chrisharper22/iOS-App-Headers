//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, UIImage, UIView;

@interface IGTVVideoPlaybackViewModel : NSObject
{
    _Bool _videoViewHidden;
    _Bool _videoLoading;
    _Bool _fullscreenEnabled;
    NSURL *_coverImageURL;
    NSURL *_backgroundImageURL;
    UIImage *_initialPlaybackFrame;
    UIView *_videoView;
    long long _playerMode;
    long long _videoOrientation;
    struct CGSize _videoAspectRatio;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(readonly, nonatomic) long long playerMode; // @synthesize playerMode=_playerMode;
@property(readonly, nonatomic) _Bool fullscreenEnabled; // @synthesize fullscreenEnabled=_fullscreenEnabled;
@property(readonly, nonatomic) _Bool videoLoading; // @synthesize videoLoading=_videoLoading;
@property(readonly, nonatomic) _Bool videoViewHidden; // @synthesize videoViewHidden=_videoViewHidden;
@property(readonly, nonatomic) struct CGSize videoAspectRatio; // @synthesize videoAspectRatio=_videoAspectRatio;
@property(readonly, nonatomic) UIView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) UIImage *initialPlaybackFrame; // @synthesize initialPlaybackFrame=_initialPlaybackFrame;
@property(readonly, nonatomic) NSURL *backgroundImageURL; // @synthesize backgroundImageURL=_backgroundImageURL;
@property(readonly, nonatomic) NSURL *coverImageURL; // @synthesize coverImageURL=_coverImageURL;
- (id)initWithCoverImageURL:(id)arg1 backgroundImageURL:(id)arg2 initialPlaybackFrame:(id)arg3 videoView:(id)arg4 videoAspectRatio:(struct CGSize)arg5 videoViewHidden:(_Bool)arg6 videoLoading:(_Bool)arg7 fullscreenEnabled:(_Bool)arg8 playerMode:(long long)arg9 videoOrientation:(long long)arg10;

@end

