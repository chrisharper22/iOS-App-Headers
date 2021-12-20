//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBViewpointContext : NSObject
{
    _Bool _hasSeenTopLeftCorner;
    _Bool _hasSeenBottomRightCorner;
    double _startTime;
    double _timespent;
    double _lastImpressionTime;
    long long _state;
    unsigned long long _reason;
    double _percentVisible;
    double _percentViewportCoverage;
    long long _visibleEdges;
    struct CGRect _viewport;
    struct CGRect _viewportBoundingRect;
    struct CGRect _boundingRectInWindow;
    struct CGRect _viewFrame;
}

@property(readonly, nonatomic) struct CGRect viewFrame; // @synthesize viewFrame=_viewFrame;
@property(readonly, nonatomic) struct CGRect boundingRectInWindow; // @synthesize boundingRectInWindow=_boundingRectInWindow;
@property(readonly, nonatomic) struct CGRect viewportBoundingRect; // @synthesize viewportBoundingRect=_viewportBoundingRect;
@property(readonly, nonatomic) struct CGRect viewport; // @synthesize viewport=_viewport;
@property(readonly, nonatomic) long long visibleEdges; // @synthesize visibleEdges=_visibleEdges;
@property(readonly, nonatomic) _Bool hasSeenBottomRightCorner; // @synthesize hasSeenBottomRightCorner=_hasSeenBottomRightCorner;
@property(readonly, nonatomic) _Bool hasSeenTopLeftCorner; // @synthesize hasSeenTopLeftCorner=_hasSeenTopLeftCorner;
@property(readonly, nonatomic) double percentViewportCoverage; // @synthesize percentViewportCoverage=_percentViewportCoverage;
@property(readonly, nonatomic) double percentVisible; // @synthesize percentVisible=_percentVisible;
@property(readonly, nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double lastImpressionTime; // @synthesize lastImpressionTime=_lastImpressionTime;
@property(readonly, nonatomic) double timespent; // @synthesize timespent=_timespent;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
- (_Bool)hasSeenBefore;
@property(readonly, nonatomic) _Bool hasBeenViewedCompletely;
- (id)initWithStartTime:(double)arg1 timespent:(double)arg2 lastImpressionTime:(double)arg3 state:(long long)arg4 percentVisible:(double)arg5 percentViewportCoverage:(double)arg6 hasSeenTopLeftCorner:(_Bool)arg7 hasSeenBottomRightCorner:(_Bool)arg8 visibleEdges:(long long)arg9 reason:(unsigned long long)arg10 viewport:(struct CGRect)arg11 viewportBoundingRect:(struct CGRect)arg12 viewFrame:(struct CGRect)arg13 boundingRectInWindow:(struct CGRect)arg14;

@end
