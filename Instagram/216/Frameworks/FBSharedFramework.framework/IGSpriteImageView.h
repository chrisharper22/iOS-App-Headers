//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/CAAnimationDelegate-Protocol.h>
#import <FBSharedFramework/IGImageViewDelegate-Protocol.h>

@class CAKeyframeAnimation, IGImageSpecifier, IGImageView, NSArray, NSString;
@protocol IGSpriteImageViewDelegate;

@interface IGSpriteImageView : UIView <IGImageViewDelegate, CAAnimationDelegate>
{
    CAKeyframeAnimation *_animation;
    _Bool _isAnimating;
    IGImageView *_imageView;
    NSArray *_spriteFrames;
    double _animationDuration;
    double _animationRepeatCount;
    id <IGSpriteImageViewDelegate> _delegate;
    struct CGSize _imageSize;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGSpriteImageViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double animationRepeatCount; // @synthesize animationRepeatCount=_animationRepeatCount;
@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(retain, nonatomic) NSArray *spriteFrames; // @synthesize spriteFrames=_spriteFrames;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) IGImageView *imageView; // @synthesize imageView=_imageView;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_spritifyImage;
- (void)startAnimating;
- (void)imageView:(id)arg1 willRequestImageWithURL:(id)arg2;
- (void)imageView:(id)arg1 didUpdateLoadingState:(id)arg2;
- (void)imageView:(id)arg1 didUpdateDownloadProgress:(double)arg2;
- (void)imageView:(id)arg1 didFailToLoadImageWithError:(id)arg2 networkRequestSummary:(id)arg3;
- (void)imageView:(id)arg1 didLoadImageFromSource:(unsigned long long)arg2 networkRequestSummary:(id)arg3;
@property(nonatomic) long long contentMode;
@property(retain, nonatomic) IGImageSpecifier *imageSpecifier;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

