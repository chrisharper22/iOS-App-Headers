//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGSundialVideoClip, NSMutableArray;

@interface IGSundialTimelineVideoSegment : UIView
{
    IGSundialVideoClip *_cachedVideoClip;
    UIView *_thumbnailContainer;
    UIView *_snapshottableThumbnailWrapperView;
    NSMutableArray *_thumbnailLayers;
    double _prevTimeToDistanceRatio;
    double _amountTrimmedFromStart;
    double _amountTrimmedFromEnd;
}

- (void).cxx_destruct;
@property(nonatomic) double amountTrimmedFromEnd; // @synthesize amountTrimmedFromEnd=_amountTrimmedFromEnd;
@property(nonatomic) double amountTrimmedFromStart; // @synthesize amountTrimmedFromStart=_amountTrimmedFromStart;
@property(readonly, nonatomic) double untrimmedDuration;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) IGSundialVideoClip *videoClip;
- (void)layoutSubviews;
- (id)initWithVideoClip:(id)arg1;

@end

