//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGFeedUFITooltipProvider-Protocol.h"
#import "IGTooltipViewDelegate-Protocol.h"

@class IGTooltipView, IGUserDefaults, NSString;
@protocol IGUserLauncherSetProviding;

@interface IGFeedUFIDirectQuickSendTooltipProvider : NSObject <IGTooltipViewDelegate, IGFeedUFITooltipProvider>
{
    IGUserDefaults *_userDefaults;
    id <IGUserLauncherSetProviding> _launcherProvider;
    IGTooltipView *_lastTooltip;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGTooltipView *lastTooltip; // @synthesize lastTooltip=_lastTooltip;
@property(readonly, nonatomic) id <IGUserLauncherSetProviding> launcherProvider; // @synthesize launcherProvider=_launcherProvider;
@property(readonly, nonatomic) IGUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (_Bool)_hasInteracted;
- (long long)_seenCount;
- (void)didTapTooltipView:(id)arg1;
- (void)tooltipDidShow;
- (id)tooltipView;
- (id)tooltipTargetButtonFromCell:(id)arg1;
- (_Bool)isEligible;
- (void)hideTooltipIfVisible;
- (id)initWithUserDefaults:(id)arg1 launcherProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

