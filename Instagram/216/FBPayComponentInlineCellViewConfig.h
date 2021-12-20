//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class FBPayComponentInlineCellContextViewViewConfig, UIColor, UIFont;

@interface FBPayComponentInlineCellViewConfig : FBValueObject <NSCopying, NSCoding>
{
    UIFont *_leftAccessoryLabelFont;
    UIColor *_leftAccessoryLabelTextColor;
    double _leftAccessoryLabelLeadingEdge;
    double _leftAccessoryLabelTopEdge;
    double _leftAccessoryLabelHeight;
    double _leftAccessoryLabelWidth;
    double _leftAccessoryLabelBottomEdge;
    double _contextViewLeadingEdge;
    double _contextViewTopEdge;
    double _contextViewBottomEdge;
    FBPayComponentInlineCellContextViewViewConfig *_contextViewViewConfig;
    double _rightAccessoryViewIconSize;
    double _rightAccessoryViewHeight;
    double _rightAccessoryViewWidth;
    double _rightAccessoryViewTrailingEdge;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double rightAccessoryViewTrailingEdge; // @synthesize rightAccessoryViewTrailingEdge=_rightAccessoryViewTrailingEdge;
@property(readonly, nonatomic) double rightAccessoryViewWidth; // @synthesize rightAccessoryViewWidth=_rightAccessoryViewWidth;
@property(readonly, nonatomic) double rightAccessoryViewHeight; // @synthesize rightAccessoryViewHeight=_rightAccessoryViewHeight;
@property(readonly, nonatomic) double rightAccessoryViewIconSize; // @synthesize rightAccessoryViewIconSize=_rightAccessoryViewIconSize;
@property(readonly, copy, nonatomic) FBPayComponentInlineCellContextViewViewConfig *contextViewViewConfig; // @synthesize contextViewViewConfig=_contextViewViewConfig;
@property(readonly, nonatomic) double contextViewBottomEdge; // @synthesize contextViewBottomEdge=_contextViewBottomEdge;
@property(readonly, nonatomic) double contextViewTopEdge; // @synthesize contextViewTopEdge=_contextViewTopEdge;
@property(readonly, nonatomic) double contextViewLeadingEdge; // @synthesize contextViewLeadingEdge=_contextViewLeadingEdge;
@property(readonly, nonatomic) double leftAccessoryLabelBottomEdge; // @synthesize leftAccessoryLabelBottomEdge=_leftAccessoryLabelBottomEdge;
@property(readonly, nonatomic) double leftAccessoryLabelWidth; // @synthesize leftAccessoryLabelWidth=_leftAccessoryLabelWidth;
@property(readonly, nonatomic) double leftAccessoryLabelHeight; // @synthesize leftAccessoryLabelHeight=_leftAccessoryLabelHeight;
@property(readonly, nonatomic) double leftAccessoryLabelTopEdge; // @synthesize leftAccessoryLabelTopEdge=_leftAccessoryLabelTopEdge;
@property(readonly, nonatomic) double leftAccessoryLabelLeadingEdge; // @synthesize leftAccessoryLabelLeadingEdge=_leftAccessoryLabelLeadingEdge;
@property(readonly, copy, nonatomic) UIColor *leftAccessoryLabelTextColor; // @synthesize leftAccessoryLabelTextColor=_leftAccessoryLabelTextColor;
@property(readonly, copy, nonatomic) UIFont *leftAccessoryLabelFont; // @synthesize leftAccessoryLabelFont=_leftAccessoryLabelFont;
- (id)initWithLeftAccessoryLabelFont:(id)arg1 leftAccessoryLabelTextColor:(id)arg2 leftAccessoryLabelLeadingEdge:(double)arg3 leftAccessoryLabelTopEdge:(double)arg4 leftAccessoryLabelHeight:(double)arg5 leftAccessoryLabelWidth:(double)arg6 leftAccessoryLabelBottomEdge:(double)arg7 contextViewLeadingEdge:(double)arg8 contextViewTopEdge:(double)arg9 contextViewBottomEdge:(double)arg10 contextViewViewConfig:(id)arg11 rightAccessoryViewIconSize:(double)arg12 rightAccessoryViewHeight:(double)arg13 rightAccessoryViewWidth:(double)arg14 rightAccessoryViewTrailingEdge:(double)arg15;

@end

