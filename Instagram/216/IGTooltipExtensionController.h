//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKContext, BKModel, CADisplayLink, IGTooltipView, UIView;

@interface IGTooltipExtensionController : NSObject
{
    UIView *_view;
    BKModel *_extensionModel;
    BKContext *_context;
    CADisplayLink *_displayLink;
    IGTooltipView *_tooltip;
    struct CGPoint _initialDisplayAnchorPoint;
    _Bool _toolTipDidDisplay;
}

- (void).cxx_destruct;
- (id)_loadTooltipSeenState;
- (void)_markTooltipSeen;
- (_Bool)_needsToolTip;
- (void)_updateTooltip:(id)arg1;
- (void)cleanup;
- (void)displayWhenReady;
- (id)initWithView:(id)arg1 extensionModel:(id)arg2 context:(id)arg3;

@end
