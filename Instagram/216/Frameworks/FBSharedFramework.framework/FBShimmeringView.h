//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/FBShimmering-Protocol.h>

@class NSString;

@interface FBShimmeringView : UIView <FBShimmering>
{
    UIView *_contentView;
}

+ (Class)layerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double shimmerDuration;
@property(nonatomic) double shimmeringBeginTime;
@property(nonatomic) double shimmeringEndFadeDuration;
@property(nonatomic) double shimmeringBeginFadeDuration;
@property(readonly, nonatomic) double shimmeringFadeTime;
@property(nonatomic) long long shimmeringGradientType;
@property(nonatomic) long long shimmeringDirection;
@property(nonatomic, getter=shimmeringHighlightLength, setter=setShimmeringHighlightLength:) double shimmeringHighlightWidth;
@property(nonatomic) double shimmeringSpeed;
@property(nonatomic) double shimmeringOpacity;
@property(nonatomic) double shimmeringAnimationOpacity;
@property(nonatomic) double shimmeringPauseDuration;
@property(nonatomic, getter=isShimmering) _Bool shimmering;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double shimmeringHighlightLength;
@property(readonly) Class superclass;

@end

