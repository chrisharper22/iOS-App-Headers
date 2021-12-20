//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IGFeedSectionUnifiedActionDelegate;

@interface IGFeedSectionUnifiedActionController : NSObject
{
    id <IGFeedSectionUnifiedActionDelegate> _delegate;
    double _actionBeginMediaPercentageThreshold;
    double _actionEndMediaPercentageThreshold;
    _Bool _withinValidActionViewport;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isWithinValidActionViewport) _Bool withinValidActionViewport; // @synthesize withinValidActionViewport=_withinValidActionViewport;
- (id)viewpointActionForMedia:(id)arg1 sectionController:(id)arg2;
- (id)initWithDelegate:(id)arg1 actionBeginMediaPercentageThreshold:(double)arg2 actionEndMediaPercentageThreshold:(double)arg3;

@end
