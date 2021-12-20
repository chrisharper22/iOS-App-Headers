//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGAlignmentGuideLine;

@interface IGAlignmentGrid : UIView
{
    _Bool _shouldAdjustCenterAlignmentGuidesWithMargins;
    IGAlignmentGuideLine *_verticalCenterAlignmentGuide;
    IGAlignmentGuideLine *_horizontalCenterAlignmentGuide;
    IGAlignmentGuideLine *_leftMarginAlignmentGuide;
    IGAlignmentGuideLine *_rightMarginAlignmentGuide;
    IGAlignmentGuideLine *_topMarginAlignmentGuide;
    IGAlignmentGuideLine *_bottomMarginAlignmentGuide;
    struct UIEdgeInsets _marginPadding;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGAlignmentGuideLine *bottomMarginAlignmentGuide; // @synthesize bottomMarginAlignmentGuide=_bottomMarginAlignmentGuide;
@property(readonly, nonatomic) IGAlignmentGuideLine *topMarginAlignmentGuide; // @synthesize topMarginAlignmentGuide=_topMarginAlignmentGuide;
@property(readonly, nonatomic) IGAlignmentGuideLine *rightMarginAlignmentGuide; // @synthesize rightMarginAlignmentGuide=_rightMarginAlignmentGuide;
@property(readonly, nonatomic) IGAlignmentGuideLine *leftMarginAlignmentGuide; // @synthesize leftMarginAlignmentGuide=_leftMarginAlignmentGuide;
@property(nonatomic) _Bool shouldAdjustCenterAlignmentGuidesWithMargins; // @synthesize shouldAdjustCenterAlignmentGuidesWithMargins=_shouldAdjustCenterAlignmentGuidesWithMargins;
@property(nonatomic) struct UIEdgeInsets marginPadding; // @synthesize marginPadding=_marginPadding;
@property(readonly, nonatomic) IGAlignmentGuideLine *horizontalCenterAlignmentGuide; // @synthesize horizontalCenterAlignmentGuide=_horizontalCenterAlignmentGuide;
@property(readonly, nonatomic) IGAlignmentGuideLine *verticalCenterAlignmentGuide; // @synthesize verticalCenterAlignmentGuide=_verticalCenterAlignmentGuide;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;

@end
