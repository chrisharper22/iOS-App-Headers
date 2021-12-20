//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"
#import "IGAnimatedThumbnailImageProviderDelegate-Protocol.h"

@class CALayer, NSString, UIImage;

@interface IGAnimatedThumbnailView : UIView <IGAnimatedThumbnailImageProviderDelegate, CAAnimationDelegate>
{
    CALayer *_spriteLayer;
    struct CGSize _spriteSize;
    UIImage *_spriteSheetImage;
    double _singleFrameWidthPercentage;
    double _singleFrameHeightPercentage;
    long long _columnCount;
    long long _rowCount;
    _Bool _playRequested;
    double _duration;
    double _speed;
    double _playPercentage;
}

- (void).cxx_destruct;
@property(nonatomic) double playPercentage; // @synthesize playPercentage=_playPercentage;
@property(nonatomic) double speed; // @synthesize speed=_speed;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)_applicationWillEnterForeground;
- (void)_stopAnimation;
- (void)reset;
- (void)stop;
- (void)play;
- (void)setSpriteSheetImage:(id)arg1 spriteSize:(struct CGSize)arg2;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) _Bool isPlaying;
- (id)initWithFrame:(struct CGRect)arg1 spriteSheetImage:(id)arg2 spriteSize:(struct CGSize)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)handleMemoryWarning;
- (void)imageLoaded:(id)arg1 size:(struct CGSize)arg2 duration:(double)arg3 error:(id)arg4;
- (void)configureWithAnimatedThumbnailInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

