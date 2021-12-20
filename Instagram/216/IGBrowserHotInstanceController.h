//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBTimer, IGBrowserViewController;
@protocol IGUserLauncherSet;

@interface IGBrowserHotInstanceController : NSObject
{
    id <IGUserLauncherSet> _launcherSet;
    FBTimer *_destoryTimer;
    double _delayKillTime;
    _Bool _igDelayKillForever;
    IGBrowserViewController *_browserInstance;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGBrowserViewController *browserInstance; // @synthesize browserInstance=_browserInstance;
- (void)_clearTimer;
- (void)preserveBrowserInstance:(id)arg1;
- (_Bool)isEnabled;
- (id)initWithLauncherSet:(id)arg1;

@end
