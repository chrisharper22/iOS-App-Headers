//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGStoryGradientRingView, NSString, UIView;

@interface IGUnifiedVideoBufferingManager : NSObject
{
    UIView *_presentingView;
    IGStoryGradientRingView *_bufferingIndicatorView;
    _Bool _shouldDisplayBufferingView;
    long long _showDelay;
    NSString *_currentUUID;
}

- (void).cxx_destruct;
- (void)_displayBufferingViewWithDelayForUUID:(id)arg1;
- (void)_createBufferingView;
- (void)_setShouldDisplayBufferingView:(_Bool)arg1;
- (void)configureWithShowDelay:(long long)arg1;
- (void)videoDidBeginPlayback;
- (void)videoBufferDidEmpty;
- (void)layoutInPresentingView;
- (void)setAlpha:(double)arg1;
@property(readonly, nonatomic) UIView *bufferingView;
- (void)prepareForReuse;
- (id)initWithPresentingView:(id)arg1;

@end

