//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface IGBugReportingAnnotationOverlayView : UIView
{
    NSMutableArray *_lineSegments;
}

- (void).cxx_destruct;
- (void)_drawLines:(struct CGSize)arg1;
- (id)imageByAnnotatingImage:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)addLineSegmentFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2;
- (id)init;

@end

