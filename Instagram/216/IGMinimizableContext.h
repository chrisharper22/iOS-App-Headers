//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IGMinimizableContainerViewController, IGMinimizableMode;

@interface IGMinimizableContext : NSObject
{
    _Bool _isBeingDismissed;
    IGMinimizableMode *_mode;
    unsigned long long _minimizedViewState;
    IGMinimizableContainerViewController *_containerViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak IGMinimizableContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) _Bool isBeingDismissed; // @synthesize isBeingDismissed=_isBeingDismissed;
@property(nonatomic) unsigned long long minimizedViewState; // @synthesize minimizedViewState=_minimizedViewState;
@property(copy, nonatomic) IGMinimizableMode *mode; // @synthesize mode=_mode;
- (void)invalidateContext;
- (void)dismissContextAnimated:(_Bool)arg1;
- (_Bool)maximizeContextAnimated:(_Bool)arg1;
- (_Bool)minimizeContextAnimated:(_Bool)arg1;

@end

